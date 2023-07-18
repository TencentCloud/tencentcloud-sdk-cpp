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

#include <tencentcloud/goosefs/v20220519/GoosefsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Goosefs::V20220519;
using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-05-19";
    const string ENDPOINT = "goosefs.tencentcloudapi.com";
}

GoosefsClient::GoosefsClient(const Credential &credential, const string &region) :
    GoosefsClient(credential, region, ClientProfile())
{
}

GoosefsClient::GoosefsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


GoosefsClient::CreateDataRepositoryTaskOutcome GoosefsClient::CreateDataRepositoryTask(const CreateDataRepositoryTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDataRepositoryTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDataRepositoryTaskResponse rsp = CreateDataRepositoryTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDataRepositoryTaskOutcome(rsp);
        else
            return CreateDataRepositoryTaskOutcome(o.GetError());
    }
    else
    {
        return CreateDataRepositoryTaskOutcome(outcome.GetError());
    }
}

void GoosefsClient::CreateDataRepositoryTaskAsync(const CreateDataRepositoryTaskRequest& request, const CreateDataRepositoryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDataRepositoryTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::CreateDataRepositoryTaskOutcomeCallable GoosefsClient::CreateDataRepositoryTaskCallable(const CreateDataRepositoryTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDataRepositoryTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateDataRepositoryTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GoosefsClient::DescribeClusterClientTokenOutcome GoosefsClient::DescribeClusterClientToken(const DescribeClusterClientTokenRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterClientToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterClientTokenResponse rsp = DescribeClusterClientTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterClientTokenOutcome(rsp);
        else
            return DescribeClusterClientTokenOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterClientTokenOutcome(outcome.GetError());
    }
}

void GoosefsClient::DescribeClusterClientTokenAsync(const DescribeClusterClientTokenRequest& request, const DescribeClusterClientTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterClientToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::DescribeClusterClientTokenOutcomeCallable GoosefsClient::DescribeClusterClientTokenCallable(const DescribeClusterClientTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterClientTokenOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterClientToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GoosefsClient::DescribeClusterRoleTokenOutcome GoosefsClient::DescribeClusterRoleToken(const DescribeClusterRoleTokenRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterRoleToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterRoleTokenResponse rsp = DescribeClusterRoleTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterRoleTokenOutcome(rsp);
        else
            return DescribeClusterRoleTokenOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterRoleTokenOutcome(outcome.GetError());
    }
}

void GoosefsClient::DescribeClusterRoleTokenAsync(const DescribeClusterRoleTokenRequest& request, const DescribeClusterRoleTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterRoleToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::DescribeClusterRoleTokenOutcomeCallable GoosefsClient::DescribeClusterRoleTokenCallable(const DescribeClusterRoleTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterRoleTokenOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterRoleToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GoosefsClient::DescribeClusterRolesOutcome GoosefsClient::DescribeClusterRoles(const DescribeClusterRolesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterRoles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterRolesResponse rsp = DescribeClusterRolesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterRolesOutcome(rsp);
        else
            return DescribeClusterRolesOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterRolesOutcome(outcome.GetError());
    }
}

void GoosefsClient::DescribeClusterRolesAsync(const DescribeClusterRolesRequest& request, const DescribeClusterRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterRoles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::DescribeClusterRolesOutcomeCallable GoosefsClient::DescribeClusterRolesCallable(const DescribeClusterRolesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterRolesOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterRoles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GoosefsClient::DescribeDataRepositoryTaskStatusOutcome GoosefsClient::DescribeDataRepositoryTaskStatus(const DescribeDataRepositoryTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataRepositoryTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataRepositoryTaskStatusResponse rsp = DescribeDataRepositoryTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataRepositoryTaskStatusOutcome(rsp);
        else
            return DescribeDataRepositoryTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeDataRepositoryTaskStatusOutcome(outcome.GetError());
    }
}

void GoosefsClient::DescribeDataRepositoryTaskStatusAsync(const DescribeDataRepositoryTaskStatusRequest& request, const DescribeDataRepositoryTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataRepositoryTaskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::DescribeDataRepositoryTaskStatusOutcomeCallable GoosefsClient::DescribeDataRepositoryTaskStatusCallable(const DescribeDataRepositoryTaskStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataRepositoryTaskStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataRepositoryTaskStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

