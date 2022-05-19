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

#include <tencentcloud/emr/v20190103/EmrClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Emr::V20190103;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-01-03";
    const string ENDPOINT = "emr.tencentcloudapi.com";
}

EmrClient::EmrClient(const Credential &credential, const string &region) :
    EmrClient(credential, region, ClientProfile())
{
}

EmrClient::EmrClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EmrClient::AddUsersForUserManagerOutcome EmrClient::AddUsersForUserManager(const AddUsersForUserManagerRequest &request)
{
    auto outcome = MakeRequest(request, "AddUsersForUserManager");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddUsersForUserManagerResponse rsp = AddUsersForUserManagerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddUsersForUserManagerOutcome(rsp);
        else
            return AddUsersForUserManagerOutcome(o.GetError());
    }
    else
    {
        return AddUsersForUserManagerOutcome(outcome.GetError());
    }
}

void EmrClient::AddUsersForUserManagerAsync(const AddUsersForUserManagerRequest& request, const AddUsersForUserManagerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddUsersForUserManager(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::AddUsersForUserManagerOutcomeCallable EmrClient::AddUsersForUserManagerCallable(const AddUsersForUserManagerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddUsersForUserManagerOutcome()>>(
        [this, request]()
        {
            return this->AddUsersForUserManager(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::CreateInstanceOutcome EmrClient::CreateInstance(const CreateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceResponse rsp = CreateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceOutcome(rsp);
        else
            return CreateInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::CreateInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::CreateInstanceOutcomeCallable EmrClient::CreateInstanceCallable(const CreateInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeClusterNodesOutcome EmrClient::DescribeClusterNodes(const DescribeClusterNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterNodesResponse rsp = DescribeClusterNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterNodesOutcome(rsp);
        else
            return DescribeClusterNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterNodesOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeClusterNodesAsync(const DescribeClusterNodesRequest& request, const DescribeClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeClusterNodesOutcomeCallable EmrClient::DescribeClusterNodesCallable(const DescribeClusterNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterNodesOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterNodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeCvmQuotaOutcome EmrClient::DescribeCvmQuota(const DescribeCvmQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCvmQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCvmQuotaResponse rsp = DescribeCvmQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCvmQuotaOutcome(rsp);
        else
            return DescribeCvmQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeCvmQuotaOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeCvmQuotaAsync(const DescribeCvmQuotaRequest& request, const DescribeCvmQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCvmQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeCvmQuotaOutcomeCallable EmrClient::DescribeCvmQuotaCallable(const DescribeCvmQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCvmQuotaOutcome()>>(
        [this, request]()
        {
            return this->DescribeCvmQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeInstanceRenewNodesOutcome EmrClient::DescribeInstanceRenewNodes(const DescribeInstanceRenewNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceRenewNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceRenewNodesResponse rsp = DescribeInstanceRenewNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceRenewNodesOutcome(rsp);
        else
            return DescribeInstanceRenewNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceRenewNodesOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeInstanceRenewNodesAsync(const DescribeInstanceRenewNodesRequest& request, const DescribeInstanceRenewNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceRenewNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeInstanceRenewNodesOutcomeCallable EmrClient::DescribeInstanceRenewNodesCallable(const DescribeInstanceRenewNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceRenewNodesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceRenewNodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeInstancesOutcome EmrClient::DescribeInstances(const DescribeInstancesRequest &request)
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

void EmrClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeInstancesOutcomeCallable EmrClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
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

EmrClient::DescribeInstancesListOutcome EmrClient::DescribeInstancesList(const DescribeInstancesListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesListResponse rsp = DescribeInstancesListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesListOutcome(rsp);
        else
            return DescribeInstancesListOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesListOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeInstancesListAsync(const DescribeInstancesListRequest& request, const DescribeInstancesListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstancesList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeInstancesListOutcomeCallable EmrClient::DescribeInstancesListCallable(const DescribeInstancesListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesListOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstancesList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeJobFlowOutcome EmrClient::DescribeJobFlow(const DescribeJobFlowRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJobFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobFlowResponse rsp = DescribeJobFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobFlowOutcome(rsp);
        else
            return DescribeJobFlowOutcome(o.GetError());
    }
    else
    {
        return DescribeJobFlowOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeJobFlowAsync(const DescribeJobFlowRequest& request, const DescribeJobFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeJobFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeJobFlowOutcomeCallable EmrClient::DescribeJobFlowCallable(const DescribeJobFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeJobFlowOutcome()>>(
        [this, request]()
        {
            return this->DescribeJobFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeResourceScheduleOutcome EmrClient::DescribeResourceSchedule(const DescribeResourceScheduleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceSchedule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceScheduleResponse rsp = DescribeResourceScheduleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceScheduleOutcome(rsp);
        else
            return DescribeResourceScheduleOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceScheduleOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeResourceScheduleAsync(const DescribeResourceScheduleRequest& request, const DescribeResourceScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourceSchedule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeResourceScheduleOutcomeCallable EmrClient::DescribeResourceScheduleCallable(const DescribeResourceScheduleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourceScheduleOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourceSchedule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::InquirePriceRenewEmrOutcome EmrClient::InquirePriceRenewEmr(const InquirePriceRenewEmrRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceRenewEmr");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceRenewEmrResponse rsp = InquirePriceRenewEmrResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceRenewEmrOutcome(rsp);
        else
            return InquirePriceRenewEmrOutcome(o.GetError());
    }
    else
    {
        return InquirePriceRenewEmrOutcome(outcome.GetError());
    }
}

void EmrClient::InquirePriceRenewEmrAsync(const InquirePriceRenewEmrRequest& request, const InquirePriceRenewEmrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquirePriceRenewEmr(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::InquirePriceRenewEmrOutcomeCallable EmrClient::InquirePriceRenewEmrCallable(const InquirePriceRenewEmrRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquirePriceRenewEmrOutcome()>>(
        [this, request]()
        {
            return this->InquirePriceRenewEmr(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::InquiryPriceCreateInstanceOutcome EmrClient::InquiryPriceCreateInstance(const InquiryPriceCreateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceCreateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceCreateInstanceResponse rsp = InquiryPriceCreateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceCreateInstanceOutcome(rsp);
        else
            return InquiryPriceCreateInstanceOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceCreateInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::InquiryPriceCreateInstanceAsync(const InquiryPriceCreateInstanceRequest& request, const InquiryPriceCreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceCreateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::InquiryPriceCreateInstanceOutcomeCallable EmrClient::InquiryPriceCreateInstanceCallable(const InquiryPriceCreateInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceCreateInstanceOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceCreateInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::InquiryPriceRenewInstanceOutcome EmrClient::InquiryPriceRenewInstance(const InquiryPriceRenewInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceRenewInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceRenewInstanceResponse rsp = InquiryPriceRenewInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceRenewInstanceOutcome(rsp);
        else
            return InquiryPriceRenewInstanceOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceRenewInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::InquiryPriceRenewInstanceAsync(const InquiryPriceRenewInstanceRequest& request, const InquiryPriceRenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceRenewInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::InquiryPriceRenewInstanceOutcomeCallable EmrClient::InquiryPriceRenewInstanceCallable(const InquiryPriceRenewInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceRenewInstanceOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceRenewInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::InquiryPriceScaleOutInstanceOutcome EmrClient::InquiryPriceScaleOutInstance(const InquiryPriceScaleOutInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceScaleOutInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceScaleOutInstanceResponse rsp = InquiryPriceScaleOutInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceScaleOutInstanceOutcome(rsp);
        else
            return InquiryPriceScaleOutInstanceOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceScaleOutInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::InquiryPriceScaleOutInstanceAsync(const InquiryPriceScaleOutInstanceRequest& request, const InquiryPriceScaleOutInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceScaleOutInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::InquiryPriceScaleOutInstanceOutcomeCallable EmrClient::InquiryPriceScaleOutInstanceCallable(const InquiryPriceScaleOutInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceScaleOutInstanceOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceScaleOutInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::InquiryPriceUpdateInstanceOutcome EmrClient::InquiryPriceUpdateInstance(const InquiryPriceUpdateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceUpdateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceUpdateInstanceResponse rsp = InquiryPriceUpdateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceUpdateInstanceOutcome(rsp);
        else
            return InquiryPriceUpdateInstanceOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceUpdateInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::InquiryPriceUpdateInstanceAsync(const InquiryPriceUpdateInstanceRequest& request, const InquiryPriceUpdateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceUpdateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::InquiryPriceUpdateInstanceOutcomeCallable EmrClient::InquiryPriceUpdateInstanceCallable(const InquiryPriceUpdateInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceUpdateInstanceOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceUpdateInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ModifyResourcePoolsOutcome EmrClient::ModifyResourcePools(const ModifyResourcePoolsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResourcePools");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResourcePoolsResponse rsp = ModifyResourcePoolsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResourcePoolsOutcome(rsp);
        else
            return ModifyResourcePoolsOutcome(o.GetError());
    }
    else
    {
        return ModifyResourcePoolsOutcome(outcome.GetError());
    }
}

void EmrClient::ModifyResourcePoolsAsync(const ModifyResourcePoolsRequest& request, const ModifyResourcePoolsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyResourcePools(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ModifyResourcePoolsOutcomeCallable EmrClient::ModifyResourcePoolsCallable(const ModifyResourcePoolsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyResourcePoolsOutcome()>>(
        [this, request]()
        {
            return this->ModifyResourcePools(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ModifyResourceScheduleConfigOutcome EmrClient::ModifyResourceScheduleConfig(const ModifyResourceScheduleConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResourceScheduleConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResourceScheduleConfigResponse rsp = ModifyResourceScheduleConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResourceScheduleConfigOutcome(rsp);
        else
            return ModifyResourceScheduleConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyResourceScheduleConfigOutcome(outcome.GetError());
    }
}

void EmrClient::ModifyResourceScheduleConfigAsync(const ModifyResourceScheduleConfigRequest& request, const ModifyResourceScheduleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyResourceScheduleConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ModifyResourceScheduleConfigOutcomeCallable EmrClient::ModifyResourceScheduleConfigCallable(const ModifyResourceScheduleConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyResourceScheduleConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyResourceScheduleConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ModifyResourceSchedulerOutcome EmrClient::ModifyResourceScheduler(const ModifyResourceSchedulerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResourceScheduler");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResourceSchedulerResponse rsp = ModifyResourceSchedulerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResourceSchedulerOutcome(rsp);
        else
            return ModifyResourceSchedulerOutcome(o.GetError());
    }
    else
    {
        return ModifyResourceSchedulerOutcome(outcome.GetError());
    }
}

void EmrClient::ModifyResourceSchedulerAsync(const ModifyResourceSchedulerRequest& request, const ModifyResourceSchedulerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyResourceScheduler(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ModifyResourceSchedulerOutcomeCallable EmrClient::ModifyResourceSchedulerCallable(const ModifyResourceSchedulerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyResourceSchedulerOutcome()>>(
        [this, request]()
        {
            return this->ModifyResourceScheduler(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::RunJobFlowOutcome EmrClient::RunJobFlow(const RunJobFlowRequest &request)
{
    auto outcome = MakeRequest(request, "RunJobFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunJobFlowResponse rsp = RunJobFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunJobFlowOutcome(rsp);
        else
            return RunJobFlowOutcome(o.GetError());
    }
    else
    {
        return RunJobFlowOutcome(outcome.GetError());
    }
}

void EmrClient::RunJobFlowAsync(const RunJobFlowRequest& request, const RunJobFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunJobFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::RunJobFlowOutcomeCallable EmrClient::RunJobFlowCallable(const RunJobFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunJobFlowOutcome()>>(
        [this, request]()
        {
            return this->RunJobFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ScaleOutInstanceOutcome EmrClient::ScaleOutInstance(const ScaleOutInstanceRequest &request)
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

void EmrClient::ScaleOutInstanceAsync(const ScaleOutInstanceRequest& request, const ScaleOutInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScaleOutInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ScaleOutInstanceOutcomeCallable EmrClient::ScaleOutInstanceCallable(const ScaleOutInstanceRequest &request)
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

EmrClient::SyncPodStateOutcome EmrClient::SyncPodState(const SyncPodStateRequest &request)
{
    auto outcome = MakeRequest(request, "SyncPodState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncPodStateResponse rsp = SyncPodStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncPodStateOutcome(rsp);
        else
            return SyncPodStateOutcome(o.GetError());
    }
    else
    {
        return SyncPodStateOutcome(outcome.GetError());
    }
}

void EmrClient::SyncPodStateAsync(const SyncPodStateRequest& request, const SyncPodStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SyncPodState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::SyncPodStateOutcomeCallable EmrClient::SyncPodStateCallable(const SyncPodStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SyncPodStateOutcome()>>(
        [this, request]()
        {
            return this->SyncPodState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::TerminateInstanceOutcome EmrClient::TerminateInstance(const TerminateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateInstanceResponse rsp = TerminateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateInstanceOutcome(rsp);
        else
            return TerminateInstanceOutcome(o.GetError());
    }
    else
    {
        return TerminateInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::TerminateInstanceAsync(const TerminateInstanceRequest& request, const TerminateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::TerminateInstanceOutcomeCallable EmrClient::TerminateInstanceCallable(const TerminateInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateInstanceOutcome()>>(
        [this, request]()
        {
            return this->TerminateInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::TerminateTasksOutcome EmrClient::TerminateTasks(const TerminateTasksRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateTasksResponse rsp = TerminateTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateTasksOutcome(rsp);
        else
            return TerminateTasksOutcome(o.GetError());
    }
    else
    {
        return TerminateTasksOutcome(outcome.GetError());
    }
}

void EmrClient::TerminateTasksAsync(const TerminateTasksRequest& request, const TerminateTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::TerminateTasksOutcomeCallable EmrClient::TerminateTasksCallable(const TerminateTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateTasksOutcome()>>(
        [this, request]()
        {
            return this->TerminateTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

