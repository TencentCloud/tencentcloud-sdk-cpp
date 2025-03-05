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

#include <tencentcloud/cdwpg/v20201230/CdwpgClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cdwpg::V20201230;
using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-12-30";
    const string ENDPOINT = "cdwpg.tencentcloudapi.com";
}

CdwpgClient::CdwpgClient(const Credential &credential, const string &region) :
    CdwpgClient(credential, region, ClientProfile())
{
}

CdwpgClient::CdwpgClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CdwpgClient::CreateInstanceByApiOutcome CdwpgClient::CreateInstanceByApi(const CreateInstanceByApiRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstanceByApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceByApiResponse rsp = CreateInstanceByApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceByApiOutcome(rsp);
        else
            return CreateInstanceByApiOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceByApiOutcome(outcome.GetError());
    }
}

void CdwpgClient::CreateInstanceByApiAsync(const CreateInstanceByApiRequest& request, const CreateInstanceByApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInstanceByApi(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::CreateInstanceByApiOutcomeCallable CdwpgClient::CreateInstanceByApiCallable(const CreateInstanceByApiRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInstanceByApiOutcome()>>(
        [this, request]()
        {
            return this->CreateInstanceByApi(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwpgClient::DescribeAccountsOutcome CdwpgClient::DescribeAccounts(const DescribeAccountsRequest &request)
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

void CdwpgClient::DescribeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccounts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::DescribeAccountsOutcomeCallable CdwpgClient::DescribeAccountsCallable(const DescribeAccountsRequest &request)
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

CdwpgClient::DescribeDBConfigHistoryOutcome CdwpgClient::DescribeDBConfigHistory(const DescribeDBConfigHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBConfigHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBConfigHistoryResponse rsp = DescribeDBConfigHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBConfigHistoryOutcome(rsp);
        else
            return DescribeDBConfigHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeDBConfigHistoryOutcome(outcome.GetError());
    }
}

void CdwpgClient::DescribeDBConfigHistoryAsync(const DescribeDBConfigHistoryRequest& request, const DescribeDBConfigHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBConfigHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::DescribeDBConfigHistoryOutcomeCallable CdwpgClient::DescribeDBConfigHistoryCallable(const DescribeDBConfigHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBConfigHistoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBConfigHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwpgClient::DescribeDBParamsOutcome CdwpgClient::DescribeDBParams(const DescribeDBParamsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBParams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBParamsResponse rsp = DescribeDBParamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBParamsOutcome(rsp);
        else
            return DescribeDBParamsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBParamsOutcome(outcome.GetError());
    }
}

void CdwpgClient::DescribeDBParamsAsync(const DescribeDBParamsRequest& request, const DescribeDBParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBParams(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::DescribeDBParamsOutcomeCallable CdwpgClient::DescribeDBParamsCallable(const DescribeDBParamsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBParamsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBParams(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwpgClient::DescribeErrorLogOutcome CdwpgClient::DescribeErrorLog(const DescribeErrorLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeErrorLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeErrorLogResponse rsp = DescribeErrorLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeErrorLogOutcome(rsp);
        else
            return DescribeErrorLogOutcome(o.GetError());
    }
    else
    {
        return DescribeErrorLogOutcome(outcome.GetError());
    }
}

void CdwpgClient::DescribeErrorLogAsync(const DescribeErrorLogRequest& request, const DescribeErrorLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeErrorLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::DescribeErrorLogOutcomeCallable CdwpgClient::DescribeErrorLogCallable(const DescribeErrorLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeErrorLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeErrorLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwpgClient::DescribeInstanceOutcome CdwpgClient::DescribeInstance(const DescribeInstanceRequest &request)
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

void CdwpgClient::DescribeInstanceAsync(const DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::DescribeInstanceOutcomeCallable CdwpgClient::DescribeInstanceCallable(const DescribeInstanceRequest &request)
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

CdwpgClient::DescribeInstanceInfoOutcome CdwpgClient::DescribeInstanceInfo(const DescribeInstanceInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceInfoResponse rsp = DescribeInstanceInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceInfoOutcome(rsp);
        else
            return DescribeInstanceInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceInfoOutcome(outcome.GetError());
    }
}

void CdwpgClient::DescribeInstanceInfoAsync(const DescribeInstanceInfoRequest& request, const DescribeInstanceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::DescribeInstanceInfoOutcomeCallable CdwpgClient::DescribeInstanceInfoCallable(const DescribeInstanceInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwpgClient::DescribeInstanceNodesOutcome CdwpgClient::DescribeInstanceNodes(const DescribeInstanceNodesRequest &request)
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

void CdwpgClient::DescribeInstanceNodesAsync(const DescribeInstanceNodesRequest& request, const DescribeInstanceNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::DescribeInstanceNodesOutcomeCallable CdwpgClient::DescribeInstanceNodesCallable(const DescribeInstanceNodesRequest &request)
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

CdwpgClient::DescribeInstanceOperationsOutcome CdwpgClient::DescribeInstanceOperations(const DescribeInstanceOperationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceOperations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceOperationsResponse rsp = DescribeInstanceOperationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceOperationsOutcome(rsp);
        else
            return DescribeInstanceOperationsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceOperationsOutcome(outcome.GetError());
    }
}

void CdwpgClient::DescribeInstanceOperationsAsync(const DescribeInstanceOperationsRequest& request, const DescribeInstanceOperationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceOperations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::DescribeInstanceOperationsOutcomeCallable CdwpgClient::DescribeInstanceOperationsCallable(const DescribeInstanceOperationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceOperationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceOperations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwpgClient::DescribeInstanceStateOutcome CdwpgClient::DescribeInstanceState(const DescribeInstanceStateRequest &request)
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

void CdwpgClient::DescribeInstanceStateAsync(const DescribeInstanceStateRequest& request, const DescribeInstanceStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::DescribeInstanceStateOutcomeCallable CdwpgClient::DescribeInstanceStateCallable(const DescribeInstanceStateRequest &request)
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

CdwpgClient::DescribeInstancesOutcome CdwpgClient::DescribeInstances(const DescribeInstancesRequest &request)
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

void CdwpgClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::DescribeInstancesOutcomeCallable CdwpgClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
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

CdwpgClient::DescribeSimpleInstancesOutcome CdwpgClient::DescribeSimpleInstances(const DescribeSimpleInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSimpleInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSimpleInstancesResponse rsp = DescribeSimpleInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSimpleInstancesOutcome(rsp);
        else
            return DescribeSimpleInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeSimpleInstancesOutcome(outcome.GetError());
    }
}

void CdwpgClient::DescribeSimpleInstancesAsync(const DescribeSimpleInstancesRequest& request, const DescribeSimpleInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSimpleInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::DescribeSimpleInstancesOutcomeCallable CdwpgClient::DescribeSimpleInstancesCallable(const DescribeSimpleInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSimpleInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSimpleInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwpgClient::DescribeSlowLogOutcome CdwpgClient::DescribeSlowLog(const DescribeSlowLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowLogResponse rsp = DescribeSlowLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowLogOutcome(rsp);
        else
            return DescribeSlowLogOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowLogOutcome(outcome.GetError());
    }
}

void CdwpgClient::DescribeSlowLogAsync(const DescribeSlowLogRequest& request, const DescribeSlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSlowLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::DescribeSlowLogOutcomeCallable CdwpgClient::DescribeSlowLogCallable(const DescribeSlowLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSlowLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeSlowLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwpgClient::DescribeUpgradeListOutcome CdwpgClient::DescribeUpgradeList(const DescribeUpgradeListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUpgradeList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUpgradeListResponse rsp = DescribeUpgradeListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUpgradeListOutcome(rsp);
        else
            return DescribeUpgradeListOutcome(o.GetError());
    }
    else
    {
        return DescribeUpgradeListOutcome(outcome.GetError());
    }
}

void CdwpgClient::DescribeUpgradeListAsync(const DescribeUpgradeListRequest& request, const DescribeUpgradeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUpgradeList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::DescribeUpgradeListOutcomeCallable CdwpgClient::DescribeUpgradeListCallable(const DescribeUpgradeListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUpgradeListOutcome()>>(
        [this, request]()
        {
            return this->DescribeUpgradeList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwpgClient::DescribeUserHbaConfigOutcome CdwpgClient::DescribeUserHbaConfig(const DescribeUserHbaConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserHbaConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserHbaConfigResponse rsp = DescribeUserHbaConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserHbaConfigOutcome(rsp);
        else
            return DescribeUserHbaConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeUserHbaConfigOutcome(outcome.GetError());
    }
}

void CdwpgClient::DescribeUserHbaConfigAsync(const DescribeUserHbaConfigRequest& request, const DescribeUserHbaConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserHbaConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::DescribeUserHbaConfigOutcomeCallable CdwpgClient::DescribeUserHbaConfigCallable(const DescribeUserHbaConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserHbaConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserHbaConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwpgClient::DestroyInstanceByApiOutcome CdwpgClient::DestroyInstanceByApi(const DestroyInstanceByApiRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyInstanceByApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyInstanceByApiResponse rsp = DestroyInstanceByApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyInstanceByApiOutcome(rsp);
        else
            return DestroyInstanceByApiOutcome(o.GetError());
    }
    else
    {
        return DestroyInstanceByApiOutcome(outcome.GetError());
    }
}

void CdwpgClient::DestroyInstanceByApiAsync(const DestroyInstanceByApiRequest& request, const DestroyInstanceByApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DestroyInstanceByApi(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::DestroyInstanceByApiOutcomeCallable CdwpgClient::DestroyInstanceByApiCallable(const DestroyInstanceByApiRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DestroyInstanceByApiOutcome()>>(
        [this, request]()
        {
            return this->DestroyInstanceByApi(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwpgClient::ModifyDBParametersOutcome CdwpgClient::ModifyDBParameters(const ModifyDBParametersRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBParameters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBParametersResponse rsp = ModifyDBParametersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBParametersOutcome(rsp);
        else
            return ModifyDBParametersOutcome(o.GetError());
    }
    else
    {
        return ModifyDBParametersOutcome(outcome.GetError());
    }
}

void CdwpgClient::ModifyDBParametersAsync(const ModifyDBParametersRequest& request, const ModifyDBParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBParameters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::ModifyDBParametersOutcomeCallable CdwpgClient::ModifyDBParametersCallable(const ModifyDBParametersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBParametersOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBParameters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwpgClient::ModifyInstanceOutcome CdwpgClient::ModifyInstance(const ModifyInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceResponse rsp = ModifyInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceOutcome(rsp);
        else
            return ModifyInstanceOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceOutcome(outcome.GetError());
    }
}

void CdwpgClient::ModifyInstanceAsync(const ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::ModifyInstanceOutcomeCallable CdwpgClient::ModifyInstanceCallable(const ModifyInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwpgClient::ModifyUserHbaOutcome CdwpgClient::ModifyUserHba(const ModifyUserHbaRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserHba");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserHbaResponse rsp = ModifyUserHbaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserHbaOutcome(rsp);
        else
            return ModifyUserHbaOutcome(o.GetError());
    }
    else
    {
        return ModifyUserHbaOutcome(outcome.GetError());
    }
}

void CdwpgClient::ModifyUserHbaAsync(const ModifyUserHbaRequest& request, const ModifyUserHbaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUserHba(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::ModifyUserHbaOutcomeCallable CdwpgClient::ModifyUserHbaCallable(const ModifyUserHbaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserHbaOutcome()>>(
        [this, request]()
        {
            return this->ModifyUserHba(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwpgClient::ResetAccountPasswordOutcome CdwpgClient::ResetAccountPassword(const ResetAccountPasswordRequest &request)
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

void CdwpgClient::ResetAccountPasswordAsync(const ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetAccountPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::ResetAccountPasswordOutcomeCallable CdwpgClient::ResetAccountPasswordCallable(const ResetAccountPasswordRequest &request)
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

CdwpgClient::RestartInstanceOutcome CdwpgClient::RestartInstance(const RestartInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RestartInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartInstanceResponse rsp = RestartInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartInstanceOutcome(rsp);
        else
            return RestartInstanceOutcome(o.GetError());
    }
    else
    {
        return RestartInstanceOutcome(outcome.GetError());
    }
}

void CdwpgClient::RestartInstanceAsync(const RestartInstanceRequest& request, const RestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::RestartInstanceOutcomeCallable CdwpgClient::RestartInstanceCallable(const RestartInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestartInstanceOutcome()>>(
        [this, request]()
        {
            return this->RestartInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwpgClient::ScaleOutInstanceOutcome CdwpgClient::ScaleOutInstance(const ScaleOutInstanceRequest &request)
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

void CdwpgClient::ScaleOutInstanceAsync(const ScaleOutInstanceRequest& request, const ScaleOutInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScaleOutInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::ScaleOutInstanceOutcomeCallable CdwpgClient::ScaleOutInstanceCallable(const ScaleOutInstanceRequest &request)
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

CdwpgClient::ScaleUpInstanceOutcome CdwpgClient::ScaleUpInstance(const ScaleUpInstanceRequest &request)
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

void CdwpgClient::ScaleUpInstanceAsync(const ScaleUpInstanceRequest& request, const ScaleUpInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScaleUpInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::ScaleUpInstanceOutcomeCallable CdwpgClient::ScaleUpInstanceCallable(const ScaleUpInstanceRequest &request)
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

CdwpgClient::UpgradeInstanceOutcome CdwpgClient::UpgradeInstance(const UpgradeInstanceRequest &request)
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

void CdwpgClient::UpgradeInstanceAsync(const UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::UpgradeInstanceOutcomeCallable CdwpgClient::UpgradeInstanceCallable(const UpgradeInstanceRequest &request)
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

