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

CdwchClient::CreateInstanceNewOutcome CdwchClient::CreateInstanceNew(const CreateInstanceNewRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstanceNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceNewResponse rsp = CreateInstanceNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceNewOutcome(rsp);
        else
            return CreateInstanceNewOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceNewOutcome(outcome.GetError());
    }
}

void CdwchClient::CreateInstanceNewAsync(const CreateInstanceNewRequest& request, const CreateInstanceNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInstanceNew(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwchClient::CreateInstanceNewOutcomeCallable CdwchClient::CreateInstanceNewCallable(const CreateInstanceNewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInstanceNewOutcome()>>(
        [this, request]()
        {
            return this->CreateInstanceNew(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwchClient::DeleteBackUpDataOutcome CdwchClient::DeleteBackUpData(const DeleteBackUpDataRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBackUpData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBackUpDataResponse rsp = DeleteBackUpDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBackUpDataOutcome(rsp);
        else
            return DeleteBackUpDataOutcome(o.GetError());
    }
    else
    {
        return DeleteBackUpDataOutcome(outcome.GetError());
    }
}

void CdwchClient::DeleteBackUpDataAsync(const DeleteBackUpDataRequest& request, const DeleteBackUpDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBackUpData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwchClient::DeleteBackUpDataOutcomeCallable CdwchClient::DeleteBackUpDataCallable(const DeleteBackUpDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteBackUpDataOutcome()>>(
        [this, request]()
        {
            return this->DeleteBackUpData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwchClient::DescribeBackUpJobOutcome CdwchClient::DescribeBackUpJob(const DescribeBackUpJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackUpJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackUpJobResponse rsp = DescribeBackUpJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackUpJobOutcome(rsp);
        else
            return DescribeBackUpJobOutcome(o.GetError());
    }
    else
    {
        return DescribeBackUpJobOutcome(outcome.GetError());
    }
}

void CdwchClient::DescribeBackUpJobAsync(const DescribeBackUpJobRequest& request, const DescribeBackUpJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackUpJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwchClient::DescribeBackUpJobOutcomeCallable CdwchClient::DescribeBackUpJobCallable(const DescribeBackUpJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackUpJobOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackUpJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwchClient::DescribeBackUpJobDetailOutcome CdwchClient::DescribeBackUpJobDetail(const DescribeBackUpJobDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackUpJobDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackUpJobDetailResponse rsp = DescribeBackUpJobDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackUpJobDetailOutcome(rsp);
        else
            return DescribeBackUpJobDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeBackUpJobDetailOutcome(outcome.GetError());
    }
}

void CdwchClient::DescribeBackUpJobDetailAsync(const DescribeBackUpJobDetailRequest& request, const DescribeBackUpJobDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackUpJobDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwchClient::DescribeBackUpJobDetailOutcomeCallable CdwchClient::DescribeBackUpJobDetailCallable(const DescribeBackUpJobDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackUpJobDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackUpJobDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwchClient::DescribeBackUpScheduleOutcome CdwchClient::DescribeBackUpSchedule(const DescribeBackUpScheduleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackUpSchedule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackUpScheduleResponse rsp = DescribeBackUpScheduleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackUpScheduleOutcome(rsp);
        else
            return DescribeBackUpScheduleOutcome(o.GetError());
    }
    else
    {
        return DescribeBackUpScheduleOutcome(outcome.GetError());
    }
}

void CdwchClient::DescribeBackUpScheduleAsync(const DescribeBackUpScheduleRequest& request, const DescribeBackUpScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackUpSchedule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwchClient::DescribeBackUpScheduleOutcomeCallable CdwchClient::DescribeBackUpScheduleCallable(const DescribeBackUpScheduleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackUpScheduleOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackUpSchedule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwchClient::DescribeBackUpTablesOutcome CdwchClient::DescribeBackUpTables(const DescribeBackUpTablesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackUpTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackUpTablesResponse rsp = DescribeBackUpTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackUpTablesOutcome(rsp);
        else
            return DescribeBackUpTablesOutcome(o.GetError());
    }
    else
    {
        return DescribeBackUpTablesOutcome(outcome.GetError());
    }
}

void CdwchClient::DescribeBackUpTablesAsync(const DescribeBackUpTablesRequest& request, const DescribeBackUpTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackUpTables(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwchClient::DescribeBackUpTablesOutcomeCallable CdwchClient::DescribeBackUpTablesCallable(const DescribeBackUpTablesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackUpTablesOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackUpTables(request);
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

CdwchClient::DescribeClusterConfigsOutcome CdwchClient::DescribeClusterConfigs(const DescribeClusterConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterConfigsResponse rsp = DescribeClusterConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterConfigsOutcome(rsp);
        else
            return DescribeClusterConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterConfigsOutcome(outcome.GetError());
    }
}

void CdwchClient::DescribeClusterConfigsAsync(const DescribeClusterConfigsRequest& request, const DescribeClusterConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwchClient::DescribeClusterConfigsOutcomeCallable CdwchClient::DescribeClusterConfigsCallable(const DescribeClusterConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterConfigsOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwchClient::DescribeInstanceOutcome CdwchClient::DescribeInstance(const DescribeInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceResponse rsp = DescribeInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceOutcome(rsp);
        else
            return DescribeInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceOutcome(outcome.GetError());
    }
}

void CdwchClient::DescribeInstanceAsync(const DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwchClient::DescribeInstanceOutcomeCallable CdwchClient::DescribeInstanceCallable(const DescribeInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwchClient::DescribeInstanceClustersOutcome CdwchClient::DescribeInstanceClusters(const DescribeInstanceClustersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceClustersResponse rsp = DescribeInstanceClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceClustersOutcome(rsp);
        else
            return DescribeInstanceClustersOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceClustersOutcome(outcome.GetError());
    }
}

void CdwchClient::DescribeInstanceClustersAsync(const DescribeInstanceClustersRequest& request, const DescribeInstanceClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceClusters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwchClient::DescribeInstanceClustersOutcomeCallable CdwchClient::DescribeInstanceClustersCallable(const DescribeInstanceClustersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceClustersOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceClusters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwchClient::DescribeInstanceKeyValConfigsOutcome CdwchClient::DescribeInstanceKeyValConfigs(const DescribeInstanceKeyValConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceKeyValConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceKeyValConfigsResponse rsp = DescribeInstanceKeyValConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceKeyValConfigsOutcome(rsp);
        else
            return DescribeInstanceKeyValConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceKeyValConfigsOutcome(outcome.GetError());
    }
}

void CdwchClient::DescribeInstanceKeyValConfigsAsync(const DescribeInstanceKeyValConfigsRequest& request, const DescribeInstanceKeyValConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceKeyValConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwchClient::DescribeInstanceKeyValConfigsOutcomeCallable CdwchClient::DescribeInstanceKeyValConfigsCallable(const DescribeInstanceKeyValConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceKeyValConfigsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceKeyValConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwchClient::DescribeInstanceNodesOutcome CdwchClient::DescribeInstanceNodes(const DescribeInstanceNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceNodesResponse rsp = DescribeInstanceNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceNodesOutcome(rsp);
        else
            return DescribeInstanceNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceNodesOutcome(outcome.GetError());
    }
}

void CdwchClient::DescribeInstanceNodesAsync(const DescribeInstanceNodesRequest& request, const DescribeInstanceNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwchClient::DescribeInstanceNodesOutcomeCallable CdwchClient::DescribeInstanceNodesCallable(const DescribeInstanceNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceNodesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceNodes(request);
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

CdwchClient::DescribeInstanceStateOutcome CdwchClient::DescribeInstanceState(const DescribeInstanceStateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceStateResponse rsp = DescribeInstanceStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceStateOutcome(rsp);
        else
            return DescribeInstanceStateOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceStateOutcome(outcome.GetError());
    }
}

void CdwchClient::DescribeInstanceStateAsync(const DescribeInstanceStateRequest& request, const DescribeInstanceStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwchClient::DescribeInstanceStateOutcomeCallable CdwchClient::DescribeInstanceStateCallable(const DescribeInstanceStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceStateOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwchClient::DescribeInstancesNewOutcome CdwchClient::DescribeInstancesNew(const DescribeInstancesNewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesNewResponse rsp = DescribeInstancesNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesNewOutcome(rsp);
        else
            return DescribeInstancesNewOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesNewOutcome(outcome.GetError());
    }
}

void CdwchClient::DescribeInstancesNewAsync(const DescribeInstancesNewRequest& request, const DescribeInstancesNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstancesNew(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwchClient::DescribeInstancesNewOutcomeCallable CdwchClient::DescribeInstancesNewCallable(const DescribeInstancesNewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesNewOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstancesNew(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwchClient::DescribeSpecOutcome CdwchClient::DescribeSpec(const DescribeSpecRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSpecResponse rsp = DescribeSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSpecOutcome(rsp);
        else
            return DescribeSpecOutcome(o.GetError());
    }
    else
    {
        return DescribeSpecOutcome(outcome.GetError());
    }
}

void CdwchClient::DescribeSpecAsync(const DescribeSpecRequest& request, const DescribeSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSpec(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwchClient::DescribeSpecOutcomeCallable CdwchClient::DescribeSpecCallable(const DescribeSpecRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSpecOutcome()>>(
        [this, request]()
        {
            return this->DescribeSpec(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwchClient::DestroyInstanceOutcome CdwchClient::DestroyInstance(const DestroyInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyInstanceResponse rsp = DestroyInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyInstanceOutcome(rsp);
        else
            return DestroyInstanceOutcome(o.GetError());
    }
    else
    {
        return DestroyInstanceOutcome(outcome.GetError());
    }
}

void CdwchClient::DestroyInstanceAsync(const DestroyInstanceRequest& request, const DestroyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DestroyInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwchClient::DestroyInstanceOutcomeCallable CdwchClient::DestroyInstanceCallable(const DestroyInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DestroyInstanceOutcome()>>(
        [this, request]()
        {
            return this->DestroyInstance(request);
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

CdwchClient::ModifyInstanceKeyValConfigsOutcome CdwchClient::ModifyInstanceKeyValConfigs(const ModifyInstanceKeyValConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceKeyValConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceKeyValConfigsResponse rsp = ModifyInstanceKeyValConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceKeyValConfigsOutcome(rsp);
        else
            return ModifyInstanceKeyValConfigsOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceKeyValConfigsOutcome(outcome.GetError());
    }
}

void CdwchClient::ModifyInstanceKeyValConfigsAsync(const ModifyInstanceKeyValConfigsRequest& request, const ModifyInstanceKeyValConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstanceKeyValConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwchClient::ModifyInstanceKeyValConfigsOutcomeCallable CdwchClient::ModifyInstanceKeyValConfigsCallable(const ModifyInstanceKeyValConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceKeyValConfigsOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstanceKeyValConfigs(request);
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

CdwchClient::RecoverBackUpJobOutcome CdwchClient::RecoverBackUpJob(const RecoverBackUpJobRequest &request)
{
    auto outcome = MakeRequest(request, "RecoverBackUpJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecoverBackUpJobResponse rsp = RecoverBackUpJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecoverBackUpJobOutcome(rsp);
        else
            return RecoverBackUpJobOutcome(o.GetError());
    }
    else
    {
        return RecoverBackUpJobOutcome(outcome.GetError());
    }
}

void CdwchClient::RecoverBackUpJobAsync(const RecoverBackUpJobRequest& request, const RecoverBackUpJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecoverBackUpJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwchClient::RecoverBackUpJobOutcomeCallable CdwchClient::RecoverBackUpJobCallable(const RecoverBackUpJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecoverBackUpJobOutcome()>>(
        [this, request]()
        {
            return this->RecoverBackUpJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwchClient::ResizeDiskOutcome CdwchClient::ResizeDisk(const ResizeDiskRequest &request)
{
    auto outcome = MakeRequest(request, "ResizeDisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResizeDiskResponse rsp = ResizeDiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResizeDiskOutcome(rsp);
        else
            return ResizeDiskOutcome(o.GetError());
    }
    else
    {
        return ResizeDiskOutcome(outcome.GetError());
    }
}

void CdwchClient::ResizeDiskAsync(const ResizeDiskRequest& request, const ResizeDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResizeDisk(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwchClient::ResizeDiskOutcomeCallable CdwchClient::ResizeDiskCallable(const ResizeDiskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResizeDiskOutcome()>>(
        [this, request]()
        {
            return this->ResizeDisk(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwchClient::ScaleCNOutUpInstanceOutcome CdwchClient::ScaleCNOutUpInstance(const ScaleCNOutUpInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ScaleCNOutUpInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScaleCNOutUpInstanceResponse rsp = ScaleCNOutUpInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScaleCNOutUpInstanceOutcome(rsp);
        else
            return ScaleCNOutUpInstanceOutcome(o.GetError());
    }
    else
    {
        return ScaleCNOutUpInstanceOutcome(outcome.GetError());
    }
}

void CdwchClient::ScaleCNOutUpInstanceAsync(const ScaleCNOutUpInstanceRequest& request, const ScaleCNOutUpInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScaleCNOutUpInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwchClient::ScaleCNOutUpInstanceOutcomeCallable CdwchClient::ScaleCNOutUpInstanceCallable(const ScaleCNOutUpInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScaleCNOutUpInstanceOutcome()>>(
        [this, request]()
        {
            return this->ScaleCNOutUpInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwchClient::ScaleOutInstanceOutcome CdwchClient::ScaleOutInstance(const ScaleOutInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ScaleOutInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScaleOutInstanceResponse rsp = ScaleOutInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScaleOutInstanceOutcome(rsp);
        else
            return ScaleOutInstanceOutcome(o.GetError());
    }
    else
    {
        return ScaleOutInstanceOutcome(outcome.GetError());
    }
}

void CdwchClient::ScaleOutInstanceAsync(const ScaleOutInstanceRequest& request, const ScaleOutInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScaleOutInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwchClient::ScaleOutInstanceOutcomeCallable CdwchClient::ScaleOutInstanceCallable(const ScaleOutInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScaleOutInstanceOutcome()>>(
        [this, request]()
        {
            return this->ScaleOutInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwchClient::ScaleUpInstanceOutcome CdwchClient::ScaleUpInstance(const ScaleUpInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ScaleUpInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScaleUpInstanceResponse rsp = ScaleUpInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScaleUpInstanceOutcome(rsp);
        else
            return ScaleUpInstanceOutcome(o.GetError());
    }
    else
    {
        return ScaleUpInstanceOutcome(outcome.GetError());
    }
}

void CdwchClient::ScaleUpInstanceAsync(const ScaleUpInstanceRequest& request, const ScaleUpInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScaleUpInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwchClient::ScaleUpInstanceOutcomeCallable CdwchClient::ScaleUpInstanceCallable(const ScaleUpInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScaleUpInstanceOutcome()>>(
        [this, request]()
        {
            return this->ScaleUpInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

