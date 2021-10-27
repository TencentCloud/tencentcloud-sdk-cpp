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

#include <tencentcloud/cynosdb/v20190107/CynosdbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cynosdb::V20190107;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-01-07";
    const string ENDPOINT = "cynosdb.tencentcloudapi.com";
}

CynosdbClient::CynosdbClient(const Credential &credential, const string &region) :
    CynosdbClient(credential, region, ClientProfile())
{
}

CynosdbClient::CynosdbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CynosdbClient::AddInstancesOutcome CynosdbClient::AddInstances(const AddInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "AddInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddInstancesResponse rsp = AddInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddInstancesOutcome(rsp);
        else
            return AddInstancesOutcome(o.GetError());
    }
    else
    {
        return AddInstancesOutcome(outcome.GetError());
    }
}

void CynosdbClient::AddInstancesAsync(const AddInstancesRequest& request, const AddInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::AddInstancesOutcomeCallable CynosdbClient::AddInstancesCallable(const AddInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddInstancesOutcome()>>(
        [this, request]()
        {
            return this->AddInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::CreateClustersOutcome CynosdbClient::CreateClusters(const CreateClustersRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClustersResponse rsp = CreateClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClustersOutcome(rsp);
        else
            return CreateClustersOutcome(o.GetError());
    }
    else
    {
        return CreateClustersOutcome(outcome.GetError());
    }
}

void CynosdbClient::CreateClustersAsync(const CreateClustersRequest& request, const CreateClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateClusters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::CreateClustersOutcomeCallable CynosdbClient::CreateClustersCallable(const CreateClustersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateClustersOutcome()>>(
        [this, request]()
        {
            return this->CreateClusters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeAccountsOutcome CynosdbClient::DescribeAccounts(const DescribeAccountsRequest &request)
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

void CynosdbClient::DescribeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccounts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeAccountsOutcomeCallable CynosdbClient::DescribeAccountsCallable(const DescribeAccountsRequest &request)
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

CynosdbClient::DescribeBackupConfigOutcome CynosdbClient::DescribeBackupConfig(const DescribeBackupConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupConfigResponse rsp = DescribeBackupConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupConfigOutcome(rsp);
        else
            return DescribeBackupConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupConfigOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeBackupConfigAsync(const DescribeBackupConfigRequest& request, const DescribeBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeBackupConfigOutcomeCallable CynosdbClient::DescribeBackupConfigCallable(const DescribeBackupConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackupConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeBackupListOutcome CynosdbClient::DescribeBackupList(const DescribeBackupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupListResponse rsp = DescribeBackupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupListOutcome(rsp);
        else
            return DescribeBackupListOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupListOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeBackupListAsync(const DescribeBackupListRequest& request, const DescribeBackupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeBackupListOutcomeCallable CynosdbClient::DescribeBackupListCallable(const DescribeBackupListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackupList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeClusterDetailOutcome CynosdbClient::DescribeClusterDetail(const DescribeClusterDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterDetailResponse rsp = DescribeClusterDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterDetailOutcome(rsp);
        else
            return DescribeClusterDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterDetailOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeClusterDetailAsync(const DescribeClusterDetailRequest& request, const DescribeClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeClusterDetailOutcomeCallable CynosdbClient::DescribeClusterDetailCallable(const DescribeClusterDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeClusterInstanceGrpsOutcome CynosdbClient::DescribeClusterInstanceGrps(const DescribeClusterInstanceGrpsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterInstanceGrps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterInstanceGrpsResponse rsp = DescribeClusterInstanceGrpsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterInstanceGrpsOutcome(rsp);
        else
            return DescribeClusterInstanceGrpsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterInstanceGrpsOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeClusterInstanceGrpsAsync(const DescribeClusterInstanceGrpsRequest& request, const DescribeClusterInstanceGrpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterInstanceGrps(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeClusterInstanceGrpsOutcomeCallable CynosdbClient::DescribeClusterInstanceGrpsCallable(const DescribeClusterInstanceGrpsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterInstanceGrpsOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterInstanceGrps(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeClustersOutcome CynosdbClient::DescribeClusters(const DescribeClustersRequest &request)
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

void CynosdbClient::DescribeClustersAsync(const DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeClustersOutcomeCallable CynosdbClient::DescribeClustersCallable(const DescribeClustersRequest &request)
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

CynosdbClient::DescribeDBSecurityGroupsOutcome CynosdbClient::DescribeDBSecurityGroups(const DescribeDBSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBSecurityGroupsResponse rsp = DescribeDBSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBSecurityGroupsOutcome(rsp);
        else
            return DescribeDBSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBSecurityGroupsOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeDBSecurityGroupsAsync(const DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeDBSecurityGroupsOutcomeCallable CynosdbClient::DescribeDBSecurityGroupsCallable(const DescribeDBSecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBSecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBSecurityGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeInstanceDetailOutcome CynosdbClient::DescribeInstanceDetail(const DescribeInstanceDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceDetailResponse rsp = DescribeInstanceDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceDetailOutcome(rsp);
        else
            return DescribeInstanceDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceDetailOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeInstanceDetailAsync(const DescribeInstanceDetailRequest& request, const DescribeInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeInstanceDetailOutcomeCallable CynosdbClient::DescribeInstanceDetailCallable(const DescribeInstanceDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeInstanceSpecsOutcome CynosdbClient::DescribeInstanceSpecs(const DescribeInstanceSpecsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceSpecs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceSpecsResponse rsp = DescribeInstanceSpecsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceSpecsOutcome(rsp);
        else
            return DescribeInstanceSpecsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceSpecsOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeInstanceSpecsAsync(const DescribeInstanceSpecsRequest& request, const DescribeInstanceSpecsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceSpecs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeInstanceSpecsOutcomeCallable CynosdbClient::DescribeInstanceSpecsCallable(const DescribeInstanceSpecsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceSpecsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceSpecs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeInstancesOutcome CynosdbClient::DescribeInstances(const DescribeInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesResponse rsp = DescribeInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesOutcome(rsp);
        else
            return DescribeInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeInstancesOutcomeCallable CynosdbClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeMaintainPeriodOutcome CynosdbClient::DescribeMaintainPeriod(const DescribeMaintainPeriodRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMaintainPeriod");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMaintainPeriodResponse rsp = DescribeMaintainPeriodResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMaintainPeriodOutcome(rsp);
        else
            return DescribeMaintainPeriodOutcome(o.GetError());
    }
    else
    {
        return DescribeMaintainPeriodOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeMaintainPeriodAsync(const DescribeMaintainPeriodRequest& request, const DescribeMaintainPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMaintainPeriod(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeMaintainPeriodOutcomeCallable CynosdbClient::DescribeMaintainPeriodCallable(const DescribeMaintainPeriodRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMaintainPeriodOutcome()>>(
        [this, request]()
        {
            return this->DescribeMaintainPeriod(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeProjectSecurityGroupsOutcome CynosdbClient::DescribeProjectSecurityGroups(const DescribeProjectSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjectSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectSecurityGroupsResponse rsp = DescribeProjectSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectSecurityGroupsOutcome(rsp);
        else
            return DescribeProjectSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectSecurityGroupsOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeProjectSecurityGroupsAsync(const DescribeProjectSecurityGroupsRequest& request, const DescribeProjectSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProjectSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeProjectSecurityGroupsOutcomeCallable CynosdbClient::DescribeProjectSecurityGroupsCallable(const DescribeProjectSecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProjectSecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeProjectSecurityGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeResourcesByDealNameOutcome CynosdbClient::DescribeResourcesByDealName(const DescribeResourcesByDealNameRequest &request)
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

void CynosdbClient::DescribeResourcesByDealNameAsync(const DescribeResourcesByDealNameRequest& request, const DescribeResourcesByDealNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourcesByDealName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeResourcesByDealNameOutcomeCallable CynosdbClient::DescribeResourcesByDealNameCallable(const DescribeResourcesByDealNameRequest &request)
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

CynosdbClient::DescribeRollbackTimeRangeOutcome CynosdbClient::DescribeRollbackTimeRange(const DescribeRollbackTimeRangeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRollbackTimeRange");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRollbackTimeRangeResponse rsp = DescribeRollbackTimeRangeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRollbackTimeRangeOutcome(rsp);
        else
            return DescribeRollbackTimeRangeOutcome(o.GetError());
    }
    else
    {
        return DescribeRollbackTimeRangeOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeRollbackTimeRangeAsync(const DescribeRollbackTimeRangeRequest& request, const DescribeRollbackTimeRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRollbackTimeRange(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeRollbackTimeRangeOutcomeCallable CynosdbClient::DescribeRollbackTimeRangeCallable(const DescribeRollbackTimeRangeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRollbackTimeRangeOutcome()>>(
        [this, request]()
        {
            return this->DescribeRollbackTimeRange(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::DescribeRollbackTimeValidityOutcome CynosdbClient::DescribeRollbackTimeValidity(const DescribeRollbackTimeValidityRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRollbackTimeValidity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRollbackTimeValidityResponse rsp = DescribeRollbackTimeValidityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRollbackTimeValidityOutcome(rsp);
        else
            return DescribeRollbackTimeValidityOutcome(o.GetError());
    }
    else
    {
        return DescribeRollbackTimeValidityOutcome(outcome.GetError());
    }
}

void CynosdbClient::DescribeRollbackTimeValidityAsync(const DescribeRollbackTimeValidityRequest& request, const DescribeRollbackTimeValidityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRollbackTimeValidity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::DescribeRollbackTimeValidityOutcomeCallable CynosdbClient::DescribeRollbackTimeValidityCallable(const DescribeRollbackTimeValidityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRollbackTimeValidityOutcome()>>(
        [this, request]()
        {
            return this->DescribeRollbackTimeValidity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::IsolateClusterOutcome CynosdbClient::IsolateCluster(const IsolateClusterRequest &request)
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

void CynosdbClient::IsolateClusterAsync(const IsolateClusterRequest& request, const IsolateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IsolateCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::IsolateClusterOutcomeCallable CynosdbClient::IsolateClusterCallable(const IsolateClusterRequest &request)
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

CynosdbClient::IsolateInstanceOutcome CynosdbClient::IsolateInstance(const IsolateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateInstanceResponse rsp = IsolateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateInstanceOutcome(rsp);
        else
            return IsolateInstanceOutcome(o.GetError());
    }
    else
    {
        return IsolateInstanceOutcome(outcome.GetError());
    }
}

void CynosdbClient::IsolateInstanceAsync(const IsolateInstanceRequest& request, const IsolateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IsolateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::IsolateInstanceOutcomeCallable CynosdbClient::IsolateInstanceCallable(const IsolateInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IsolateInstanceOutcome()>>(
        [this, request]()
        {
            return this->IsolateInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyBackupConfigOutcome CynosdbClient::ModifyBackupConfig(const ModifyBackupConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBackupConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBackupConfigResponse rsp = ModifyBackupConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBackupConfigOutcome(rsp);
        else
            return ModifyBackupConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyBackupConfigOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyBackupConfigAsync(const ModifyBackupConfigRequest& request, const ModifyBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBackupConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyBackupConfigOutcomeCallable CynosdbClient::ModifyBackupConfigCallable(const ModifyBackupConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBackupConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyBackupConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyClusterParamOutcome CynosdbClient::ModifyClusterParam(const ModifyClusterParamRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterParam");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterParamResponse rsp = ModifyClusterParamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterParamOutcome(rsp);
        else
            return ModifyClusterParamOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterParamOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyClusterParamAsync(const ModifyClusterParamRequest& request, const ModifyClusterParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyClusterParam(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyClusterParamOutcomeCallable CynosdbClient::ModifyClusterParamCallable(const ModifyClusterParamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyClusterParamOutcome()>>(
        [this, request]()
        {
            return this->ModifyClusterParam(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyDBInstanceSecurityGroupsOutcome CynosdbClient::ModifyDBInstanceSecurityGroups(const ModifyDBInstanceSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceSecurityGroupsResponse rsp = ModifyDBInstanceSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceSecurityGroupsOutcome(rsp);
        else
            return ModifyDBInstanceSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceSecurityGroupsOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyDBInstanceSecurityGroupsAsync(const ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyDBInstanceSecurityGroupsOutcomeCallable CynosdbClient::ModifyDBInstanceSecurityGroupsCallable(const ModifyDBInstanceSecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBInstanceSecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBInstanceSecurityGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::ModifyMaintainPeriodConfigOutcome CynosdbClient::ModifyMaintainPeriodConfig(const ModifyMaintainPeriodConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMaintainPeriodConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMaintainPeriodConfigResponse rsp = ModifyMaintainPeriodConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMaintainPeriodConfigOutcome(rsp);
        else
            return ModifyMaintainPeriodConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyMaintainPeriodConfigOutcome(outcome.GetError());
    }
}

void CynosdbClient::ModifyMaintainPeriodConfigAsync(const ModifyMaintainPeriodConfigRequest& request, const ModifyMaintainPeriodConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMaintainPeriodConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::ModifyMaintainPeriodConfigOutcomeCallable CynosdbClient::ModifyMaintainPeriodConfigCallable(const ModifyMaintainPeriodConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMaintainPeriodConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyMaintainPeriodConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::OfflineClusterOutcome CynosdbClient::OfflineCluster(const OfflineClusterRequest &request)
{
    auto outcome = MakeRequest(request, "OfflineCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OfflineClusterResponse rsp = OfflineClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OfflineClusterOutcome(rsp);
        else
            return OfflineClusterOutcome(o.GetError());
    }
    else
    {
        return OfflineClusterOutcome(outcome.GetError());
    }
}

void CynosdbClient::OfflineClusterAsync(const OfflineClusterRequest& request, const OfflineClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OfflineCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::OfflineClusterOutcomeCallable CynosdbClient::OfflineClusterCallable(const OfflineClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OfflineClusterOutcome()>>(
        [this, request]()
        {
            return this->OfflineCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::OfflineInstanceOutcome CynosdbClient::OfflineInstance(const OfflineInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "OfflineInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OfflineInstanceResponse rsp = OfflineInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OfflineInstanceOutcome(rsp);
        else
            return OfflineInstanceOutcome(o.GetError());
    }
    else
    {
        return OfflineInstanceOutcome(outcome.GetError());
    }
}

void CynosdbClient::OfflineInstanceAsync(const OfflineInstanceRequest& request, const OfflineInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OfflineInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::OfflineInstanceOutcomeCallable CynosdbClient::OfflineInstanceCallable(const OfflineInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OfflineInstanceOutcome()>>(
        [this, request]()
        {
            return this->OfflineInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::SetRenewFlagOutcome CynosdbClient::SetRenewFlag(const SetRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "SetRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetRenewFlagResponse rsp = SetRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetRenewFlagOutcome(rsp);
        else
            return SetRenewFlagOutcome(o.GetError());
    }
    else
    {
        return SetRenewFlagOutcome(outcome.GetError());
    }
}

void CynosdbClient::SetRenewFlagAsync(const SetRenewFlagRequest& request, const SetRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetRenewFlag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::SetRenewFlagOutcomeCallable CynosdbClient::SetRenewFlagCallable(const SetRenewFlagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetRenewFlagOutcome()>>(
        [this, request]()
        {
            return this->SetRenewFlag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CynosdbClient::UpgradeInstanceOutcome CynosdbClient::UpgradeInstance(const UpgradeInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeInstanceResponse rsp = UpgradeInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeInstanceOutcome(rsp);
        else
            return UpgradeInstanceOutcome(o.GetError());
    }
    else
    {
        return UpgradeInstanceOutcome(outcome.GetError());
    }
}

void CynosdbClient::UpgradeInstanceAsync(const UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CynosdbClient::UpgradeInstanceOutcomeCallable CynosdbClient::UpgradeInstanceCallable(const UpgradeInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeInstanceOutcome()>>(
        [this, request]()
        {
            return this->UpgradeInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

