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

#include <tencentcloud/bma/v20210624/BmaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Bma::V20210624;
using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-06-24";
    const string ENDPOINT = "bma.tencentcloudapi.com";
}

BmaClient::BmaClient(const Credential &credential, const string &region) :
    BmaClient(credential, region, ClientProfile())
{
}

BmaClient::BmaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BmaClient::CreateCRBlockOutcome BmaClient::CreateCRBlock(const CreateCRBlockRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCRBlock");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCRBlockResponse rsp = CreateCRBlockResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCRBlockOutcome(rsp);
        else
            return CreateCRBlockOutcome(o.GetError());
    }
    else
    {
        return CreateCRBlockOutcome(outcome.GetError());
    }
}

void BmaClient::CreateCRBlockAsync(const CreateCRBlockRequest& request, const CreateCRBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCRBlock(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::CreateCRBlockOutcomeCallable BmaClient::CreateCRBlockCallable(const CreateCRBlockRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCRBlockOutcome()>>(
        [this, request]()
        {
            return this->CreateCRBlock(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::CreateCRCompanyVerifyOutcome BmaClient::CreateCRCompanyVerify(const CreateCRCompanyVerifyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCRCompanyVerify");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCRCompanyVerifyResponse rsp = CreateCRCompanyVerifyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCRCompanyVerifyOutcome(rsp);
        else
            return CreateCRCompanyVerifyOutcome(o.GetError());
    }
    else
    {
        return CreateCRCompanyVerifyOutcome(outcome.GetError());
    }
}

void BmaClient::CreateCRCompanyVerifyAsync(const CreateCRCompanyVerifyRequest& request, const CreateCRCompanyVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCRCompanyVerify(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::CreateCRCompanyVerifyOutcomeCallable BmaClient::CreateCRCompanyVerifyCallable(const CreateCRCompanyVerifyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCRCompanyVerifyOutcome()>>(
        [this, request]()
        {
            return this->CreateCRCompanyVerify(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::CreateCRRightOutcome BmaClient::CreateCRRight(const CreateCRRightRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCRRight");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCRRightResponse rsp = CreateCRRightResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCRRightOutcome(rsp);
        else
            return CreateCRRightOutcome(o.GetError());
    }
    else
    {
        return CreateCRRightOutcome(outcome.GetError());
    }
}

void BmaClient::CreateCRRightAsync(const CreateCRRightRequest& request, const CreateCRRightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCRRight(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::CreateCRRightOutcomeCallable BmaClient::CreateCRRightCallable(const CreateCRRightRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCRRightOutcome()>>(
        [this, request]()
        {
            return this->CreateCRRight(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::DescribeCRWorkInfoOutcome BmaClient::DescribeCRWorkInfo(const DescribeCRWorkInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCRWorkInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCRWorkInfoResponse rsp = DescribeCRWorkInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCRWorkInfoOutcome(rsp);
        else
            return DescribeCRWorkInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeCRWorkInfoOutcome(outcome.GetError());
    }
}

void BmaClient::DescribeCRWorkInfoAsync(const DescribeCRWorkInfoRequest& request, const DescribeCRWorkInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCRWorkInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::DescribeCRWorkInfoOutcomeCallable BmaClient::DescribeCRWorkInfoCallable(const DescribeCRWorkInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCRWorkInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeCRWorkInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

