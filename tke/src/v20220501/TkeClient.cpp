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

#include <tencentcloud/tke/v20220501/TkeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tke::V20220501;
using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-05-01";
    const string ENDPOINT = "tke.tencentcloudapi.com";
}

TkeClient::TkeClient(const Credential &credential, const string &region) :
    TkeClient(credential, region, ClientProfile())
{
}

TkeClient::TkeClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TkeClient::CreateNodePoolOutcome TkeClient::CreateNodePool(const CreateNodePoolRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNodePool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNodePoolResponse rsp = CreateNodePoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNodePoolOutcome(rsp);
        else
            return CreateNodePoolOutcome(o.GetError());
    }
    else
    {
        return CreateNodePoolOutcome(outcome.GetError());
    }
}

void TkeClient::CreateNodePoolAsync(const CreateNodePoolRequest& request, const CreateNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNodePool(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::CreateNodePoolOutcomeCallable TkeClient::CreateNodePoolCallable(const CreateNodePoolRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNodePoolOutcome()>>(
        [this, request]()
        {
            return this->CreateNodePool(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DeleteNodePoolOutcome TkeClient::DeleteNodePool(const DeleteNodePoolRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNodePool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNodePoolResponse rsp = DeleteNodePoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNodePoolOutcome(rsp);
        else
            return DeleteNodePoolOutcome(o.GetError());
    }
    else
    {
        return DeleteNodePoolOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteNodePoolAsync(const DeleteNodePoolRequest& request, const DeleteNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNodePool(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DeleteNodePoolOutcomeCallable TkeClient::DeleteNodePoolCallable(const DeleteNodePoolRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNodePoolOutcome()>>(
        [this, request]()
        {
            return this->DeleteNodePool(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeClusterInstancesOutcome TkeClient::DescribeClusterInstances(const DescribeClusterInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterInstancesResponse rsp = DescribeClusterInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterInstancesOutcome(rsp);
        else
            return DescribeClusterInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterInstancesAsync(const DescribeClusterInstancesRequest& request, const DescribeClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeClusterInstancesOutcomeCallable TkeClient::DescribeClusterInstancesCallable(const DescribeClusterInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeNodePoolsOutcome TkeClient::DescribeNodePools(const DescribeNodePoolsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNodePools");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNodePoolsResponse rsp = DescribeNodePoolsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNodePoolsOutcome(rsp);
        else
            return DescribeNodePoolsOutcome(o.GetError());
    }
    else
    {
        return DescribeNodePoolsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeNodePoolsAsync(const DescribeNodePoolsRequest& request, const DescribeNodePoolsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNodePools(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeNodePoolsOutcomeCallable TkeClient::DescribeNodePoolsCallable(const DescribeNodePoolsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNodePoolsOutcome()>>(
        [this, request]()
        {
            return this->DescribeNodePools(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::ModifyNodePoolOutcome TkeClient::ModifyNodePool(const ModifyNodePoolRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNodePool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNodePoolResponse rsp = ModifyNodePoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNodePoolOutcome(rsp);
        else
            return ModifyNodePoolOutcome(o.GetError());
    }
    else
    {
        return ModifyNodePoolOutcome(outcome.GetError());
    }
}

void TkeClient::ModifyNodePoolAsync(const ModifyNodePoolRequest& request, const ModifyNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNodePool(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::ModifyNodePoolOutcomeCallable TkeClient::ModifyNodePoolCallable(const ModifyNodePoolRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNodePoolOutcome()>>(
        [this, request]()
        {
            return this->ModifyNodePool(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

