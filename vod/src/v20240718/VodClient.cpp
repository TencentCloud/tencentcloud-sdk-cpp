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


VodClient::CreateIncrementalMigrationStrategyOutcome VodClient::CreateIncrementalMigrationStrategy(const CreateIncrementalMigrationStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIncrementalMigrationStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIncrementalMigrationStrategyResponse rsp = CreateIncrementalMigrationStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIncrementalMigrationStrategyOutcome(rsp);
        else
            return CreateIncrementalMigrationStrategyOutcome(o.GetError());
    }
    else
    {
        return CreateIncrementalMigrationStrategyOutcome(outcome.GetError());
    }
}

void VodClient::CreateIncrementalMigrationStrategyAsync(const CreateIncrementalMigrationStrategyRequest& request, const CreateIncrementalMigrationStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateIncrementalMigrationStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateIncrementalMigrationStrategyOutcomeCallable VodClient::CreateIncrementalMigrationStrategyCallable(const CreateIncrementalMigrationStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateIncrementalMigrationStrategyOutcome()>>(
        [this, request]()
        {
            return this->CreateIncrementalMigrationStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::CreateStorageOutcome VodClient::CreateStorage(const CreateStorageRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStorage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStorageResponse rsp = CreateStorageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStorageOutcome(rsp);
        else
            return CreateStorageOutcome(o.GetError());
    }
    else
    {
        return CreateStorageOutcome(outcome.GetError());
    }
}

void VodClient::CreateStorageAsync(const CreateStorageRequest& request, const CreateStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStorage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateStorageOutcomeCallable VodClient::CreateStorageCallable(const CreateStorageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStorageOutcome()>>(
        [this, request]()
        {
            return this->CreateStorage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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

VodClient::DeleteIncrementalMigrationStrategyOutcome VodClient::DeleteIncrementalMigrationStrategy(const DeleteIncrementalMigrationStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIncrementalMigrationStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIncrementalMigrationStrategyResponse rsp = DeleteIncrementalMigrationStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIncrementalMigrationStrategyOutcome(rsp);
        else
            return DeleteIncrementalMigrationStrategyOutcome(o.GetError());
    }
    else
    {
        return DeleteIncrementalMigrationStrategyOutcome(outcome.GetError());
    }
}

void VodClient::DeleteIncrementalMigrationStrategyAsync(const DeleteIncrementalMigrationStrategyRequest& request, const DeleteIncrementalMigrationStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteIncrementalMigrationStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DeleteIncrementalMigrationStrategyOutcomeCallable VodClient::DeleteIncrementalMigrationStrategyCallable(const DeleteIncrementalMigrationStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteIncrementalMigrationStrategyOutcome()>>(
        [this, request]()
        {
            return this->DeleteIncrementalMigrationStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeIncrementalMigrationStrategyInfosOutcome VodClient::DescribeIncrementalMigrationStrategyInfos(const DescribeIncrementalMigrationStrategyInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIncrementalMigrationStrategyInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIncrementalMigrationStrategyInfosResponse rsp = DescribeIncrementalMigrationStrategyInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIncrementalMigrationStrategyInfosOutcome(rsp);
        else
            return DescribeIncrementalMigrationStrategyInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeIncrementalMigrationStrategyInfosOutcome(outcome.GetError());
    }
}

void VodClient::DescribeIncrementalMigrationStrategyInfosAsync(const DescribeIncrementalMigrationStrategyInfosRequest& request, const DescribeIncrementalMigrationStrategyInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIncrementalMigrationStrategyInfos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeIncrementalMigrationStrategyInfosOutcomeCallable VodClient::DescribeIncrementalMigrationStrategyInfosCallable(const DescribeIncrementalMigrationStrategyInfosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIncrementalMigrationStrategyInfosOutcome()>>(
        [this, request]()
        {
            return this->DescribeIncrementalMigrationStrategyInfos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeStorageOutcome VodClient::DescribeStorage(const DescribeStorageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStorage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStorageResponse rsp = DescribeStorageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStorageOutcome(rsp);
        else
            return DescribeStorageOutcome(o.GetError());
    }
    else
    {
        return DescribeStorageOutcome(outcome.GetError());
    }
}

void VodClient::DescribeStorageAsync(const DescribeStorageRequest& request, const DescribeStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStorage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeStorageOutcomeCallable VodClient::DescribeStorageCallable(const DescribeStorageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStorageOutcome()>>(
        [this, request]()
        {
            return this->DescribeStorage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ModifyIncrementalMigrationStrategyOutcome VodClient::ModifyIncrementalMigrationStrategy(const ModifyIncrementalMigrationStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIncrementalMigrationStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIncrementalMigrationStrategyResponse rsp = ModifyIncrementalMigrationStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIncrementalMigrationStrategyOutcome(rsp);
        else
            return ModifyIncrementalMigrationStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyIncrementalMigrationStrategyOutcome(outcome.GetError());
    }
}

void VodClient::ModifyIncrementalMigrationStrategyAsync(const ModifyIncrementalMigrationStrategyRequest& request, const ModifyIncrementalMigrationStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyIncrementalMigrationStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ModifyIncrementalMigrationStrategyOutcomeCallable VodClient::ModifyIncrementalMigrationStrategyCallable(const ModifyIncrementalMigrationStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyIncrementalMigrationStrategyOutcome()>>(
        [this, request]()
        {
            return this->ModifyIncrementalMigrationStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

