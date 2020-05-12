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

#include <tencentcloud/monitor/v20180724/MonitorClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Monitor::V20180724;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-07-24";
    const string ENDPOINT = "monitor.tencentcloudapi.com";
}

MonitorClient::MonitorClient(const Credential &credential, const string &region) :
    MonitorClient(credential, region, ClientProfile())
{
}

MonitorClient::MonitorClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MonitorClient::BindingPolicyObjectOutcome MonitorClient::BindingPolicyObject(const BindingPolicyObjectRequest &request)
{
    auto outcome = MakeRequest(request, "BindingPolicyObject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindingPolicyObjectResponse rsp = BindingPolicyObjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindingPolicyObjectOutcome(rsp);
        else
            return BindingPolicyObjectOutcome(o.GetError());
    }
    else
    {
        return BindingPolicyObjectOutcome(outcome.GetError());
    }
}

void MonitorClient::BindingPolicyObjectAsync(const BindingPolicyObjectRequest& request, const BindingPolicyObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindingPolicyObject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::BindingPolicyObjectOutcomeCallable MonitorClient::BindingPolicyObjectCallable(const BindingPolicyObjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindingPolicyObjectOutcome()>>(
        [this, request]()
        {
            return this->BindingPolicyObject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MonitorClient::CreatePolicyGroupOutcome MonitorClient::CreatePolicyGroup(const CreatePolicyGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePolicyGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePolicyGroupResponse rsp = CreatePolicyGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePolicyGroupOutcome(rsp);
        else
            return CreatePolicyGroupOutcome(o.GetError());
    }
    else
    {
        return CreatePolicyGroupOutcome(outcome.GetError());
    }
}

void MonitorClient::CreatePolicyGroupAsync(const CreatePolicyGroupRequest& request, const CreatePolicyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePolicyGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::CreatePolicyGroupOutcomeCallable MonitorClient::CreatePolicyGroupCallable(const CreatePolicyGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePolicyGroupOutcome()>>(
        [this, request]()
        {
            return this->CreatePolicyGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MonitorClient::DeletePolicyGroupOutcome MonitorClient::DeletePolicyGroup(const DeletePolicyGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePolicyGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePolicyGroupResponse rsp = DeletePolicyGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePolicyGroupOutcome(rsp);
        else
            return DeletePolicyGroupOutcome(o.GetError());
    }
    else
    {
        return DeletePolicyGroupOutcome(outcome.GetError());
    }
}

void MonitorClient::DeletePolicyGroupAsync(const DeletePolicyGroupRequest& request, const DeletePolicyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePolicyGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DeletePolicyGroupOutcomeCallable MonitorClient::DeletePolicyGroupCallable(const DeletePolicyGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePolicyGroupOutcome()>>(
        [this, request]()
        {
            return this->DeletePolicyGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MonitorClient::DescribeAccidentEventListOutcome MonitorClient::DescribeAccidentEventList(const DescribeAccidentEventListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccidentEventList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccidentEventListResponse rsp = DescribeAccidentEventListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccidentEventListOutcome(rsp);
        else
            return DescribeAccidentEventListOutcome(o.GetError());
    }
    else
    {
        return DescribeAccidentEventListOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeAccidentEventListAsync(const DescribeAccidentEventListRequest& request, const DescribeAccidentEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccidentEventList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeAccidentEventListOutcomeCallable MonitorClient::DescribeAccidentEventListCallable(const DescribeAccidentEventListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccidentEventListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccidentEventList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MonitorClient::DescribeBaseMetricsOutcome MonitorClient::DescribeBaseMetrics(const DescribeBaseMetricsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaseMetrics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaseMetricsResponse rsp = DescribeBaseMetricsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaseMetricsOutcome(rsp);
        else
            return DescribeBaseMetricsOutcome(o.GetError());
    }
    else
    {
        return DescribeBaseMetricsOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeBaseMetricsAsync(const DescribeBaseMetricsRequest& request, const DescribeBaseMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaseMetrics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeBaseMetricsOutcomeCallable MonitorClient::DescribeBaseMetricsCallable(const DescribeBaseMetricsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaseMetricsOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaseMetrics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MonitorClient::DescribeBasicAlarmListOutcome MonitorClient::DescribeBasicAlarmList(const DescribeBasicAlarmListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBasicAlarmList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBasicAlarmListResponse rsp = DescribeBasicAlarmListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBasicAlarmListOutcome(rsp);
        else
            return DescribeBasicAlarmListOutcome(o.GetError());
    }
    else
    {
        return DescribeBasicAlarmListOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeBasicAlarmListAsync(const DescribeBasicAlarmListRequest& request, const DescribeBasicAlarmListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBasicAlarmList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeBasicAlarmListOutcomeCallable MonitorClient::DescribeBasicAlarmListCallable(const DescribeBasicAlarmListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBasicAlarmListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBasicAlarmList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MonitorClient::DescribeBindingPolicyObjectListOutcome MonitorClient::DescribeBindingPolicyObjectList(const DescribeBindingPolicyObjectListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBindingPolicyObjectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBindingPolicyObjectListResponse rsp = DescribeBindingPolicyObjectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBindingPolicyObjectListOutcome(rsp);
        else
            return DescribeBindingPolicyObjectListOutcome(o.GetError());
    }
    else
    {
        return DescribeBindingPolicyObjectListOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeBindingPolicyObjectListAsync(const DescribeBindingPolicyObjectListRequest& request, const DescribeBindingPolicyObjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBindingPolicyObjectList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeBindingPolicyObjectListOutcomeCallable MonitorClient::DescribeBindingPolicyObjectListCallable(const DescribeBindingPolicyObjectListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBindingPolicyObjectListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBindingPolicyObjectList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MonitorClient::DescribePolicyConditionListOutcome MonitorClient::DescribePolicyConditionList(const DescribePolicyConditionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePolicyConditionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePolicyConditionListResponse rsp = DescribePolicyConditionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePolicyConditionListOutcome(rsp);
        else
            return DescribePolicyConditionListOutcome(o.GetError());
    }
    else
    {
        return DescribePolicyConditionListOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribePolicyConditionListAsync(const DescribePolicyConditionListRequest& request, const DescribePolicyConditionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePolicyConditionList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribePolicyConditionListOutcomeCallable MonitorClient::DescribePolicyConditionListCallable(const DescribePolicyConditionListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePolicyConditionListOutcome()>>(
        [this, request]()
        {
            return this->DescribePolicyConditionList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MonitorClient::DescribePolicyGroupInfoOutcome MonitorClient::DescribePolicyGroupInfo(const DescribePolicyGroupInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePolicyGroupInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePolicyGroupInfoResponse rsp = DescribePolicyGroupInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePolicyGroupInfoOutcome(rsp);
        else
            return DescribePolicyGroupInfoOutcome(o.GetError());
    }
    else
    {
        return DescribePolicyGroupInfoOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribePolicyGroupInfoAsync(const DescribePolicyGroupInfoRequest& request, const DescribePolicyGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePolicyGroupInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribePolicyGroupInfoOutcomeCallable MonitorClient::DescribePolicyGroupInfoCallable(const DescribePolicyGroupInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePolicyGroupInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribePolicyGroupInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MonitorClient::DescribePolicyGroupListOutcome MonitorClient::DescribePolicyGroupList(const DescribePolicyGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePolicyGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePolicyGroupListResponse rsp = DescribePolicyGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePolicyGroupListOutcome(rsp);
        else
            return DescribePolicyGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribePolicyGroupListOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribePolicyGroupListAsync(const DescribePolicyGroupListRequest& request, const DescribePolicyGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePolicyGroupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribePolicyGroupListOutcomeCallable MonitorClient::DescribePolicyGroupListCallable(const DescribePolicyGroupListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePolicyGroupListOutcome()>>(
        [this, request]()
        {
            return this->DescribePolicyGroupList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MonitorClient::DescribeProductEventListOutcome MonitorClient::DescribeProductEventList(const DescribeProductEventListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductEventList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductEventListResponse rsp = DescribeProductEventListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductEventListOutcome(rsp);
        else
            return DescribeProductEventListOutcome(o.GetError());
    }
    else
    {
        return DescribeProductEventListOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeProductEventListAsync(const DescribeProductEventListRequest& request, const DescribeProductEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProductEventList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeProductEventListOutcomeCallable MonitorClient::DescribeProductEventListCallable(const DescribeProductEventListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProductEventListOutcome()>>(
        [this, request]()
        {
            return this->DescribeProductEventList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MonitorClient::DescribeProductListOutcome MonitorClient::DescribeProductList(const DescribeProductListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductListResponse rsp = DescribeProductListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductListOutcome(rsp);
        else
            return DescribeProductListOutcome(o.GetError());
    }
    else
    {
        return DescribeProductListOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeProductListAsync(const DescribeProductListRequest& request, const DescribeProductListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProductList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::DescribeProductListOutcomeCallable MonitorClient::DescribeProductListCallable(const DescribeProductListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProductListOutcome()>>(
        [this, request]()
        {
            return this->DescribeProductList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MonitorClient::GetMonitorDataOutcome MonitorClient::GetMonitorData(const GetMonitorDataRequest &request)
{
    auto outcome = MakeRequest(request, "GetMonitorData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetMonitorDataResponse rsp = GetMonitorDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetMonitorDataOutcome(rsp);
        else
            return GetMonitorDataOutcome(o.GetError());
    }
    else
    {
        return GetMonitorDataOutcome(outcome.GetError());
    }
}

void MonitorClient::GetMonitorDataAsync(const GetMonitorDataRequest& request, const GetMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetMonitorData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::GetMonitorDataOutcomeCallable MonitorClient::GetMonitorDataCallable(const GetMonitorDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetMonitorDataOutcome()>>(
        [this, request]()
        {
            return this->GetMonitorData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MonitorClient::ModifyAlarmReceiversOutcome MonitorClient::ModifyAlarmReceivers(const ModifyAlarmReceiversRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAlarmReceivers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAlarmReceiversResponse rsp = ModifyAlarmReceiversResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAlarmReceiversOutcome(rsp);
        else
            return ModifyAlarmReceiversOutcome(o.GetError());
    }
    else
    {
        return ModifyAlarmReceiversOutcome(outcome.GetError());
    }
}

void MonitorClient::ModifyAlarmReceiversAsync(const ModifyAlarmReceiversRequest& request, const ModifyAlarmReceiversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAlarmReceivers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::ModifyAlarmReceiversOutcomeCallable MonitorClient::ModifyAlarmReceiversCallable(const ModifyAlarmReceiversRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAlarmReceiversOutcome()>>(
        [this, request]()
        {
            return this->ModifyAlarmReceivers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MonitorClient::ModifyPolicyGroupOutcome MonitorClient::ModifyPolicyGroup(const ModifyPolicyGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPolicyGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPolicyGroupResponse rsp = ModifyPolicyGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPolicyGroupOutcome(rsp);
        else
            return ModifyPolicyGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyPolicyGroupOutcome(outcome.GetError());
    }
}

void MonitorClient::ModifyPolicyGroupAsync(const ModifyPolicyGroupRequest& request, const ModifyPolicyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPolicyGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::ModifyPolicyGroupOutcomeCallable MonitorClient::ModifyPolicyGroupCallable(const ModifyPolicyGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPolicyGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyPolicyGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MonitorClient::PutMonitorDataOutcome MonitorClient::PutMonitorData(const PutMonitorDataRequest &request)
{
    auto outcome = MakeRequest(request, "PutMonitorData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PutMonitorDataResponse rsp = PutMonitorDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PutMonitorDataOutcome(rsp);
        else
            return PutMonitorDataOutcome(o.GetError());
    }
    else
    {
        return PutMonitorDataOutcome(outcome.GetError());
    }
}

void MonitorClient::PutMonitorDataAsync(const PutMonitorDataRequest& request, const PutMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PutMonitorData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::PutMonitorDataOutcomeCallable MonitorClient::PutMonitorDataCallable(const PutMonitorDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PutMonitorDataOutcome()>>(
        [this, request]()
        {
            return this->PutMonitorData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MonitorClient::SendCustomAlarmMsgOutcome MonitorClient::SendCustomAlarmMsg(const SendCustomAlarmMsgRequest &request)
{
    auto outcome = MakeRequest(request, "SendCustomAlarmMsg");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendCustomAlarmMsgResponse rsp = SendCustomAlarmMsgResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendCustomAlarmMsgOutcome(rsp);
        else
            return SendCustomAlarmMsgOutcome(o.GetError());
    }
    else
    {
        return SendCustomAlarmMsgOutcome(outcome.GetError());
    }
}

void MonitorClient::SendCustomAlarmMsgAsync(const SendCustomAlarmMsgRequest& request, const SendCustomAlarmMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendCustomAlarmMsg(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::SendCustomAlarmMsgOutcomeCallable MonitorClient::SendCustomAlarmMsgCallable(const SendCustomAlarmMsgRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendCustomAlarmMsgOutcome()>>(
        [this, request]()
        {
            return this->SendCustomAlarmMsg(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MonitorClient::UnBindingAllPolicyObjectOutcome MonitorClient::UnBindingAllPolicyObject(const UnBindingAllPolicyObjectRequest &request)
{
    auto outcome = MakeRequest(request, "UnBindingAllPolicyObject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnBindingAllPolicyObjectResponse rsp = UnBindingAllPolicyObjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnBindingAllPolicyObjectOutcome(rsp);
        else
            return UnBindingAllPolicyObjectOutcome(o.GetError());
    }
    else
    {
        return UnBindingAllPolicyObjectOutcome(outcome.GetError());
    }
}

void MonitorClient::UnBindingAllPolicyObjectAsync(const UnBindingAllPolicyObjectRequest& request, const UnBindingAllPolicyObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnBindingAllPolicyObject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::UnBindingAllPolicyObjectOutcomeCallable MonitorClient::UnBindingAllPolicyObjectCallable(const UnBindingAllPolicyObjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnBindingAllPolicyObjectOutcome()>>(
        [this, request]()
        {
            return this->UnBindingAllPolicyObject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MonitorClient::UnBindingPolicyObjectOutcome MonitorClient::UnBindingPolicyObject(const UnBindingPolicyObjectRequest &request)
{
    auto outcome = MakeRequest(request, "UnBindingPolicyObject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnBindingPolicyObjectResponse rsp = UnBindingPolicyObjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnBindingPolicyObjectOutcome(rsp);
        else
            return UnBindingPolicyObjectOutcome(o.GetError());
    }
    else
    {
        return UnBindingPolicyObjectOutcome(outcome.GetError());
    }
}

void MonitorClient::UnBindingPolicyObjectAsync(const UnBindingPolicyObjectRequest& request, const UnBindingPolicyObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnBindingPolicyObject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MonitorClient::UnBindingPolicyObjectOutcomeCallable MonitorClient::UnBindingPolicyObjectCallable(const UnBindingPolicyObjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnBindingPolicyObjectOutcome()>>(
        [this, request]()
        {
            return this->UnBindingPolicyObject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

