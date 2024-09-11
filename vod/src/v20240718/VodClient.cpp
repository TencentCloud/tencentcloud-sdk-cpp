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

#include <tencentcloud/vod/v20240718/VodClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Vod::V20240718;
using namespace TencentCloud::Vod::V20240718::Model;
using namespace std;

namespace
{
    const string VERSION = "2024-07-18";
    const string ENDPOINT = "vod.tencentcloudapi.com";
}

VodClient::VodClient(const Credential &credential, const string &region) :
    VodClient(credential, region, ClientProfile())
{
}

VodClient::VodClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


VodClient::CreateStorageCredentialsOutcome VodClient::CreateStorageCredentials(const CreateStorageCredentialsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStorageCredentials");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStorageCredentialsResponse rsp = CreateStorageCredentialsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStorageCredentialsOutcome(rsp);
        else
            return CreateStorageCredentialsOutcome(o.GetError());
    }
    else
    {
        return CreateStorageCredentialsOutcome(outcome.GetError());
    }
}

void VodClient::CreateStorageCredentialsAsync(const CreateStorageCredentialsRequest& request, const CreateStorageCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStorageCredentials(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateStorageCredentialsOutcomeCallable VodClient::CreateStorageCredentialsCallable(const CreateStorageCredentialsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStorageCredentialsOutcome()>>(
        [this, request]()
        {
            return this->CreateStorageCredentials(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

