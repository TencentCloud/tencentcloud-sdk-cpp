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

#include <tencentcloud/tdcpg/v20211118/TdcpgClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tdcpg::V20211118;
using namespace TencentCloud::Tdcpg::V20211118::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-11-18";
    const string ENDPOINT = "tdcpg.tencentcloudapi.com";
}

TdcpgClient::TdcpgClient(const Credential &credential, const string &region) :
    TdcpgClient(credential, region, ClientProfile())
{
}

TdcpgClient::TdcpgClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TdcpgClient::CloneClusterToPointInTimeOutcome TdcpgClient::CloneClusterToPointInTime(const CloneClusterToPointInTimeRequest &request)
{
    auto outcome = MakeRequest(request, "CloneClusterToPointInTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloneClusterToPointInTimeResponse rsp = CloneClusterToPointInTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloneClusterToPointInTimeOutcome(rsp);
        else
            return CloneClusterToPointInTimeOutcome(o.GetError());
    }
    else
    {
        return CloneClusterToPointInTimeOutcome(outcome.GetError());
    }
}

void TdcpgClient::CloneClusterToPointInTimeAsync(const CloneClusterToPointInTimeRequest& request, const CloneClusterToPointInTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloneClusterToPointInTime(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdcpgClient::CloneClusterToPointInTimeOutcomeCallable TdcpgClient::CloneClusterToPointInTimeCallable(const CloneClusterToPointInTimeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloneClusterToPointInTimeOutcome()>>(
        [this, request]()
        {
            return this->CloneClusterToPointInTime(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdcpgClient::CreateClusterOutcome TdcpgClient::CreateCluster(const CreateClusterRequest &request)
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

void TdcpgClient::CreateClusterAsync(const CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdcpgClient::CreateClusterOutcomeCallable TdcpgClient::CreateClusterCallable(const CreateClusterRequest &request)
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

TdcpgClient::CreateClusterInstancesOutcome TdcpgClient::CreateClusterInstances(const CreateClusterInstancesRequest &request)
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

void TdcpgClient::CreateClusterInstancesAsync(const CreateClusterInstancesRequest& request, const CreateClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateClusterInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdcpgClient::CreateClusterInstancesOutcomeCallable TdcpgClient::CreateClusterInstancesCallable(const CreateClusterInstancesRequest &request)
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

TdcpgClient::DeleteClusterOutcome TdcpgClient::DeleteCluster(const DeleteClusterRequest &request)
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

void TdcpgClient::DeleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdcpgClient::DeleteClusterOutcomeCallable TdcpgClient::DeleteClusterCallable(const DeleteClusterRequest &request)
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

TdcpgClient::DeleteClusterInstancesOutcome TdcpgClient::DeleteClusterInstances(const DeleteClusterInstancesRequest &request)
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

void TdcpgClient::DeleteClusterInstancesAsync(const DeleteClusterInstancesRequest& request, const DeleteClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteClusterInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdcpgClient::DeleteClusterInstancesOutcomeCallable TdcpgClient::DeleteClusterInstancesCallable(const DeleteClusterInstancesRequest &request)
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

TdcpgClient::DescribeAccountsOutcome TdcpgClient::DescribeAccounts(const DescribeAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountsResponse rsp = DescribeAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountsOutcome(rsp);
        else
            return DescribeAccountsOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountsOutcome(outcome.GetError());
    }
}

void TdcpgClient::DescribeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccounts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdcpgClient::DescribeAccountsOutcomeCallable TdcpgClient::DescribeAccountsCallable(const DescribeAccountsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccountsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccounts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdcpgClient::DescribeClusterBackupsOutcome TdcpgClient::DescribeClusterBackups(const DescribeClusterBackupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterBackups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterBackupsResponse rsp = DescribeClusterBackupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterBackupsOutcome(rsp);
        else
            return DescribeClusterBackupsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterBackupsOutcome(outcome.GetError());
    }
}

void TdcpgClient::DescribeClusterBackupsAsync(const DescribeClusterBackupsRequest& request, const DescribeClusterBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterBackups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdcpgClient::DescribeClusterBackupsOutcomeCallable TdcpgClient::DescribeClusterBackupsCallable(const DescribeClusterBackupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterBackupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterBackups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdcpgClient::DescribeClusterEndpointsOutcome TdcpgClient::DescribeClusterEndpoints(const DescribeClusterEndpointsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterEndpoints");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterEndpointsResponse rsp = DescribeClusterEndpointsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterEndpointsOutcome(rsp);
        else
            return DescribeClusterEndpointsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterEndpointsOutcome(outcome.GetError());
    }
}

void TdcpgClient::DescribeClusterEndpointsAsync(const DescribeClusterEndpointsRequest& request, const DescribeClusterEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterEndpoints(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdcpgClient::DescribeClusterEndpointsOutcomeCallable TdcpgClient::DescribeClusterEndpointsCallable(const DescribeClusterEndpointsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterEndpointsOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterEndpoints(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdcpgClient::DescribeClusterInstancesOutcome TdcpgClient::DescribeClusterInstances(const DescribeClusterInstancesRequest &request)
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

void TdcpgClient::DescribeClusterInstancesAsync(const DescribeClusterInstancesRequest& request, const DescribeClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdcpgClient::DescribeClusterInstancesOutcomeCallable TdcpgClient::DescribeClusterInstancesCallable(const DescribeClusterInstancesRequest &request)
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

TdcpgClient::DescribeClusterRecoveryTimeRangeOutcome TdcpgClient::DescribeClusterRecoveryTimeRange(const DescribeClusterRecoveryTimeRangeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterRecoveryTimeRange");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterRecoveryTimeRangeResponse rsp = DescribeClusterRecoveryTimeRangeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterRecoveryTimeRangeOutcome(rsp);
        else
            return DescribeClusterRecoveryTimeRangeOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterRecoveryTimeRangeOutcome(outcome.GetError());
    }
}

void TdcpgClient::DescribeClusterRecoveryTimeRangeAsync(const DescribeClusterRecoveryTimeRangeRequest& request, const DescribeClusterRecoveryTimeRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterRecoveryTimeRange(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdcpgClient::DescribeClusterRecoveryTimeRangeOutcomeCallable TdcpgClient::DescribeClusterRecoveryTimeRangeCallable(const DescribeClusterRecoveryTimeRangeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterRecoveryTimeRangeOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterRecoveryTimeRange(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdcpgClient::DescribeClustersOutcome TdcpgClient::DescribeClusters(const DescribeClustersRequest &request)
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

void TdcpgClient::DescribeClustersAsync(const DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdcpgClient::DescribeClustersOutcomeCallable TdcpgClient::DescribeClustersCallable(const DescribeClustersRequest &request)
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

TdcpgClient::DescribeResourcesByDealNameOutcome TdcpgClient::DescribeResourcesByDealName(const DescribeResourcesByDealNameRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourcesByDealName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourcesByDealNameResponse rsp = DescribeResourcesByDealNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourcesByDealNameOutcome(rsp);
        else
            return DescribeResourcesByDealNameOutcome(o.GetError());
    }
    else
    {
        return DescribeResourcesByDealNameOutcome(outcome.GetError());
    }
}

void TdcpgClient::DescribeResourcesByDealNameAsync(const DescribeResourcesByDealNameRequest& request, const DescribeResourcesByDealNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourcesByDealName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdcpgClient::DescribeResourcesByDealNameOutcomeCallable TdcpgClient::DescribeResourcesByDealNameCallable(const DescribeResourcesByDealNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourcesByDealNameOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourcesByDealName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdcpgClient::IsolateClusterOutcome TdcpgClient::IsolateCluster(const IsolateClusterRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateClusterResponse rsp = IsolateClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateClusterOutcome(rsp);
        else
            return IsolateClusterOutcome(o.GetError());
    }
    else
    {
        return IsolateClusterOutcome(outcome.GetError());
    }
}

void TdcpgClient::IsolateClusterAsync(const IsolateClusterRequest& request, const IsolateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IsolateCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdcpgClient::IsolateClusterOutcomeCallable TdcpgClient::IsolateClusterCallable(const IsolateClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IsolateClusterOutcome()>>(
        [this, request]()
        {
            return this->IsolateCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdcpgClient::IsolateClusterInstancesOutcome TdcpgClient::IsolateClusterInstances(const IsolateClusterInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateClusterInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateClusterInstancesResponse rsp = IsolateClusterInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateClusterInstancesOutcome(rsp);
        else
            return IsolateClusterInstancesOutcome(o.GetError());
    }
    else
    {
        return IsolateClusterInstancesOutcome(outcome.GetError());
    }
}

void TdcpgClient::IsolateClusterInstancesAsync(const IsolateClusterInstancesRequest& request, const IsolateClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IsolateClusterInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdcpgClient::IsolateClusterInstancesOutcomeCallable TdcpgClient::IsolateClusterInstancesCallable(const IsolateClusterInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IsolateClusterInstancesOutcome()>>(
        [this, request]()
        {
            return this->IsolateClusterInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdcpgClient::ModifyAccountDescriptionOutcome TdcpgClient::ModifyAccountDescription(const ModifyAccountDescriptionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccountDescription");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccountDescriptionResponse rsp = ModifyAccountDescriptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccountDescriptionOutcome(rsp);
        else
            return ModifyAccountDescriptionOutcome(o.GetError());
    }
    else
    {
        return ModifyAccountDescriptionOutcome(outcome.GetError());
    }
}

void TdcpgClient::ModifyAccountDescriptionAsync(const ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAccountDescription(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdcpgClient::ModifyAccountDescriptionOutcomeCallable TdcpgClient::ModifyAccountDescriptionCallable(const ModifyAccountDescriptionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAccountDescriptionOutcome()>>(
        [this, request]()
        {
            return this->ModifyAccountDescription(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdcpgClient::ModifyClusterEndpointWanStatusOutcome TdcpgClient::ModifyClusterEndpointWanStatus(const ModifyClusterEndpointWanStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterEndpointWanStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterEndpointWanStatusResponse rsp = ModifyClusterEndpointWanStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterEndpointWanStatusOutcome(rsp);
        else
            return ModifyClusterEndpointWanStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterEndpointWanStatusOutcome(outcome.GetError());
    }
}

void TdcpgClient::ModifyClusterEndpointWanStatusAsync(const ModifyClusterEndpointWanStatusRequest& request, const ModifyClusterEndpointWanStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyClusterEndpointWanStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdcpgClient::ModifyClusterEndpointWanStatusOutcomeCallable TdcpgClient::ModifyClusterEndpointWanStatusCallable(const ModifyClusterEndpointWanStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyClusterEndpointWanStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyClusterEndpointWanStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdcpgClient::ModifyClusterInstancesSpecOutcome TdcpgClient::ModifyClusterInstancesSpec(const ModifyClusterInstancesSpecRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterInstancesSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterInstancesSpecResponse rsp = ModifyClusterInstancesSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterInstancesSpecOutcome(rsp);
        else
            return ModifyClusterInstancesSpecOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterInstancesSpecOutcome(outcome.GetError());
    }
}

void TdcpgClient::ModifyClusterInstancesSpecAsync(const ModifyClusterInstancesSpecRequest& request, const ModifyClusterInstancesSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyClusterInstancesSpec(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdcpgClient::ModifyClusterInstancesSpecOutcomeCallable TdcpgClient::ModifyClusterInstancesSpecCallable(const ModifyClusterInstancesSpecRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyClusterInstancesSpecOutcome()>>(
        [this, request]()
        {
            return this->ModifyClusterInstancesSpec(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdcpgClient::ModifyClusterNameOutcome TdcpgClient::ModifyClusterName(const ModifyClusterNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterNameResponse rsp = ModifyClusterNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterNameOutcome(rsp);
        else
            return ModifyClusterNameOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterNameOutcome(outcome.GetError());
    }
}

void TdcpgClient::ModifyClusterNameAsync(const ModifyClusterNameRequest& request, const ModifyClusterNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyClusterName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdcpgClient::ModifyClusterNameOutcomeCallable TdcpgClient::ModifyClusterNameCallable(const ModifyClusterNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyClusterNameOutcome()>>(
        [this, request]()
        {
            return this->ModifyClusterName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdcpgClient::ModifyClustersAutoRenewFlagOutcome TdcpgClient::ModifyClustersAutoRenewFlag(const ModifyClustersAutoRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClustersAutoRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClustersAutoRenewFlagResponse rsp = ModifyClustersAutoRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClustersAutoRenewFlagOutcome(rsp);
        else
            return ModifyClustersAutoRenewFlagOutcome(o.GetError());
    }
    else
    {
        return ModifyClustersAutoRenewFlagOutcome(outcome.GetError());
    }
}

void TdcpgClient::ModifyClustersAutoRenewFlagAsync(const ModifyClustersAutoRenewFlagRequest& request, const ModifyClustersAutoRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyClustersAutoRenewFlag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdcpgClient::ModifyClustersAutoRenewFlagOutcomeCallable TdcpgClient::ModifyClustersAutoRenewFlagCallable(const ModifyClustersAutoRenewFlagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyClustersAutoRenewFlagOutcome()>>(
        [this, request]()
        {
            return this->ModifyClustersAutoRenewFlag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdcpgClient::RecoverClusterOutcome TdcpgClient::RecoverCluster(const RecoverClusterRequest &request)
{
    auto outcome = MakeRequest(request, "RecoverCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecoverClusterResponse rsp = RecoverClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecoverClusterOutcome(rsp);
        else
            return RecoverClusterOutcome(o.GetError());
    }
    else
    {
        return RecoverClusterOutcome(outcome.GetError());
    }
}

void TdcpgClient::RecoverClusterAsync(const RecoverClusterRequest& request, const RecoverClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecoverCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdcpgClient::RecoverClusterOutcomeCallable TdcpgClient::RecoverClusterCallable(const RecoverClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecoverClusterOutcome()>>(
        [this, request]()
        {
            return this->RecoverCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdcpgClient::RecoverClusterInstancesOutcome TdcpgClient::RecoverClusterInstances(const RecoverClusterInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RecoverClusterInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecoverClusterInstancesResponse rsp = RecoverClusterInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecoverClusterInstancesOutcome(rsp);
        else
            return RecoverClusterInstancesOutcome(o.GetError());
    }
    else
    {
        return RecoverClusterInstancesOutcome(outcome.GetError());
    }
}

void TdcpgClient::RecoverClusterInstancesAsync(const RecoverClusterInstancesRequest& request, const RecoverClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecoverClusterInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdcpgClient::RecoverClusterInstancesOutcomeCallable TdcpgClient::RecoverClusterInstancesCallable(const RecoverClusterInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecoverClusterInstancesOutcome()>>(
        [this, request]()
        {
            return this->RecoverClusterInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdcpgClient::RenewClusterOutcome TdcpgClient::RenewCluster(const RenewClusterRequest &request)
{
    auto outcome = MakeRequest(request, "RenewCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewClusterResponse rsp = RenewClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewClusterOutcome(rsp);
        else
            return RenewClusterOutcome(o.GetError());
    }
    else
    {
        return RenewClusterOutcome(outcome.GetError());
    }
}

void TdcpgClient::RenewClusterAsync(const RenewClusterRequest& request, const RenewClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdcpgClient::RenewClusterOutcomeCallable TdcpgClient::RenewClusterCallable(const RenewClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewClusterOutcome()>>(
        [this, request]()
        {
            return this->RenewCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdcpgClient::ResetAccountPasswordOutcome TdcpgClient::ResetAccountPassword(const ResetAccountPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ResetAccountPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetAccountPasswordResponse rsp = ResetAccountPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetAccountPasswordOutcome(rsp);
        else
            return ResetAccountPasswordOutcome(o.GetError());
    }
    else
    {
        return ResetAccountPasswordOutcome(outcome.GetError());
    }
}

void TdcpgClient::ResetAccountPasswordAsync(const ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetAccountPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdcpgClient::ResetAccountPasswordOutcomeCallable TdcpgClient::ResetAccountPasswordCallable(const ResetAccountPasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetAccountPasswordOutcome()>>(
        [this, request]()
        {
            return this->ResetAccountPassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdcpgClient::RestartClusterInstancesOutcome TdcpgClient::RestartClusterInstances(const RestartClusterInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RestartClusterInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartClusterInstancesResponse rsp = RestartClusterInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartClusterInstancesOutcome(rsp);
        else
            return RestartClusterInstancesOutcome(o.GetError());
    }
    else
    {
        return RestartClusterInstancesOutcome(outcome.GetError());
    }
}

void TdcpgClient::RestartClusterInstancesAsync(const RestartClusterInstancesRequest& request, const RestartClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartClusterInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdcpgClient::RestartClusterInstancesOutcomeCallable TdcpgClient::RestartClusterInstancesCallable(const RestartClusterInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestartClusterInstancesOutcome()>>(
        [this, request]()
        {
            return this->RestartClusterInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdcpgClient::TransformClusterPayModeOutcome TdcpgClient::TransformClusterPayMode(const TransformClusterPayModeRequest &request)
{
    auto outcome = MakeRequest(request, "TransformClusterPayMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TransformClusterPayModeResponse rsp = TransformClusterPayModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TransformClusterPayModeOutcome(rsp);
        else
            return TransformClusterPayModeOutcome(o.GetError());
    }
    else
    {
        return TransformClusterPayModeOutcome(outcome.GetError());
    }
}

void TdcpgClient::TransformClusterPayModeAsync(const TransformClusterPayModeRequest& request, const TransformClusterPayModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TransformClusterPayMode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdcpgClient::TransformClusterPayModeOutcomeCallable TdcpgClient::TransformClusterPayModeCallable(const TransformClusterPayModeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TransformClusterPayModeOutcome()>>(
        [this, request]()
        {
            return this->TransformClusterPayMode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

