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

#include <tencentcloud/tse/v20201207/TseClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tse::V20201207;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-12-07";
    const string ENDPOINT = "tse.tencentcloudapi.com";
}

TseClient::TseClient(const Credential &credential, const string &region) :
    TseClient(credential, region, ClientProfile())
{
}

TseClient::TseClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TseClient::ManageConfigOutcome TseClient::ManageConfig(const ManageConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ManageConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ManageConfigResponse rsp = ManageConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ManageConfigOutcome(rsp);
        else
            return ManageConfigOutcome(o.GetError());
    }
    else
    {
        return ManageConfigOutcome(outcome.GetError());
    }
}

void TseClient::ManageConfigAsync(const ManageConfigRequest& request, const ManageConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ManageConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::ManageConfigOutcomeCallable TseClient::ManageConfigCallable(const ManageConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ManageConfigOutcome()>>(
        [this, request]()
        {
            return this->ManageConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

