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

#include <tencentcloud/tke/v20180525/TkeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tke::V20180525;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-05-25";
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


TkeClient::AddExistedInstancesOutcome TkeClient::AddExistedInstances(const AddExistedInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "AddExistedInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddExistedInstancesResponse rsp = AddExistedInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddExistedInstancesOutcome(rsp);
        else
            return AddExistedInstancesOutcome(o.GetError());
    }
    else
    {
        return AddExistedInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::AddExistedInstancesAsync(const AddExistedInstancesRequest& request, const AddExistedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddExistedInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::AddExistedInstancesOutcomeCallable TkeClient::AddExistedInstancesCallable(const AddExistedInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddExistedInstancesOutcome()>>(
        [this, request]()
        {
            return this->AddExistedInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::CreateClusterOutcome TkeClient::CreateCluster(const CreateClusterRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterResponse rsp = CreateClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterOutcome(rsp);
        else
            return CreateClusterOutcome(o.GetError());
    }
    else
    {
        return CreateClusterOutcome(outcome.GetError());
    }
}

void TkeClient::CreateClusterAsync(const CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::CreateClusterOutcomeCallable TkeClient::CreateClusterCallable(const CreateClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateClusterOutcome()>>(
        [this, request]()
        {
            return this->CreateCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::CreateClusterAsGroupOutcome TkeClient::CreateClusterAsGroup(const CreateClusterAsGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClusterAsGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterAsGroupResponse rsp = CreateClusterAsGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterAsGroupOutcome(rsp);
        else
            return CreateClusterAsGroupOutcome(o.GetError());
    }
    else
    {
        return CreateClusterAsGroupOutcome(outcome.GetError());
    }
}

void TkeClient::CreateClusterAsGroupAsync(const CreateClusterAsGroupRequest& request, const CreateClusterAsGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateClusterAsGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::CreateClusterAsGroupOutcomeCallable TkeClient::CreateClusterAsGroupCallable(const CreateClusterAsGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateClusterAsGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateClusterAsGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::CreateClusterInstancesOutcome TkeClient::CreateClusterInstances(const CreateClusterInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClusterInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterInstancesResponse rsp = CreateClusterInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterInstancesOutcome(rsp);
        else
            return CreateClusterInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateClusterInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::CreateClusterInstancesAsync(const CreateClusterInstancesRequest& request, const CreateClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateClusterInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::CreateClusterInstancesOutcomeCallable TkeClient::CreateClusterInstancesCallable(const CreateClusterInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateClusterInstancesOutcome()>>(
        [this, request]()
        {
            return this->CreateClusterInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::CreateClusterRouteOutcome TkeClient::CreateClusterRoute(const CreateClusterRouteRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClusterRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterRouteResponse rsp = CreateClusterRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterRouteOutcome(rsp);
        else
            return CreateClusterRouteOutcome(o.GetError());
    }
    else
    {
        return CreateClusterRouteOutcome(outcome.GetError());
    }
}

void TkeClient::CreateClusterRouteAsync(const CreateClusterRouteRequest& request, const CreateClusterRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateClusterRoute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::CreateClusterRouteOutcomeCallable TkeClient::CreateClusterRouteCallable(const CreateClusterRouteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateClusterRouteOutcome()>>(
        [this, request]()
        {
            return this->CreateClusterRoute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::CreateClusterRouteTableOutcome TkeClient::CreateClusterRouteTable(const CreateClusterRouteTableRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClusterRouteTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterRouteTableResponse rsp = CreateClusterRouteTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterRouteTableOutcome(rsp);
        else
            return CreateClusterRouteTableOutcome(o.GetError());
    }
    else
    {
        return CreateClusterRouteTableOutcome(outcome.GetError());
    }
}

void TkeClient::CreateClusterRouteTableAsync(const CreateClusterRouteTableRequest& request, const CreateClusterRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateClusterRouteTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::CreateClusterRouteTableOutcomeCallable TkeClient::CreateClusterRouteTableCallable(const CreateClusterRouteTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateClusterRouteTableOutcome()>>(
        [this, request]()
        {
            return this->CreateClusterRouteTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DeleteClusterOutcome TkeClient::DeleteCluster(const DeleteClusterRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterResponse rsp = DeleteClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterOutcome(rsp);
        else
            return DeleteClusterOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DeleteClusterOutcomeCallable TkeClient::DeleteClusterCallable(const DeleteClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteClusterOutcome()>>(
        [this, request]()
        {
            return this->DeleteCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DeleteClusterInstancesOutcome TkeClient::DeleteClusterInstances(const DeleteClusterInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClusterInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterInstancesResponse rsp = DeleteClusterInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterInstancesOutcome(rsp);
        else
            return DeleteClusterInstancesOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteClusterInstancesAsync(const DeleteClusterInstancesRequest& request, const DeleteClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteClusterInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DeleteClusterInstancesOutcomeCallable TkeClient::DeleteClusterInstancesCallable(const DeleteClusterInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteClusterInstancesOutcome()>>(
        [this, request]()
        {
            return this->DeleteClusterInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DeleteClusterRouteOutcome TkeClient::DeleteClusterRoute(const DeleteClusterRouteRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClusterRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterRouteResponse rsp = DeleteClusterRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterRouteOutcome(rsp);
        else
            return DeleteClusterRouteOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterRouteOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteClusterRouteAsync(const DeleteClusterRouteRequest& request, const DeleteClusterRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteClusterRoute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DeleteClusterRouteOutcomeCallable TkeClient::DeleteClusterRouteCallable(const DeleteClusterRouteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteClusterRouteOutcome()>>(
        [this, request]()
        {
            return this->DeleteClusterRoute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DeleteClusterRouteTableOutcome TkeClient::DeleteClusterRouteTable(const DeleteClusterRouteTableRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClusterRouteTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterRouteTableResponse rsp = DeleteClusterRouteTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterRouteTableOutcome(rsp);
        else
            return DeleteClusterRouteTableOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterRouteTableOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteClusterRouteTableAsync(const DeleteClusterRouteTableRequest& request, const DeleteClusterRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteClusterRouteTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DeleteClusterRouteTableOutcomeCallable TkeClient::DeleteClusterRouteTableCallable(const DeleteClusterRouteTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteClusterRouteTableOutcome()>>(
        [this, request]()
        {
            return this->DeleteClusterRouteTable(request);
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

TkeClient::DescribeClusterRouteTablesOutcome TkeClient::DescribeClusterRouteTables(const DescribeClusterRouteTablesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterRouteTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterRouteTablesResponse rsp = DescribeClusterRouteTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterRouteTablesOutcome(rsp);
        else
            return DescribeClusterRouteTablesOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterRouteTablesOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterRouteTablesAsync(const DescribeClusterRouteTablesRequest& request, const DescribeClusterRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterRouteTables(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeClusterRouteTablesOutcomeCallable TkeClient::DescribeClusterRouteTablesCallable(const DescribeClusterRouteTablesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterRouteTablesOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterRouteTables(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeClusterRoutesOutcome TkeClient::DescribeClusterRoutes(const DescribeClusterRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterRoutesResponse rsp = DescribeClusterRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterRoutesOutcome(rsp);
        else
            return DescribeClusterRoutesOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterRoutesOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterRoutesAsync(const DescribeClusterRoutesRequest& request, const DescribeClusterRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterRoutes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeClusterRoutesOutcomeCallable TkeClient::DescribeClusterRoutesCallable(const DescribeClusterRoutesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterRoutesOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterRoutes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeClusterSecurityOutcome TkeClient::DescribeClusterSecurity(const DescribeClusterSecurityRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterSecurity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterSecurityResponse rsp = DescribeClusterSecurityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterSecurityOutcome(rsp);
        else
            return DescribeClusterSecurityOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterSecurityOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterSecurityAsync(const DescribeClusterSecurityRequest& request, const DescribeClusterSecurityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterSecurity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeClusterSecurityOutcomeCallable TkeClient::DescribeClusterSecurityCallable(const DescribeClusterSecurityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterSecurityOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterSecurity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeClustersOutcome TkeClient::DescribeClusters(const DescribeClustersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClustersResponse rsp = DescribeClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClustersOutcome(rsp);
        else
            return DescribeClustersOutcome(o.GetError());
    }
    else
    {
        return DescribeClustersOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClustersAsync(const DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeClustersOutcomeCallable TkeClient::DescribeClustersCallable(const DescribeClustersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClustersOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeExistedInstancesOutcome TkeClient::DescribeExistedInstances(const DescribeExistedInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExistedInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExistedInstancesResponse rsp = DescribeExistedInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExistedInstancesOutcome(rsp);
        else
            return DescribeExistedInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeExistedInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeExistedInstancesAsync(const DescribeExistedInstancesRequest& request, const DescribeExistedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExistedInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeExistedInstancesOutcomeCallable TkeClient::DescribeExistedInstancesCallable(const DescribeExistedInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExistedInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeExistedInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeRouteTableConflictsOutcome TkeClient::DescribeRouteTableConflicts(const DescribeRouteTableConflictsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRouteTableConflicts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRouteTableConflictsResponse rsp = DescribeRouteTableConflictsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRouteTableConflictsOutcome(rsp);
        else
            return DescribeRouteTableConflictsOutcome(o.GetError());
    }
    else
    {
        return DescribeRouteTableConflictsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeRouteTableConflictsAsync(const DescribeRouteTableConflictsRequest& request, const DescribeRouteTableConflictsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRouteTableConflicts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeRouteTableConflictsOutcomeCallable TkeClient::DescribeRouteTableConflictsCallable(const DescribeRouteTableConflictsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRouteTableConflictsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRouteTableConflicts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

