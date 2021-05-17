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

#include <tencentcloud/mna/v20210119/MnaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Mna::V20210119;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-01-19";
    const string ENDPOINT = "mna.tencentcloudapi.com";
}

MnaClient::MnaClient(const Credential &credential, const string &region) :
    MnaClient(credential, region, ClientProfile())
{
}

MnaClient::MnaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MnaClient::CreateQosOutcome MnaClient::CreateQos(const CreateQosRequest &request)
{
    auto outcome = MakeRequest(request, "CreateQos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateQosResponse rsp = CreateQosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateQosOutcome(rsp);
        else
            return CreateQosOutcome(o.GetError());
    }
    else
    {
        return CreateQosOutcome(outcome.GetError());
    }
}

void MnaClient::CreateQosAsync(const CreateQosRequest& request, const CreateQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateQos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::CreateQosOutcomeCallable MnaClient::CreateQosCallable(const CreateQosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateQosOutcome()>>(
        [this, request]()
        {
            return this->CreateQos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MnaClient::DeleteQosOutcome MnaClient::DeleteQos(const DeleteQosRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteQos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteQosResponse rsp = DeleteQosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteQosOutcome(rsp);
        else
            return DeleteQosOutcome(o.GetError());
    }
    else
    {
        return DeleteQosOutcome(outcome.GetError());
    }
}

void MnaClient::DeleteQosAsync(const DeleteQosRequest& request, const DeleteQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteQos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::DeleteQosOutcomeCallable MnaClient::DeleteQosCallable(const DeleteQosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteQosOutcome()>>(
        [this, request]()
        {
            return this->DeleteQos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

