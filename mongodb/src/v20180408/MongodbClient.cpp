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

#include <tencentcloud/mongodb/v20180408/MongodbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Mongodb::V20180408;
using namespace TencentCloud::Mongodb::V20180408::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-04-08";
    const string ENDPOINT = "mongodb.tencentcloudapi.com";
}

MongodbClient::MongodbClient(const Credential &credential, const string &region) :
    MongodbClient(credential, region, ClientProfile())
{
}

MongodbClient::MongodbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MongodbClient::CreateDBInstanceOutcome MongodbClient::CreateDBInstance(const CreateDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDBInstanceResponse rsp = CreateDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDBInstanceOutcome(rsp);
        else
            return CreateDBInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateDBInstanceOutcome(outcome.GetError());
    }
}

void MongodbClient::CreateDBInstanceAsync(const CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MongodbClient::CreateDBInstanceOutcomeCallable MongodbClient::CreateDBInstanceCallable(const CreateDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MongodbClient::CreateDBInstanceHourOutcome MongodbClient::CreateDBInstanceHour(const CreateDBInstanceHourRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDBInstanceHour");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDBInstanceHourResponse rsp = CreateDBInstanceHourResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDBInstanceHourOutcome(rsp);
        else
            return CreateDBInstanceHourOutcome(o.GetError());
    }
    else
    {
        return CreateDBInstanceHourOutcome(outcome.GetError());
    }
}

void MongodbClient::CreateDBInstanceHourAsync(const CreateDBInstanceHourRequest& request, const CreateDBInstanceHourAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDBInstanceHour(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MongodbClient::CreateDBInstanceHourOutcomeCallable MongodbClient::CreateDBInstanceHourCallable(const CreateDBInstanceHourRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDBInstanceHourOutcome()>>(
        [this, request]()
        {
            return this->CreateDBInstanceHour(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MongodbClient::TerminateDBInstanceOutcome MongodbClient::TerminateDBInstance(const TerminateDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateDBInstanceResponse rsp = TerminateDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateDBInstanceOutcome(rsp);
        else
            return TerminateDBInstanceOutcome(o.GetError());
    }
    else
    {
        return TerminateDBInstanceOutcome(outcome.GetError());
    }
}

void MongodbClient::TerminateDBInstanceAsync(const TerminateDBInstanceRequest& request, const TerminateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MongodbClient::TerminateDBInstanceOutcomeCallable MongodbClient::TerminateDBInstanceCallable(const TerminateDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->TerminateDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MongodbClient::UpgradeDBInstanceOutcome MongodbClient::UpgradeDBInstance(const UpgradeDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeDBInstanceResponse rsp = UpgradeDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeDBInstanceOutcome(rsp);
        else
            return UpgradeDBInstanceOutcome(o.GetError());
    }
    else
    {
        return UpgradeDBInstanceOutcome(outcome.GetError());
    }
}

void MongodbClient::UpgradeDBInstanceAsync(const UpgradeDBInstanceRequest& request, const UpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MongodbClient::UpgradeDBInstanceOutcomeCallable MongodbClient::UpgradeDBInstanceCallable(const UpgradeDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->UpgradeDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MongodbClient::UpgradeDBInstanceHourOutcome MongodbClient::UpgradeDBInstanceHour(const UpgradeDBInstanceHourRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeDBInstanceHour");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeDBInstanceHourResponse rsp = UpgradeDBInstanceHourResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeDBInstanceHourOutcome(rsp);
        else
            return UpgradeDBInstanceHourOutcome(o.GetError());
    }
    else
    {
        return UpgradeDBInstanceHourOutcome(outcome.GetError());
    }
}

void MongodbClient::UpgradeDBInstanceHourAsync(const UpgradeDBInstanceHourRequest& request, const UpgradeDBInstanceHourAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeDBInstanceHour(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MongodbClient::UpgradeDBInstanceHourOutcomeCallable MongodbClient::UpgradeDBInstanceHourCallable(const UpgradeDBInstanceHourRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeDBInstanceHourOutcome()>>(
        [this, request]()
        {
            return this->UpgradeDBInstanceHour(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

