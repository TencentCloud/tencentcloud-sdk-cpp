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

#include <tencentcloud/tan/v20220420/TanClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tan::V20220420;
using namespace TencentCloud::Tan::V20220420::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-04-20";
    const string ENDPOINT = "tan.tencentcloudapi.com";
}

TanClient::TanClient(const Credential &credential, const string &region) :
    TanClient(credential, region, ClientProfile())
{
}

TanClient::TanClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TanClient::CreateBlockNodeRecordsOutcome TanClient::CreateBlockNodeRecords(const CreateBlockNodeRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBlockNodeRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBlockNodeRecordsResponse rsp = CreateBlockNodeRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBlockNodeRecordsOutcome(rsp);
        else
            return CreateBlockNodeRecordsOutcome(o.GetError());
    }
    else
    {
        return CreateBlockNodeRecordsOutcome(outcome.GetError());
    }
}

void TanClient::CreateBlockNodeRecordsAsync(const CreateBlockNodeRecordsRequest& request, const CreateBlockNodeRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBlockNodeRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TanClient::CreateBlockNodeRecordsOutcomeCallable TanClient::CreateBlockNodeRecordsCallable(const CreateBlockNodeRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBlockNodeRecordsOutcome()>>(
        [this, request]()
        {
            return this->CreateBlockNodeRecords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

