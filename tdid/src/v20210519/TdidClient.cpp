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

#include <tencentcloud/tdid/v20210519/TdidClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tdid::V20210519;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-05-19";
    const string ENDPOINT = "tdid.tencentcloudapi.com";
}

TdidClient::TdidClient(const Credential &credential, const string &region) :
    TdidClient(credential, region, ClientProfile())
{
}

TdidClient::TdidClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TdidClient::CreateCredentialOutcome TdidClient::CreateCredential(const CreateCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCredentialResponse rsp = CreateCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCredentialOutcome(rsp);
        else
            return CreateCredentialOutcome(o.GetError());
    }
    else
    {
        return CreateCredentialOutcome(outcome.GetError());
    }
}

void TdidClient::CreateCredentialAsync(const CreateCredentialRequest& request, const CreateCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCredential(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::CreateCredentialOutcomeCallable TdidClient::CreateCredentialCallable(const CreateCredentialRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCredentialOutcome()>>(
        [this, request]()
        {
            return this->CreateCredential(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::CreateSelectiveCredentialOutcome TdidClient::CreateSelectiveCredential(const CreateSelectiveCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSelectiveCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSelectiveCredentialResponse rsp = CreateSelectiveCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSelectiveCredentialOutcome(rsp);
        else
            return CreateSelectiveCredentialOutcome(o.GetError());
    }
    else
    {
        return CreateSelectiveCredentialOutcome(outcome.GetError());
    }
}

void TdidClient::CreateSelectiveCredentialAsync(const CreateSelectiveCredentialRequest& request, const CreateSelectiveCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSelectiveCredential(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::CreateSelectiveCredentialOutcomeCallable TdidClient::CreateSelectiveCredentialCallable(const CreateSelectiveCredentialRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSelectiveCredentialOutcome()>>(
        [this, request]()
        {
            return this->CreateSelectiveCredential(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::CreateTDidOutcome TdidClient::CreateTDid(const CreateTDidRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTDid");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTDidResponse rsp = CreateTDidResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTDidOutcome(rsp);
        else
            return CreateTDidOutcome(o.GetError());
    }
    else
    {
        return CreateTDidOutcome(outcome.GetError());
    }
}

void TdidClient::CreateTDidAsync(const CreateTDidRequest& request, const CreateTDidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTDid(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::CreateTDidOutcomeCallable TdidClient::CreateTDidCallable(const CreateTDidRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTDidOutcome()>>(
        [this, request]()
        {
            return this->CreateTDid(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdidClient::VerifyCredentialOutcome TdidClient::VerifyCredential(const VerifyCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyCredentialResponse rsp = VerifyCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyCredentialOutcome(rsp);
        else
            return VerifyCredentialOutcome(o.GetError());
    }
    else
    {
        return VerifyCredentialOutcome(outcome.GetError());
    }
}

void TdidClient::VerifyCredentialAsync(const VerifyCredentialRequest& request, const VerifyCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyCredential(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdidClient::VerifyCredentialOutcomeCallable TdidClient::VerifyCredentialCallable(const VerifyCredentialRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyCredentialOutcome()>>(
        [this, request]()
        {
            return this->VerifyCredential(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

