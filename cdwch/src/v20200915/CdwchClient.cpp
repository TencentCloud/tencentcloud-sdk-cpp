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

#include <tencentcloud/cdwch/v20200915/CdwchClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cdwch::V20200915;
using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-09-15";
    const string ENDPOINT = "cdwch.tencentcloudapi.com";
}

CdwchClient::CdwchClient(const Credential &credential, const string &region) :
    CdwchClient(credential, region, ClientProfile())
{
}

CdwchClient::CdwchClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CdwchClient::ActionAlterCkUserOutcome CdwchClient::ActionAlterCkUser(const ActionAlterCkUserRequest &request)
{
    auto outcome = MakeRequest(request, "ActionAlterCkUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ActionAlterCkUserResponse rsp = ActionAlterCkUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ActionAlterCkUserOutcome(rsp);
        else
            return ActionAlterCkUserOutcome(o.GetError());
    }
    else
    {
        return ActionAlterCkUserOutcome(outcome.GetError());
    }
}

void CdwchClient::ActionAlterCkUserAsync(const ActionAlterCkUserRequest& request, const ActionAlterCkUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ActionAlterCkUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwchClient::ActionAlterCkUserOutcomeCallable CdwchClient::ActionAlterCkUserCallable(const ActionAlterCkUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ActionAlterCkUserOutcome()>>(
        [this, request]()
        {
            return this->ActionAlterCkUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwchClient::CreateBackUpScheduleOutcome CdwchClient::CreateBackUpSchedule(const CreateBackUpScheduleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBackUpSchedule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBackUpScheduleResponse rsp = CreateBackUpScheduleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBackUpScheduleOutcome(rsp);
        else
            return CreateBackUpScheduleOutcome(o.GetError());
    }
    else
    {
        return CreateBackUpScheduleOutcome(outcome.GetError());
    }
}

void CdwchClient::CreateBackUpScheduleAsync(const CreateBackUpScheduleRequest& request, const CreateBackUpScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBackUpSchedule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwchClient::CreateBackUpScheduleOutcomeCallable CdwchClient::CreateBackUpScheduleCallable(const CreateBackUpScheduleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBackUpScheduleOutcome()>>(
        [this, request]()
        {
            return this->CreateBackUpSchedule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwchClient::DescribeCkSqlApisOutcome CdwchClient::DescribeCkSqlApis(const DescribeCkSqlApisRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCkSqlApis");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCkSqlApisResponse rsp = DescribeCkSqlApisResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCkSqlApisOutcome(rsp);
        else
            return DescribeCkSqlApisOutcome(o.GetError());
    }
    else
    {
        return DescribeCkSqlApisOutcome(outcome.GetError());
    }
}

void CdwchClient::DescribeCkSqlApisAsync(const DescribeCkSqlApisRequest& request, const DescribeCkSqlApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCkSqlApis(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwchClient::DescribeCkSqlApisOutcomeCallable CdwchClient::DescribeCkSqlApisCallable(const DescribeCkSqlApisRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCkSqlApisOutcome()>>(
        [this, request]()
        {
            return this->DescribeCkSqlApis(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwchClient::DescribeInstanceShardsOutcome CdwchClient::DescribeInstanceShards(const DescribeInstanceShardsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceShards");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceShardsResponse rsp = DescribeInstanceShardsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceShardsOutcome(rsp);
        else
            return DescribeInstanceShardsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceShardsOutcome(outcome.GetError());
    }
}

void CdwchClient::DescribeInstanceShardsAsync(const DescribeInstanceShardsRequest& request, const DescribeInstanceShardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceShards(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwchClient::DescribeInstanceShardsOutcomeCallable CdwchClient::DescribeInstanceShardsCallable(const DescribeInstanceShardsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceShardsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceShards(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwchClient::ModifyClusterConfigsOutcome CdwchClient::ModifyClusterConfigs(const ModifyClusterConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterConfigsResponse rsp = ModifyClusterConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterConfigsOutcome(rsp);
        else
            return ModifyClusterConfigsOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterConfigsOutcome(outcome.GetError());
    }
}

void CdwchClient::ModifyClusterConfigsAsync(const ModifyClusterConfigsRequest& request, const ModifyClusterConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyClusterConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwchClient::ModifyClusterConfigsOutcomeCallable CdwchClient::ModifyClusterConfigsCallable(const ModifyClusterConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyClusterConfigsOutcome()>>(
        [this, request]()
        {
            return this->ModifyClusterConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwchClient::ModifyUserNewPrivilegeOutcome CdwchClient::ModifyUserNewPrivilege(const ModifyUserNewPrivilegeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserNewPrivilege");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserNewPrivilegeResponse rsp = ModifyUserNewPrivilegeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserNewPrivilegeOutcome(rsp);
        else
            return ModifyUserNewPrivilegeOutcome(o.GetError());
    }
    else
    {
        return ModifyUserNewPrivilegeOutcome(outcome.GetError());
    }
}

void CdwchClient::ModifyUserNewPrivilegeAsync(const ModifyUserNewPrivilegeRequest& request, const ModifyUserNewPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUserNewPrivilege(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwchClient::ModifyUserNewPrivilegeOutcomeCallable CdwchClient::ModifyUserNewPrivilegeCallable(const ModifyUserNewPrivilegeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserNewPrivilegeOutcome()>>(
        [this, request]()
        {
            return this->ModifyUserNewPrivilege(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwchClient::OpenBackUpOutcome CdwchClient::OpenBackUp(const OpenBackUpRequest &request)
{
    auto outcome = MakeRequest(request, "OpenBackUp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenBackUpResponse rsp = OpenBackUpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenBackUpOutcome(rsp);
        else
            return OpenBackUpOutcome(o.GetError());
    }
    else
    {
        return OpenBackUpOutcome(outcome.GetError());
    }
}

void CdwchClient::OpenBackUpAsync(const OpenBackUpRequest& request, const OpenBackUpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenBackUp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwchClient::OpenBackUpOutcomeCallable CdwchClient::OpenBackUpCallable(const OpenBackUpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OpenBackUpOutcome()>>(
        [this, request]()
        {
            return this->OpenBackUp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

