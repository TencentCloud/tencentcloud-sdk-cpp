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

#include <tencentcloud/cwp/v20180228/CwpClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cwp::V20180228;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-02-28";
    const string ENDPOINT = "cwp.tencentcloudapi.com";
}

CwpClient::CwpClient(const Credential &credential, const string &region) :
    CwpClient(credential, region, ClientProfile())
{
}

CwpClient::CwpClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CwpClient::AddLoginWhiteListsOutcome CwpClient::AddLoginWhiteLists(const AddLoginWhiteListsRequest &request)
{
    auto outcome = MakeRequest(request, "AddLoginWhiteLists");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddLoginWhiteListsResponse rsp = AddLoginWhiteListsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddLoginWhiteListsOutcome(rsp);
        else
            return AddLoginWhiteListsOutcome(o.GetError());
    }
    else
    {
        return AddLoginWhiteListsOutcome(outcome.GetError());
    }
}

void CwpClient::AddLoginWhiteListsAsync(const AddLoginWhiteListsRequest& request, const AddLoginWhiteListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddLoginWhiteLists(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::AddLoginWhiteListsOutcomeCallable CwpClient::AddLoginWhiteListsCallable(const AddLoginWhiteListsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddLoginWhiteListsOutcome()>>(
        [this, request]()
        {
            return this->AddLoginWhiteLists(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::CancelIgnoreVulOutcome CwpClient::CancelIgnoreVul(const CancelIgnoreVulRequest &request)
{
    auto outcome = MakeRequest(request, "CancelIgnoreVul");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelIgnoreVulResponse rsp = CancelIgnoreVulResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelIgnoreVulOutcome(rsp);
        else
            return CancelIgnoreVulOutcome(o.GetError());
    }
    else
    {
        return CancelIgnoreVulOutcome(outcome.GetError());
    }
}

void CwpClient::CancelIgnoreVulAsync(const CancelIgnoreVulRequest& request, const CancelIgnoreVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelIgnoreVul(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::CancelIgnoreVulOutcomeCallable CwpClient::CancelIgnoreVulCallable(const CancelIgnoreVulRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelIgnoreVulOutcome()>>(
        [this, request]()
        {
            return this->CancelIgnoreVul(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ChangeRuleEventsIgnoreStatusOutcome CwpClient::ChangeRuleEventsIgnoreStatus(const ChangeRuleEventsIgnoreStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ChangeRuleEventsIgnoreStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChangeRuleEventsIgnoreStatusResponse rsp = ChangeRuleEventsIgnoreStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChangeRuleEventsIgnoreStatusOutcome(rsp);
        else
            return ChangeRuleEventsIgnoreStatusOutcome(o.GetError());
    }
    else
    {
        return ChangeRuleEventsIgnoreStatusOutcome(outcome.GetError());
    }
}

void CwpClient::ChangeRuleEventsIgnoreStatusAsync(const ChangeRuleEventsIgnoreStatusRequest& request, const ChangeRuleEventsIgnoreStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChangeRuleEventsIgnoreStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ChangeRuleEventsIgnoreStatusOutcomeCallable CwpClient::ChangeRuleEventsIgnoreStatusCallable(const ChangeRuleEventsIgnoreStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChangeRuleEventsIgnoreStatusOutcome()>>(
        [this, request]()
        {
            return this->ChangeRuleEventsIgnoreStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ChangeStrategyEnableStatusOutcome CwpClient::ChangeStrategyEnableStatus(const ChangeStrategyEnableStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ChangeStrategyEnableStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChangeStrategyEnableStatusResponse rsp = ChangeStrategyEnableStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChangeStrategyEnableStatusOutcome(rsp);
        else
            return ChangeStrategyEnableStatusOutcome(o.GetError());
    }
    else
    {
        return ChangeStrategyEnableStatusOutcome(outcome.GetError());
    }
}

void CwpClient::ChangeStrategyEnableStatusAsync(const ChangeStrategyEnableStatusRequest& request, const ChangeStrategyEnableStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChangeStrategyEnableStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ChangeStrategyEnableStatusOutcomeCallable CwpClient::ChangeStrategyEnableStatusCallable(const ChangeStrategyEnableStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChangeStrategyEnableStatusOutcome()>>(
        [this, request]()
        {
            return this->ChangeStrategyEnableStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::CheckBashPolicyParamsOutcome CwpClient::CheckBashPolicyParams(const CheckBashPolicyParamsRequest &request)
{
    auto outcome = MakeRequest(request, "CheckBashPolicyParams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckBashPolicyParamsResponse rsp = CheckBashPolicyParamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckBashPolicyParamsOutcome(rsp);
        else
            return CheckBashPolicyParamsOutcome(o.GetError());
    }
    else
    {
        return CheckBashPolicyParamsOutcome(outcome.GetError());
    }
}

void CwpClient::CheckBashPolicyParamsAsync(const CheckBashPolicyParamsRequest& request, const CheckBashPolicyParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckBashPolicyParams(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::CheckBashPolicyParamsOutcomeCallable CwpClient::CheckBashPolicyParamsCallable(const CheckBashPolicyParamsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckBashPolicyParamsOutcome()>>(
        [this, request]()
        {
            return this->CheckBashPolicyParams(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::CheckBashRuleParamsOutcome CwpClient::CheckBashRuleParams(const CheckBashRuleParamsRequest &request)
{
    auto outcome = MakeRequest(request, "CheckBashRuleParams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckBashRuleParamsResponse rsp = CheckBashRuleParamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckBashRuleParamsOutcome(rsp);
        else
            return CheckBashRuleParamsOutcome(o.GetError());
    }
    else
    {
        return CheckBashRuleParamsOutcome(outcome.GetError());
    }
}

void CwpClient::CheckBashRuleParamsAsync(const CheckBashRuleParamsRequest& request, const CheckBashRuleParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckBashRuleParams(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::CheckBashRuleParamsOutcomeCallable CwpClient::CheckBashRuleParamsCallable(const CheckBashRuleParamsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckBashRuleParamsOutcome()>>(
        [this, request]()
        {
            return this->CheckBashRuleParams(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::CheckFileTamperRuleOutcome CwpClient::CheckFileTamperRule(const CheckFileTamperRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CheckFileTamperRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckFileTamperRuleResponse rsp = CheckFileTamperRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckFileTamperRuleOutcome(rsp);
        else
            return CheckFileTamperRuleOutcome(o.GetError());
    }
    else
    {
        return CheckFileTamperRuleOutcome(outcome.GetError());
    }
}

void CwpClient::CheckFileTamperRuleAsync(const CheckFileTamperRuleRequest& request, const CheckFileTamperRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckFileTamperRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::CheckFileTamperRuleOutcomeCallable CwpClient::CheckFileTamperRuleCallable(const CheckFileTamperRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckFileTamperRuleOutcome()>>(
        [this, request]()
        {
            return this->CheckFileTamperRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::CheckFirstScanBaselineOutcome CwpClient::CheckFirstScanBaseline(const CheckFirstScanBaselineRequest &request)
{
    auto outcome = MakeRequest(request, "CheckFirstScanBaseline");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckFirstScanBaselineResponse rsp = CheckFirstScanBaselineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckFirstScanBaselineOutcome(rsp);
        else
            return CheckFirstScanBaselineOutcome(o.GetError());
    }
    else
    {
        return CheckFirstScanBaselineOutcome(outcome.GetError());
    }
}

void CwpClient::CheckFirstScanBaselineAsync(const CheckFirstScanBaselineRequest& request, const CheckFirstScanBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckFirstScanBaseline(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::CheckFirstScanBaselineOutcomeCallable CwpClient::CheckFirstScanBaselineCallable(const CheckFirstScanBaselineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckFirstScanBaselineOutcome()>>(
        [this, request]()
        {
            return this->CheckFirstScanBaseline(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::CheckLogKafkaConnectionStateOutcome CwpClient::CheckLogKafkaConnectionState(const CheckLogKafkaConnectionStateRequest &request)
{
    auto outcome = MakeRequest(request, "CheckLogKafkaConnectionState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckLogKafkaConnectionStateResponse rsp = CheckLogKafkaConnectionStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckLogKafkaConnectionStateOutcome(rsp);
        else
            return CheckLogKafkaConnectionStateOutcome(o.GetError());
    }
    else
    {
        return CheckLogKafkaConnectionStateOutcome(outcome.GetError());
    }
}

void CwpClient::CheckLogKafkaConnectionStateAsync(const CheckLogKafkaConnectionStateRequest& request, const CheckLogKafkaConnectionStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckLogKafkaConnectionState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::CheckLogKafkaConnectionStateOutcomeCallable CwpClient::CheckLogKafkaConnectionStateCallable(const CheckLogKafkaConnectionStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckLogKafkaConnectionStateOutcome()>>(
        [this, request]()
        {
            return this->CheckLogKafkaConnectionState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ClearLocalStorageOutcome CwpClient::ClearLocalStorage(const ClearLocalStorageRequest &request)
{
    auto outcome = MakeRequest(request, "ClearLocalStorage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ClearLocalStorageResponse rsp = ClearLocalStorageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ClearLocalStorageOutcome(rsp);
        else
            return ClearLocalStorageOutcome(o.GetError());
    }
    else
    {
        return ClearLocalStorageOutcome(outcome.GetError());
    }
}

void CwpClient::ClearLocalStorageAsync(const ClearLocalStorageRequest& request, const ClearLocalStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ClearLocalStorage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ClearLocalStorageOutcomeCallable CwpClient::ClearLocalStorageCallable(const ClearLocalStorageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ClearLocalStorageOutcome()>>(
        [this, request]()
        {
            return this->ClearLocalStorage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::CreateBanWhiteListOutcome CwpClient::CreateBanWhiteList(const CreateBanWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBanWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBanWhiteListResponse rsp = CreateBanWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBanWhiteListOutcome(rsp);
        else
            return CreateBanWhiteListOutcome(o.GetError());
    }
    else
    {
        return CreateBanWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::CreateBanWhiteListAsync(const CreateBanWhiteListRequest& request, const CreateBanWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBanWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::CreateBanWhiteListOutcomeCallable CwpClient::CreateBanWhiteListCallable(const CreateBanWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBanWhiteListOutcome()>>(
        [this, request]()
        {
            return this->CreateBanWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::CreateBaselineStrategyOutcome CwpClient::CreateBaselineStrategy(const CreateBaselineStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBaselineStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBaselineStrategyResponse rsp = CreateBaselineStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBaselineStrategyOutcome(rsp);
        else
            return CreateBaselineStrategyOutcome(o.GetError());
    }
    else
    {
        return CreateBaselineStrategyOutcome(outcome.GetError());
    }
}

void CwpClient::CreateBaselineStrategyAsync(const CreateBaselineStrategyRequest& request, const CreateBaselineStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBaselineStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::CreateBaselineStrategyOutcomeCallable CwpClient::CreateBaselineStrategyCallable(const CreateBaselineStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBaselineStrategyOutcome()>>(
        [this, request]()
        {
            return this->CreateBaselineStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::CreateBuyBindTaskOutcome CwpClient::CreateBuyBindTask(const CreateBuyBindTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBuyBindTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBuyBindTaskResponse rsp = CreateBuyBindTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBuyBindTaskOutcome(rsp);
        else
            return CreateBuyBindTaskOutcome(o.GetError());
    }
    else
    {
        return CreateBuyBindTaskOutcome(outcome.GetError());
    }
}

void CwpClient::CreateBuyBindTaskAsync(const CreateBuyBindTaskRequest& request, const CreateBuyBindTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBuyBindTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::CreateBuyBindTaskOutcomeCallable CwpClient::CreateBuyBindTaskCallable(const CreateBuyBindTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBuyBindTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateBuyBindTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::CreateEmergencyVulScanOutcome CwpClient::CreateEmergencyVulScan(const CreateEmergencyVulScanRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEmergencyVulScan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEmergencyVulScanResponse rsp = CreateEmergencyVulScanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEmergencyVulScanOutcome(rsp);
        else
            return CreateEmergencyVulScanOutcome(o.GetError());
    }
    else
    {
        return CreateEmergencyVulScanOutcome(outcome.GetError());
    }
}

void CwpClient::CreateEmergencyVulScanAsync(const CreateEmergencyVulScanRequest& request, const CreateEmergencyVulScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEmergencyVulScan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::CreateEmergencyVulScanOutcomeCallable CwpClient::CreateEmergencyVulScanCallable(const CreateEmergencyVulScanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEmergencyVulScanOutcome()>>(
        [this, request]()
        {
            return this->CreateEmergencyVulScan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::CreateIncidentBacktrackingOutcome CwpClient::CreateIncidentBacktracking(const CreateIncidentBacktrackingRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIncidentBacktracking");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIncidentBacktrackingResponse rsp = CreateIncidentBacktrackingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIncidentBacktrackingOutcome(rsp);
        else
            return CreateIncidentBacktrackingOutcome(o.GetError());
    }
    else
    {
        return CreateIncidentBacktrackingOutcome(outcome.GetError());
    }
}

void CwpClient::CreateIncidentBacktrackingAsync(const CreateIncidentBacktrackingRequest& request, const CreateIncidentBacktrackingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateIncidentBacktracking(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::CreateIncidentBacktrackingOutcomeCallable CwpClient::CreateIncidentBacktrackingCallable(const CreateIncidentBacktrackingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateIncidentBacktrackingOutcome()>>(
        [this, request]()
        {
            return this->CreateIncidentBacktracking(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::CreateLicenseOrderOutcome CwpClient::CreateLicenseOrder(const CreateLicenseOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLicenseOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLicenseOrderResponse rsp = CreateLicenseOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLicenseOrderOutcome(rsp);
        else
            return CreateLicenseOrderOutcome(o.GetError());
    }
    else
    {
        return CreateLicenseOrderOutcome(outcome.GetError());
    }
}

void CwpClient::CreateLicenseOrderAsync(const CreateLicenseOrderRequest& request, const CreateLicenseOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLicenseOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::CreateLicenseOrderOutcomeCallable CwpClient::CreateLicenseOrderCallable(const CreateLicenseOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLicenseOrderOutcome()>>(
        [this, request]()
        {
            return this->CreateLicenseOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::CreateLogExportOutcome CwpClient::CreateLogExport(const CreateLogExportRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLogExport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLogExportResponse rsp = CreateLogExportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLogExportOutcome(rsp);
        else
            return CreateLogExportOutcome(o.GetError());
    }
    else
    {
        return CreateLogExportOutcome(outcome.GetError());
    }
}

void CwpClient::CreateLogExportAsync(const CreateLogExportRequest& request, const CreateLogExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLogExport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::CreateLogExportOutcomeCallable CwpClient::CreateLogExportCallable(const CreateLogExportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLogExportOutcome()>>(
        [this, request]()
        {
            return this->CreateLogExport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::CreateMaliciousRequestWhiteListOutcome CwpClient::CreateMaliciousRequestWhiteList(const CreateMaliciousRequestWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMaliciousRequestWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMaliciousRequestWhiteListResponse rsp = CreateMaliciousRequestWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMaliciousRequestWhiteListOutcome(rsp);
        else
            return CreateMaliciousRequestWhiteListOutcome(o.GetError());
    }
    else
    {
        return CreateMaliciousRequestWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::CreateMaliciousRequestWhiteListAsync(const CreateMaliciousRequestWhiteListRequest& request, const CreateMaliciousRequestWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMaliciousRequestWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::CreateMaliciousRequestWhiteListOutcomeCallable CwpClient::CreateMaliciousRequestWhiteListCallable(const CreateMaliciousRequestWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMaliciousRequestWhiteListOutcome()>>(
        [this, request]()
        {
            return this->CreateMaliciousRequestWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::CreateMalwareWhiteListOutcome CwpClient::CreateMalwareWhiteList(const CreateMalwareWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMalwareWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMalwareWhiteListResponse rsp = CreateMalwareWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMalwareWhiteListOutcome(rsp);
        else
            return CreateMalwareWhiteListOutcome(o.GetError());
    }
    else
    {
        return CreateMalwareWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::CreateMalwareWhiteListAsync(const CreateMalwareWhiteListRequest& request, const CreateMalwareWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMalwareWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::CreateMalwareWhiteListOutcomeCallable CwpClient::CreateMalwareWhiteListCallable(const CreateMalwareWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMalwareWhiteListOutcome()>>(
        [this, request]()
        {
            return this->CreateMalwareWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::CreateNetAttackWhiteListOutcome CwpClient::CreateNetAttackWhiteList(const CreateNetAttackWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNetAttackWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNetAttackWhiteListResponse rsp = CreateNetAttackWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNetAttackWhiteListOutcome(rsp);
        else
            return CreateNetAttackWhiteListOutcome(o.GetError());
    }
    else
    {
        return CreateNetAttackWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::CreateNetAttackWhiteListAsync(const CreateNetAttackWhiteListRequest& request, const CreateNetAttackWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNetAttackWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::CreateNetAttackWhiteListOutcomeCallable CwpClient::CreateNetAttackWhiteListCallable(const CreateNetAttackWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNetAttackWhiteListOutcome()>>(
        [this, request]()
        {
            return this->CreateNetAttackWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::CreateProtectServerOutcome CwpClient::CreateProtectServer(const CreateProtectServerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProtectServer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProtectServerResponse rsp = CreateProtectServerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProtectServerOutcome(rsp);
        else
            return CreateProtectServerOutcome(o.GetError());
    }
    else
    {
        return CreateProtectServerOutcome(outcome.GetError());
    }
}

void CwpClient::CreateProtectServerAsync(const CreateProtectServerRequest& request, const CreateProtectServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProtectServer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::CreateProtectServerOutcomeCallable CwpClient::CreateProtectServerCallable(const CreateProtectServerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateProtectServerOutcome()>>(
        [this, request]()
        {
            return this->CreateProtectServer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::CreateRansomDefenseStrategyOutcome CwpClient::CreateRansomDefenseStrategy(const CreateRansomDefenseStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRansomDefenseStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRansomDefenseStrategyResponse rsp = CreateRansomDefenseStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRansomDefenseStrategyOutcome(rsp);
        else
            return CreateRansomDefenseStrategyOutcome(o.GetError());
    }
    else
    {
        return CreateRansomDefenseStrategyOutcome(outcome.GetError());
    }
}

void CwpClient::CreateRansomDefenseStrategyAsync(const CreateRansomDefenseStrategyRequest& request, const CreateRansomDefenseStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRansomDefenseStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::CreateRansomDefenseStrategyOutcomeCallable CwpClient::CreateRansomDefenseStrategyCallable(const CreateRansomDefenseStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRansomDefenseStrategyOutcome()>>(
        [this, request]()
        {
            return this->CreateRansomDefenseStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::CreateScanMalwareSettingOutcome CwpClient::CreateScanMalwareSetting(const CreateScanMalwareSettingRequest &request)
{
    auto outcome = MakeRequest(request, "CreateScanMalwareSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateScanMalwareSettingResponse rsp = CreateScanMalwareSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateScanMalwareSettingOutcome(rsp);
        else
            return CreateScanMalwareSettingOutcome(o.GetError());
    }
    else
    {
        return CreateScanMalwareSettingOutcome(outcome.GetError());
    }
}

void CwpClient::CreateScanMalwareSettingAsync(const CreateScanMalwareSettingRequest& request, const CreateScanMalwareSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateScanMalwareSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::CreateScanMalwareSettingOutcomeCallable CwpClient::CreateScanMalwareSettingCallable(const CreateScanMalwareSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateScanMalwareSettingOutcome()>>(
        [this, request]()
        {
            return this->CreateScanMalwareSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::CreateSearchLogOutcome CwpClient::CreateSearchLog(const CreateSearchLogRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSearchLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSearchLogResponse rsp = CreateSearchLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSearchLogOutcome(rsp);
        else
            return CreateSearchLogOutcome(o.GetError());
    }
    else
    {
        return CreateSearchLogOutcome(outcome.GetError());
    }
}

void CwpClient::CreateSearchLogAsync(const CreateSearchLogRequest& request, const CreateSearchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSearchLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::CreateSearchLogOutcomeCallable CwpClient::CreateSearchLogCallable(const CreateSearchLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSearchLogOutcome()>>(
        [this, request]()
        {
            return this->CreateSearchLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::CreateSearchTemplateOutcome CwpClient::CreateSearchTemplate(const CreateSearchTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSearchTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSearchTemplateResponse rsp = CreateSearchTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSearchTemplateOutcome(rsp);
        else
            return CreateSearchTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateSearchTemplateOutcome(outcome.GetError());
    }
}

void CwpClient::CreateSearchTemplateAsync(const CreateSearchTemplateRequest& request, const CreateSearchTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSearchTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::CreateSearchTemplateOutcomeCallable CwpClient::CreateSearchTemplateCallable(const CreateSearchTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSearchTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateSearchTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::CreateVulFixOutcome CwpClient::CreateVulFix(const CreateVulFixRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVulFix");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVulFixResponse rsp = CreateVulFixResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVulFixOutcome(rsp);
        else
            return CreateVulFixOutcome(o.GetError());
    }
    else
    {
        return CreateVulFixOutcome(outcome.GetError());
    }
}

void CwpClient::CreateVulFixAsync(const CreateVulFixRequest& request, const CreateVulFixAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVulFix(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::CreateVulFixOutcomeCallable CwpClient::CreateVulFixCallable(const CreateVulFixRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVulFixOutcome()>>(
        [this, request]()
        {
            return this->CreateVulFix(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::CreateWhiteListOrderOutcome CwpClient::CreateWhiteListOrder(const CreateWhiteListOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWhiteListOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWhiteListOrderResponse rsp = CreateWhiteListOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWhiteListOrderOutcome(rsp);
        else
            return CreateWhiteListOrderOutcome(o.GetError());
    }
    else
    {
        return CreateWhiteListOrderOutcome(outcome.GetError());
    }
}

void CwpClient::CreateWhiteListOrderAsync(const CreateWhiteListOrderRequest& request, const CreateWhiteListOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWhiteListOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::CreateWhiteListOrderOutcomeCallable CwpClient::CreateWhiteListOrderCallable(const CreateWhiteListOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWhiteListOrderOutcome()>>(
        [this, request]()
        {
            return this->CreateWhiteListOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteAllJavaMemShellsOutcome CwpClient::DeleteAllJavaMemShells(const DeleteAllJavaMemShellsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAllJavaMemShells");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAllJavaMemShellsResponse rsp = DeleteAllJavaMemShellsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAllJavaMemShellsOutcome(rsp);
        else
            return DeleteAllJavaMemShellsOutcome(o.GetError());
    }
    else
    {
        return DeleteAllJavaMemShellsOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteAllJavaMemShellsAsync(const DeleteAllJavaMemShellsRequest& request, const DeleteAllJavaMemShellsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAllJavaMemShells(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteAllJavaMemShellsOutcomeCallable CwpClient::DeleteAllJavaMemShellsCallable(const DeleteAllJavaMemShellsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAllJavaMemShellsOutcome()>>(
        [this, request]()
        {
            return this->DeleteAllJavaMemShells(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteBanWhiteListOutcome CwpClient::DeleteBanWhiteList(const DeleteBanWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBanWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBanWhiteListResponse rsp = DeleteBanWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBanWhiteListOutcome(rsp);
        else
            return DeleteBanWhiteListOutcome(o.GetError());
    }
    else
    {
        return DeleteBanWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteBanWhiteListAsync(const DeleteBanWhiteListRequest& request, const DeleteBanWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBanWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteBanWhiteListOutcomeCallable CwpClient::DeleteBanWhiteListCallable(const DeleteBanWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteBanWhiteListOutcome()>>(
        [this, request]()
        {
            return this->DeleteBanWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteBaselinePolicyOutcome CwpClient::DeleteBaselinePolicy(const DeleteBaselinePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBaselinePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBaselinePolicyResponse rsp = DeleteBaselinePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBaselinePolicyOutcome(rsp);
        else
            return DeleteBaselinePolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteBaselinePolicyOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteBaselinePolicyAsync(const DeleteBaselinePolicyRequest& request, const DeleteBaselinePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBaselinePolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteBaselinePolicyOutcomeCallable CwpClient::DeleteBaselinePolicyCallable(const DeleteBaselinePolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteBaselinePolicyOutcome()>>(
        [this, request]()
        {
            return this->DeleteBaselinePolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteBaselineRuleOutcome CwpClient::DeleteBaselineRule(const DeleteBaselineRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBaselineRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBaselineRuleResponse rsp = DeleteBaselineRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBaselineRuleOutcome(rsp);
        else
            return DeleteBaselineRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteBaselineRuleOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteBaselineRuleAsync(const DeleteBaselineRuleRequest& request, const DeleteBaselineRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBaselineRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteBaselineRuleOutcomeCallable CwpClient::DeleteBaselineRuleCallable(const DeleteBaselineRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteBaselineRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteBaselineRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteBaselineRuleIgnoreOutcome CwpClient::DeleteBaselineRuleIgnore(const DeleteBaselineRuleIgnoreRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBaselineRuleIgnore");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBaselineRuleIgnoreResponse rsp = DeleteBaselineRuleIgnoreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBaselineRuleIgnoreOutcome(rsp);
        else
            return DeleteBaselineRuleIgnoreOutcome(o.GetError());
    }
    else
    {
        return DeleteBaselineRuleIgnoreOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteBaselineRuleIgnoreAsync(const DeleteBaselineRuleIgnoreRequest& request, const DeleteBaselineRuleIgnoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBaselineRuleIgnore(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteBaselineRuleIgnoreOutcomeCallable CwpClient::DeleteBaselineRuleIgnoreCallable(const DeleteBaselineRuleIgnoreRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteBaselineRuleIgnoreOutcome()>>(
        [this, request]()
        {
            return this->DeleteBaselineRuleIgnore(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteBaselineStrategyOutcome CwpClient::DeleteBaselineStrategy(const DeleteBaselineStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBaselineStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBaselineStrategyResponse rsp = DeleteBaselineStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBaselineStrategyOutcome(rsp);
        else
            return DeleteBaselineStrategyOutcome(o.GetError());
    }
    else
    {
        return DeleteBaselineStrategyOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteBaselineStrategyAsync(const DeleteBaselineStrategyRequest& request, const DeleteBaselineStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBaselineStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteBaselineStrategyOutcomeCallable CwpClient::DeleteBaselineStrategyCallable(const DeleteBaselineStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteBaselineStrategyOutcome()>>(
        [this, request]()
        {
            return this->DeleteBaselineStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteBaselineWeakPasswordOutcome CwpClient::DeleteBaselineWeakPassword(const DeleteBaselineWeakPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBaselineWeakPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBaselineWeakPasswordResponse rsp = DeleteBaselineWeakPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBaselineWeakPasswordOutcome(rsp);
        else
            return DeleteBaselineWeakPasswordOutcome(o.GetError());
    }
    else
    {
        return DeleteBaselineWeakPasswordOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteBaselineWeakPasswordAsync(const DeleteBaselineWeakPasswordRequest& request, const DeleteBaselineWeakPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBaselineWeakPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteBaselineWeakPasswordOutcomeCallable CwpClient::DeleteBaselineWeakPasswordCallable(const DeleteBaselineWeakPasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteBaselineWeakPasswordOutcome()>>(
        [this, request]()
        {
            return this->DeleteBaselineWeakPassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteBashEventsOutcome CwpClient::DeleteBashEvents(const DeleteBashEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBashEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBashEventsResponse rsp = DeleteBashEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBashEventsOutcome(rsp);
        else
            return DeleteBashEventsOutcome(o.GetError());
    }
    else
    {
        return DeleteBashEventsOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteBashEventsAsync(const DeleteBashEventsRequest& request, const DeleteBashEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBashEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteBashEventsOutcomeCallable CwpClient::DeleteBashEventsCallable(const DeleteBashEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteBashEventsOutcome()>>(
        [this, request]()
        {
            return this->DeleteBashEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteBashPoliciesOutcome CwpClient::DeleteBashPolicies(const DeleteBashPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBashPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBashPoliciesResponse rsp = DeleteBashPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBashPoliciesOutcome(rsp);
        else
            return DeleteBashPoliciesOutcome(o.GetError());
    }
    else
    {
        return DeleteBashPoliciesOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteBashPoliciesAsync(const DeleteBashPoliciesRequest& request, const DeleteBashPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBashPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteBashPoliciesOutcomeCallable CwpClient::DeleteBashPoliciesCallable(const DeleteBashPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteBashPoliciesOutcome()>>(
        [this, request]()
        {
            return this->DeleteBashPolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteBashRulesOutcome CwpClient::DeleteBashRules(const DeleteBashRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBashRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBashRulesResponse rsp = DeleteBashRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBashRulesOutcome(rsp);
        else
            return DeleteBashRulesOutcome(o.GetError());
    }
    else
    {
        return DeleteBashRulesOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteBashRulesAsync(const DeleteBashRulesRequest& request, const DeleteBashRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBashRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteBashRulesOutcomeCallable CwpClient::DeleteBashRulesCallable(const DeleteBashRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteBashRulesOutcome()>>(
        [this, request]()
        {
            return this->DeleteBashRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteBruteAttacksOutcome CwpClient::DeleteBruteAttacks(const DeleteBruteAttacksRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBruteAttacks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBruteAttacksResponse rsp = DeleteBruteAttacksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBruteAttacksOutcome(rsp);
        else
            return DeleteBruteAttacksOutcome(o.GetError());
    }
    else
    {
        return DeleteBruteAttacksOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteBruteAttacksAsync(const DeleteBruteAttacksRequest& request, const DeleteBruteAttacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBruteAttacks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteBruteAttacksOutcomeCallable CwpClient::DeleteBruteAttacksCallable(const DeleteBruteAttacksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteBruteAttacksOutcome()>>(
        [this, request]()
        {
            return this->DeleteBruteAttacks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteLicenseRecordOutcome CwpClient::DeleteLicenseRecord(const DeleteLicenseRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLicenseRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLicenseRecordResponse rsp = DeleteLicenseRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLicenseRecordOutcome(rsp);
        else
            return DeleteLicenseRecordOutcome(o.GetError());
    }
    else
    {
        return DeleteLicenseRecordOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteLicenseRecordAsync(const DeleteLicenseRecordRequest& request, const DeleteLicenseRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLicenseRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteLicenseRecordOutcomeCallable CwpClient::DeleteLicenseRecordCallable(const DeleteLicenseRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLicenseRecordOutcome()>>(
        [this, request]()
        {
            return this->DeleteLicenseRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteLicenseRecordAllOutcome CwpClient::DeleteLicenseRecordAll(const DeleteLicenseRecordAllRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLicenseRecordAll");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLicenseRecordAllResponse rsp = DeleteLicenseRecordAllResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLicenseRecordAllOutcome(rsp);
        else
            return DeleteLicenseRecordAllOutcome(o.GetError());
    }
    else
    {
        return DeleteLicenseRecordAllOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteLicenseRecordAllAsync(const DeleteLicenseRecordAllRequest& request, const DeleteLicenseRecordAllAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLicenseRecordAll(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteLicenseRecordAllOutcomeCallable CwpClient::DeleteLicenseRecordAllCallable(const DeleteLicenseRecordAllRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLicenseRecordAllOutcome()>>(
        [this, request]()
        {
            return this->DeleteLicenseRecordAll(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteLogExportOutcome CwpClient::DeleteLogExport(const DeleteLogExportRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLogExport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLogExportResponse rsp = DeleteLogExportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLogExportOutcome(rsp);
        else
            return DeleteLogExportOutcome(o.GetError());
    }
    else
    {
        return DeleteLogExportOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteLogExportAsync(const DeleteLogExportRequest& request, const DeleteLogExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLogExport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteLogExportOutcomeCallable CwpClient::DeleteLogExportCallable(const DeleteLogExportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLogExportOutcome()>>(
        [this, request]()
        {
            return this->DeleteLogExport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteLoginWhiteListOutcome CwpClient::DeleteLoginWhiteList(const DeleteLoginWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLoginWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLoginWhiteListResponse rsp = DeleteLoginWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLoginWhiteListOutcome(rsp);
        else
            return DeleteLoginWhiteListOutcome(o.GetError());
    }
    else
    {
        return DeleteLoginWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteLoginWhiteListAsync(const DeleteLoginWhiteListRequest& request, const DeleteLoginWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLoginWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteLoginWhiteListOutcomeCallable CwpClient::DeleteLoginWhiteListCallable(const DeleteLoginWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLoginWhiteListOutcome()>>(
        [this, request]()
        {
            return this->DeleteLoginWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteMachineOutcome CwpClient::DeleteMachine(const DeleteMachineRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMachine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMachineResponse rsp = DeleteMachineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMachineOutcome(rsp);
        else
            return DeleteMachineOutcome(o.GetError());
    }
    else
    {
        return DeleteMachineOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteMachineAsync(const DeleteMachineRequest& request, const DeleteMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMachine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteMachineOutcomeCallable CwpClient::DeleteMachineCallable(const DeleteMachineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMachineOutcome()>>(
        [this, request]()
        {
            return this->DeleteMachine(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteMachineClearHistoryOutcome CwpClient::DeleteMachineClearHistory(const DeleteMachineClearHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMachineClearHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMachineClearHistoryResponse rsp = DeleteMachineClearHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMachineClearHistoryOutcome(rsp);
        else
            return DeleteMachineClearHistoryOutcome(o.GetError());
    }
    else
    {
        return DeleteMachineClearHistoryOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteMachineClearHistoryAsync(const DeleteMachineClearHistoryRequest& request, const DeleteMachineClearHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMachineClearHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteMachineClearHistoryOutcomeCallable CwpClient::DeleteMachineClearHistoryCallable(const DeleteMachineClearHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMachineClearHistoryOutcome()>>(
        [this, request]()
        {
            return this->DeleteMachineClearHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteMachineTagOutcome CwpClient::DeleteMachineTag(const DeleteMachineTagRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMachineTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMachineTagResponse rsp = DeleteMachineTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMachineTagOutcome(rsp);
        else
            return DeleteMachineTagOutcome(o.GetError());
    }
    else
    {
        return DeleteMachineTagOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteMachineTagAsync(const DeleteMachineTagRequest& request, const DeleteMachineTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMachineTag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteMachineTagOutcomeCallable CwpClient::DeleteMachineTagCallable(const DeleteMachineTagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMachineTagOutcome()>>(
        [this, request]()
        {
            return this->DeleteMachineTag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteMaliciousRequestWhiteListOutcome CwpClient::DeleteMaliciousRequestWhiteList(const DeleteMaliciousRequestWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMaliciousRequestWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMaliciousRequestWhiteListResponse rsp = DeleteMaliciousRequestWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMaliciousRequestWhiteListOutcome(rsp);
        else
            return DeleteMaliciousRequestWhiteListOutcome(o.GetError());
    }
    else
    {
        return DeleteMaliciousRequestWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteMaliciousRequestWhiteListAsync(const DeleteMaliciousRequestWhiteListRequest& request, const DeleteMaliciousRequestWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMaliciousRequestWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteMaliciousRequestWhiteListOutcomeCallable CwpClient::DeleteMaliciousRequestWhiteListCallable(const DeleteMaliciousRequestWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMaliciousRequestWhiteListOutcome()>>(
        [this, request]()
        {
            return this->DeleteMaliciousRequestWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteMaliciousRequestsOutcome CwpClient::DeleteMaliciousRequests(const DeleteMaliciousRequestsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMaliciousRequests");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMaliciousRequestsResponse rsp = DeleteMaliciousRequestsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMaliciousRequestsOutcome(rsp);
        else
            return DeleteMaliciousRequestsOutcome(o.GetError());
    }
    else
    {
        return DeleteMaliciousRequestsOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteMaliciousRequestsAsync(const DeleteMaliciousRequestsRequest& request, const DeleteMaliciousRequestsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMaliciousRequests(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteMaliciousRequestsOutcomeCallable CwpClient::DeleteMaliciousRequestsCallable(const DeleteMaliciousRequestsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMaliciousRequestsOutcome()>>(
        [this, request]()
        {
            return this->DeleteMaliciousRequests(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteMalwareScanTaskOutcome CwpClient::DeleteMalwareScanTask(const DeleteMalwareScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMalwareScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMalwareScanTaskResponse rsp = DeleteMalwareScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMalwareScanTaskOutcome(rsp);
        else
            return DeleteMalwareScanTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteMalwareScanTaskOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteMalwareScanTaskAsync(const DeleteMalwareScanTaskRequest& request, const DeleteMalwareScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMalwareScanTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteMalwareScanTaskOutcomeCallable CwpClient::DeleteMalwareScanTaskCallable(const DeleteMalwareScanTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMalwareScanTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteMalwareScanTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteMalwareWhiteListOutcome CwpClient::DeleteMalwareWhiteList(const DeleteMalwareWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMalwareWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMalwareWhiteListResponse rsp = DeleteMalwareWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMalwareWhiteListOutcome(rsp);
        else
            return DeleteMalwareWhiteListOutcome(o.GetError());
    }
    else
    {
        return DeleteMalwareWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteMalwareWhiteListAsync(const DeleteMalwareWhiteListRequest& request, const DeleteMalwareWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMalwareWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteMalwareWhiteListOutcomeCallable CwpClient::DeleteMalwareWhiteListCallable(const DeleteMalwareWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMalwareWhiteListOutcome()>>(
        [this, request]()
        {
            return this->DeleteMalwareWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteMalwaresOutcome CwpClient::DeleteMalwares(const DeleteMalwaresRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMalwares");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMalwaresResponse rsp = DeleteMalwaresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMalwaresOutcome(rsp);
        else
            return DeleteMalwaresOutcome(o.GetError());
    }
    else
    {
        return DeleteMalwaresOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteMalwaresAsync(const DeleteMalwaresRequest& request, const DeleteMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMalwares(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteMalwaresOutcomeCallable CwpClient::DeleteMalwaresCallable(const DeleteMalwaresRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMalwaresOutcome()>>(
        [this, request]()
        {
            return this->DeleteMalwares(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteNetAttackWhiteListOutcome CwpClient::DeleteNetAttackWhiteList(const DeleteNetAttackWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNetAttackWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNetAttackWhiteListResponse rsp = DeleteNetAttackWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNetAttackWhiteListOutcome(rsp);
        else
            return DeleteNetAttackWhiteListOutcome(o.GetError());
    }
    else
    {
        return DeleteNetAttackWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteNetAttackWhiteListAsync(const DeleteNetAttackWhiteListRequest& request, const DeleteNetAttackWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNetAttackWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteNetAttackWhiteListOutcomeCallable CwpClient::DeleteNetAttackWhiteListCallable(const DeleteNetAttackWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNetAttackWhiteListOutcome()>>(
        [this, request]()
        {
            return this->DeleteNetAttackWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteNonlocalLoginPlacesOutcome CwpClient::DeleteNonlocalLoginPlaces(const DeleteNonlocalLoginPlacesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNonlocalLoginPlaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNonlocalLoginPlacesResponse rsp = DeleteNonlocalLoginPlacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNonlocalLoginPlacesOutcome(rsp);
        else
            return DeleteNonlocalLoginPlacesOutcome(o.GetError());
    }
    else
    {
        return DeleteNonlocalLoginPlacesOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteNonlocalLoginPlacesAsync(const DeleteNonlocalLoginPlacesRequest& request, const DeleteNonlocalLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNonlocalLoginPlaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteNonlocalLoginPlacesOutcomeCallable CwpClient::DeleteNonlocalLoginPlacesCallable(const DeleteNonlocalLoginPlacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNonlocalLoginPlacesOutcome()>>(
        [this, request]()
        {
            return this->DeleteNonlocalLoginPlaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeletePrivilegeEventsOutcome CwpClient::DeletePrivilegeEvents(const DeletePrivilegeEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePrivilegeEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePrivilegeEventsResponse rsp = DeletePrivilegeEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePrivilegeEventsOutcome(rsp);
        else
            return DeletePrivilegeEventsOutcome(o.GetError());
    }
    else
    {
        return DeletePrivilegeEventsOutcome(outcome.GetError());
    }
}

void CwpClient::DeletePrivilegeEventsAsync(const DeletePrivilegeEventsRequest& request, const DeletePrivilegeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePrivilegeEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeletePrivilegeEventsOutcomeCallable CwpClient::DeletePrivilegeEventsCallable(const DeletePrivilegeEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePrivilegeEventsOutcome()>>(
        [this, request]()
        {
            return this->DeletePrivilegeEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeletePrivilegeRulesOutcome CwpClient::DeletePrivilegeRules(const DeletePrivilegeRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePrivilegeRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePrivilegeRulesResponse rsp = DeletePrivilegeRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePrivilegeRulesOutcome(rsp);
        else
            return DeletePrivilegeRulesOutcome(o.GetError());
    }
    else
    {
        return DeletePrivilegeRulesOutcome(outcome.GetError());
    }
}

void CwpClient::DeletePrivilegeRulesAsync(const DeletePrivilegeRulesRequest& request, const DeletePrivilegeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePrivilegeRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeletePrivilegeRulesOutcomeCallable CwpClient::DeletePrivilegeRulesCallable(const DeletePrivilegeRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePrivilegeRulesOutcome()>>(
        [this, request]()
        {
            return this->DeletePrivilegeRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteProtectDirOutcome CwpClient::DeleteProtectDir(const DeleteProtectDirRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProtectDir");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProtectDirResponse rsp = DeleteProtectDirResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProtectDirOutcome(rsp);
        else
            return DeleteProtectDirOutcome(o.GetError());
    }
    else
    {
        return DeleteProtectDirOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteProtectDirAsync(const DeleteProtectDirRequest& request, const DeleteProtectDirAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteProtectDir(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteProtectDirOutcomeCallable CwpClient::DeleteProtectDirCallable(const DeleteProtectDirRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteProtectDirOutcome()>>(
        [this, request]()
        {
            return this->DeleteProtectDir(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteRaspRulesOutcome CwpClient::DeleteRaspRules(const DeleteRaspRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRaspRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRaspRulesResponse rsp = DeleteRaspRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRaspRulesOutcome(rsp);
        else
            return DeleteRaspRulesOutcome(o.GetError());
    }
    else
    {
        return DeleteRaspRulesOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteRaspRulesAsync(const DeleteRaspRulesRequest& request, const DeleteRaspRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRaspRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteRaspRulesOutcomeCallable CwpClient::DeleteRaspRulesCallable(const DeleteRaspRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRaspRulesOutcome()>>(
        [this, request]()
        {
            return this->DeleteRaspRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteReverseShellEventsOutcome CwpClient::DeleteReverseShellEvents(const DeleteReverseShellEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteReverseShellEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteReverseShellEventsResponse rsp = DeleteReverseShellEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteReverseShellEventsOutcome(rsp);
        else
            return DeleteReverseShellEventsOutcome(o.GetError());
    }
    else
    {
        return DeleteReverseShellEventsOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteReverseShellEventsAsync(const DeleteReverseShellEventsRequest& request, const DeleteReverseShellEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteReverseShellEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteReverseShellEventsOutcomeCallable CwpClient::DeleteReverseShellEventsCallable(const DeleteReverseShellEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteReverseShellEventsOutcome()>>(
        [this, request]()
        {
            return this->DeleteReverseShellEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteReverseShellRulesOutcome CwpClient::DeleteReverseShellRules(const DeleteReverseShellRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteReverseShellRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteReverseShellRulesResponse rsp = DeleteReverseShellRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteReverseShellRulesOutcome(rsp);
        else
            return DeleteReverseShellRulesOutcome(o.GetError());
    }
    else
    {
        return DeleteReverseShellRulesOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteReverseShellRulesAsync(const DeleteReverseShellRulesRequest& request, const DeleteReverseShellRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteReverseShellRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteReverseShellRulesOutcomeCallable CwpClient::DeleteReverseShellRulesCallable(const DeleteReverseShellRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteReverseShellRulesOutcome()>>(
        [this, request]()
        {
            return this->DeleteReverseShellRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteRiskDnsEventOutcome CwpClient::DeleteRiskDnsEvent(const DeleteRiskDnsEventRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRiskDnsEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRiskDnsEventResponse rsp = DeleteRiskDnsEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRiskDnsEventOutcome(rsp);
        else
            return DeleteRiskDnsEventOutcome(o.GetError());
    }
    else
    {
        return DeleteRiskDnsEventOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteRiskDnsEventAsync(const DeleteRiskDnsEventRequest& request, const DeleteRiskDnsEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRiskDnsEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteRiskDnsEventOutcomeCallable CwpClient::DeleteRiskDnsEventCallable(const DeleteRiskDnsEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRiskDnsEventOutcome()>>(
        [this, request]()
        {
            return this->DeleteRiskDnsEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteRiskDnsPolicyOutcome CwpClient::DeleteRiskDnsPolicy(const DeleteRiskDnsPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRiskDnsPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRiskDnsPolicyResponse rsp = DeleteRiskDnsPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRiskDnsPolicyOutcome(rsp);
        else
            return DeleteRiskDnsPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteRiskDnsPolicyOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteRiskDnsPolicyAsync(const DeleteRiskDnsPolicyRequest& request, const DeleteRiskDnsPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRiskDnsPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteRiskDnsPolicyOutcomeCallable CwpClient::DeleteRiskDnsPolicyCallable(const DeleteRiskDnsPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRiskDnsPolicyOutcome()>>(
        [this, request]()
        {
            return this->DeleteRiskDnsPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteScanTaskOutcome CwpClient::DeleteScanTask(const DeleteScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteScanTaskResponse rsp = DeleteScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteScanTaskOutcome(rsp);
        else
            return DeleteScanTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteScanTaskOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteScanTaskAsync(const DeleteScanTaskRequest& request, const DeleteScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteScanTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteScanTaskOutcomeCallable CwpClient::DeleteScanTaskCallable(const DeleteScanTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteScanTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteScanTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteSearchTemplateOutcome CwpClient::DeleteSearchTemplate(const DeleteSearchTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSearchTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSearchTemplateResponse rsp = DeleteSearchTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSearchTemplateOutcome(rsp);
        else
            return DeleteSearchTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteSearchTemplateOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteSearchTemplateAsync(const DeleteSearchTemplateRequest& request, const DeleteSearchTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSearchTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteSearchTemplateOutcomeCallable CwpClient::DeleteSearchTemplateCallable(const DeleteSearchTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSearchTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteSearchTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteTagsOutcome CwpClient::DeleteTags(const DeleteTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTagsResponse rsp = DeleteTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTagsOutcome(rsp);
        else
            return DeleteTagsOutcome(o.GetError());
    }
    else
    {
        return DeleteTagsOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteTagsAsync(const DeleteTagsRequest& request, const DeleteTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteTagsOutcomeCallable CwpClient::DeleteTagsCallable(const DeleteTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTagsOutcome()>>(
        [this, request]()
        {
            return this->DeleteTags(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteWebHookPolicyOutcome CwpClient::DeleteWebHookPolicy(const DeleteWebHookPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWebHookPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWebHookPolicyResponse rsp = DeleteWebHookPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWebHookPolicyOutcome(rsp);
        else
            return DeleteWebHookPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteWebHookPolicyOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteWebHookPolicyAsync(const DeleteWebHookPolicyRequest& request, const DeleteWebHookPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWebHookPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteWebHookPolicyOutcomeCallable CwpClient::DeleteWebHookPolicyCallable(const DeleteWebHookPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteWebHookPolicyOutcome()>>(
        [this, request]()
        {
            return this->DeleteWebHookPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteWebHookReceiverOutcome CwpClient::DeleteWebHookReceiver(const DeleteWebHookReceiverRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWebHookReceiver");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWebHookReceiverResponse rsp = DeleteWebHookReceiverResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWebHookReceiverOutcome(rsp);
        else
            return DeleteWebHookReceiverOutcome(o.GetError());
    }
    else
    {
        return DeleteWebHookReceiverOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteWebHookReceiverAsync(const DeleteWebHookReceiverRequest& request, const DeleteWebHookReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWebHookReceiver(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteWebHookReceiverOutcomeCallable CwpClient::DeleteWebHookReceiverCallable(const DeleteWebHookReceiverRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteWebHookReceiverOutcome()>>(
        [this, request]()
        {
            return this->DeleteWebHookReceiver(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteWebHookRuleOutcome CwpClient::DeleteWebHookRule(const DeleteWebHookRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWebHookRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWebHookRuleResponse rsp = DeleteWebHookRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWebHookRuleOutcome(rsp);
        else
            return DeleteWebHookRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteWebHookRuleOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteWebHookRuleAsync(const DeleteWebHookRuleRequest& request, const DeleteWebHookRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWebHookRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteWebHookRuleOutcomeCallable CwpClient::DeleteWebHookRuleCallable(const DeleteWebHookRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteWebHookRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteWebHookRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DeleteWebPageEventLogOutcome CwpClient::DeleteWebPageEventLog(const DeleteWebPageEventLogRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWebPageEventLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWebPageEventLogResponse rsp = DeleteWebPageEventLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWebPageEventLogOutcome(rsp);
        else
            return DeleteWebPageEventLogOutcome(o.GetError());
    }
    else
    {
        return DeleteWebPageEventLogOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteWebPageEventLogAsync(const DeleteWebPageEventLogRequest& request, const DeleteWebPageEventLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWebPageEventLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteWebPageEventLogOutcomeCallable CwpClient::DeleteWebPageEventLogCallable(const DeleteWebPageEventLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteWebPageEventLogOutcome()>>(
        [this, request]()
        {
            return this->DeleteWebPageEventLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeABTestConfigOutcome CwpClient::DescribeABTestConfig(const DescribeABTestConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeABTestConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeABTestConfigResponse rsp = DescribeABTestConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeABTestConfigOutcome(rsp);
        else
            return DescribeABTestConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeABTestConfigOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeABTestConfigAsync(const DescribeABTestConfigRequest& request, const DescribeABTestConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeABTestConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeABTestConfigOutcomeCallable CwpClient::DescribeABTestConfigCallable(const DescribeABTestConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeABTestConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeABTestConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAESKeyOutcome CwpClient::DescribeAESKey(const DescribeAESKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAESKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAESKeyResponse rsp = DescribeAESKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAESKeyOutcome(rsp);
        else
            return DescribeAESKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeAESKeyOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAESKeyAsync(const DescribeAESKeyRequest& request, const DescribeAESKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAESKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAESKeyOutcomeCallable CwpClient::DescribeAESKeyCallable(const DescribeAESKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAESKeyOutcome()>>(
        [this, request]()
        {
            return this->DescribeAESKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAccountStatisticsOutcome CwpClient::DescribeAccountStatistics(const DescribeAccountStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccountStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountStatisticsResponse rsp = DescribeAccountStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountStatisticsOutcome(rsp);
        else
            return DescribeAccountStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountStatisticsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAccountStatisticsAsync(const DescribeAccountStatisticsRequest& request, const DescribeAccountStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccountStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAccountStatisticsOutcomeCallable CwpClient::DescribeAccountStatisticsCallable(const DescribeAccountStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccountStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccountStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAgentInstallCommandOutcome CwpClient::DescribeAgentInstallCommand(const DescribeAgentInstallCommandRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentInstallCommand");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentInstallCommandResponse rsp = DescribeAgentInstallCommandResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentInstallCommandOutcome(rsp);
        else
            return DescribeAgentInstallCommandOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentInstallCommandOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAgentInstallCommandAsync(const DescribeAgentInstallCommandRequest& request, const DescribeAgentInstallCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAgentInstallCommand(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAgentInstallCommandOutcomeCallable CwpClient::DescribeAgentInstallCommandCallable(const DescribeAgentInstallCommandRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAgentInstallCommandOutcome()>>(
        [this, request]()
        {
            return this->DescribeAgentInstallCommand(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAgentInstallationTokenOutcome CwpClient::DescribeAgentInstallationToken(const DescribeAgentInstallationTokenRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentInstallationToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentInstallationTokenResponse rsp = DescribeAgentInstallationTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentInstallationTokenOutcome(rsp);
        else
            return DescribeAgentInstallationTokenOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentInstallationTokenOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAgentInstallationTokenAsync(const DescribeAgentInstallationTokenRequest& request, const DescribeAgentInstallationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAgentInstallationToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAgentInstallationTokenOutcomeCallable CwpClient::DescribeAgentInstallationTokenCallable(const DescribeAgentInstallationTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAgentInstallationTokenOutcome()>>(
        [this, request]()
        {
            return this->DescribeAgentInstallationToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAlarmIncidentNodesOutcome CwpClient::DescribeAlarmIncidentNodes(const DescribeAlarmIncidentNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmIncidentNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmIncidentNodesResponse rsp = DescribeAlarmIncidentNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmIncidentNodesOutcome(rsp);
        else
            return DescribeAlarmIncidentNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmIncidentNodesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAlarmIncidentNodesAsync(const DescribeAlarmIncidentNodesRequest& request, const DescribeAlarmIncidentNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlarmIncidentNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAlarmIncidentNodesOutcomeCallable CwpClient::DescribeAlarmIncidentNodesCallable(const DescribeAlarmIncidentNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlarmIncidentNodesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlarmIncidentNodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAlarmVertexIdOutcome CwpClient::DescribeAlarmVertexId(const DescribeAlarmVertexIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmVertexId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmVertexIdResponse rsp = DescribeAlarmVertexIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmVertexIdOutcome(rsp);
        else
            return DescribeAlarmVertexIdOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmVertexIdOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAlarmVertexIdAsync(const DescribeAlarmVertexIdRequest& request, const DescribeAlarmVertexIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlarmVertexId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAlarmVertexIdOutcomeCallable CwpClient::DescribeAlarmVertexIdCallable(const DescribeAlarmVertexIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlarmVertexIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlarmVertexId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetAppCountOutcome CwpClient::DescribeAssetAppCount(const DescribeAssetAppCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetAppCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetAppCountResponse rsp = DescribeAssetAppCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetAppCountOutcome(rsp);
        else
            return DescribeAssetAppCountOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetAppCountOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetAppCountAsync(const DescribeAssetAppCountRequest& request, const DescribeAssetAppCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetAppCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetAppCountOutcomeCallable CwpClient::DescribeAssetAppCountCallable(const DescribeAssetAppCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetAppCountOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetAppCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetAppListOutcome CwpClient::DescribeAssetAppList(const DescribeAssetAppListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetAppList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetAppListResponse rsp = DescribeAssetAppListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetAppListOutcome(rsp);
        else
            return DescribeAssetAppListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetAppListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetAppListAsync(const DescribeAssetAppListRequest& request, const DescribeAssetAppListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetAppList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetAppListOutcomeCallable CwpClient::DescribeAssetAppListCallable(const DescribeAssetAppListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetAppListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetAppList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetAppProcessListOutcome CwpClient::DescribeAssetAppProcessList(const DescribeAssetAppProcessListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetAppProcessList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetAppProcessListResponse rsp = DescribeAssetAppProcessListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetAppProcessListOutcome(rsp);
        else
            return DescribeAssetAppProcessListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetAppProcessListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetAppProcessListAsync(const DescribeAssetAppProcessListRequest& request, const DescribeAssetAppProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetAppProcessList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetAppProcessListOutcomeCallable CwpClient::DescribeAssetAppProcessListCallable(const DescribeAssetAppProcessListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetAppProcessListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetAppProcessList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetCoreModuleInfoOutcome CwpClient::DescribeAssetCoreModuleInfo(const DescribeAssetCoreModuleInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetCoreModuleInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetCoreModuleInfoResponse rsp = DescribeAssetCoreModuleInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetCoreModuleInfoOutcome(rsp);
        else
            return DescribeAssetCoreModuleInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetCoreModuleInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetCoreModuleInfoAsync(const DescribeAssetCoreModuleInfoRequest& request, const DescribeAssetCoreModuleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetCoreModuleInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetCoreModuleInfoOutcomeCallable CwpClient::DescribeAssetCoreModuleInfoCallable(const DescribeAssetCoreModuleInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetCoreModuleInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetCoreModuleInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetCoreModuleListOutcome CwpClient::DescribeAssetCoreModuleList(const DescribeAssetCoreModuleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetCoreModuleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetCoreModuleListResponse rsp = DescribeAssetCoreModuleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetCoreModuleListOutcome(rsp);
        else
            return DescribeAssetCoreModuleListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetCoreModuleListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetCoreModuleListAsync(const DescribeAssetCoreModuleListRequest& request, const DescribeAssetCoreModuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetCoreModuleList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetCoreModuleListOutcomeCallable CwpClient::DescribeAssetCoreModuleListCallable(const DescribeAssetCoreModuleListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetCoreModuleListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetCoreModuleList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetDatabaseCountOutcome CwpClient::DescribeAssetDatabaseCount(const DescribeAssetDatabaseCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetDatabaseCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetDatabaseCountResponse rsp = DescribeAssetDatabaseCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetDatabaseCountOutcome(rsp);
        else
            return DescribeAssetDatabaseCountOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetDatabaseCountOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetDatabaseCountAsync(const DescribeAssetDatabaseCountRequest& request, const DescribeAssetDatabaseCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetDatabaseCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetDatabaseCountOutcomeCallable CwpClient::DescribeAssetDatabaseCountCallable(const DescribeAssetDatabaseCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetDatabaseCountOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetDatabaseCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetDatabaseInfoOutcome CwpClient::DescribeAssetDatabaseInfo(const DescribeAssetDatabaseInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetDatabaseInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetDatabaseInfoResponse rsp = DescribeAssetDatabaseInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetDatabaseInfoOutcome(rsp);
        else
            return DescribeAssetDatabaseInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetDatabaseInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetDatabaseInfoAsync(const DescribeAssetDatabaseInfoRequest& request, const DescribeAssetDatabaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetDatabaseInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetDatabaseInfoOutcomeCallable CwpClient::DescribeAssetDatabaseInfoCallable(const DescribeAssetDatabaseInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetDatabaseInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetDatabaseInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetDatabaseListOutcome CwpClient::DescribeAssetDatabaseList(const DescribeAssetDatabaseListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetDatabaseList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetDatabaseListResponse rsp = DescribeAssetDatabaseListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetDatabaseListOutcome(rsp);
        else
            return DescribeAssetDatabaseListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetDatabaseListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetDatabaseListAsync(const DescribeAssetDatabaseListRequest& request, const DescribeAssetDatabaseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetDatabaseList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetDatabaseListOutcomeCallable CwpClient::DescribeAssetDatabaseListCallable(const DescribeAssetDatabaseListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetDatabaseListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetDatabaseList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetDiskListOutcome CwpClient::DescribeAssetDiskList(const DescribeAssetDiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetDiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetDiskListResponse rsp = DescribeAssetDiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetDiskListOutcome(rsp);
        else
            return DescribeAssetDiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetDiskListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetDiskListAsync(const DescribeAssetDiskListRequest& request, const DescribeAssetDiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetDiskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetDiskListOutcomeCallable CwpClient::DescribeAssetDiskListCallable(const DescribeAssetDiskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetDiskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetDiskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetEnvListOutcome CwpClient::DescribeAssetEnvList(const DescribeAssetEnvListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetEnvList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetEnvListResponse rsp = DescribeAssetEnvListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetEnvListOutcome(rsp);
        else
            return DescribeAssetEnvListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetEnvListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetEnvListAsync(const DescribeAssetEnvListRequest& request, const DescribeAssetEnvListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetEnvList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetEnvListOutcomeCallable CwpClient::DescribeAssetEnvListCallable(const DescribeAssetEnvListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetEnvListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetEnvList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetHostTotalCountOutcome CwpClient::DescribeAssetHostTotalCount(const DescribeAssetHostTotalCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetHostTotalCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetHostTotalCountResponse rsp = DescribeAssetHostTotalCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetHostTotalCountOutcome(rsp);
        else
            return DescribeAssetHostTotalCountOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetHostTotalCountOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetHostTotalCountAsync(const DescribeAssetHostTotalCountRequest& request, const DescribeAssetHostTotalCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetHostTotalCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetHostTotalCountOutcomeCallable CwpClient::DescribeAssetHostTotalCountCallable(const DescribeAssetHostTotalCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetHostTotalCountOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetHostTotalCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetInfoOutcome CwpClient::DescribeAssetInfo(const DescribeAssetInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetInfoResponse rsp = DescribeAssetInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetInfoOutcome(rsp);
        else
            return DescribeAssetInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetInfoAsync(const DescribeAssetInfoRequest& request, const DescribeAssetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetInfoOutcomeCallable CwpClient::DescribeAssetInfoCallable(const DescribeAssetInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetInitServiceListOutcome CwpClient::DescribeAssetInitServiceList(const DescribeAssetInitServiceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetInitServiceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetInitServiceListResponse rsp = DescribeAssetInitServiceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetInitServiceListOutcome(rsp);
        else
            return DescribeAssetInitServiceListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetInitServiceListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetInitServiceListAsync(const DescribeAssetInitServiceListRequest& request, const DescribeAssetInitServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetInitServiceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetInitServiceListOutcomeCallable CwpClient::DescribeAssetInitServiceListCallable(const DescribeAssetInitServiceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetInitServiceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetInitServiceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetJarInfoOutcome CwpClient::DescribeAssetJarInfo(const DescribeAssetJarInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetJarInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetJarInfoResponse rsp = DescribeAssetJarInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetJarInfoOutcome(rsp);
        else
            return DescribeAssetJarInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetJarInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetJarInfoAsync(const DescribeAssetJarInfoRequest& request, const DescribeAssetJarInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetJarInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetJarInfoOutcomeCallable CwpClient::DescribeAssetJarInfoCallable(const DescribeAssetJarInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetJarInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetJarInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetJarListOutcome CwpClient::DescribeAssetJarList(const DescribeAssetJarListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetJarList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetJarListResponse rsp = DescribeAssetJarListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetJarListOutcome(rsp);
        else
            return DescribeAssetJarListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetJarListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetJarListAsync(const DescribeAssetJarListRequest& request, const DescribeAssetJarListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetJarList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetJarListOutcomeCallable CwpClient::DescribeAssetJarListCallable(const DescribeAssetJarListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetJarListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetJarList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetLoadInfoOutcome CwpClient::DescribeAssetLoadInfo(const DescribeAssetLoadInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetLoadInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetLoadInfoResponse rsp = DescribeAssetLoadInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetLoadInfoOutcome(rsp);
        else
            return DescribeAssetLoadInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetLoadInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetLoadInfoAsync(const DescribeAssetLoadInfoRequest& request, const DescribeAssetLoadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetLoadInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetLoadInfoOutcomeCallable CwpClient::DescribeAssetLoadInfoCallable(const DescribeAssetLoadInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetLoadInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetLoadInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetMachineDetailOutcome CwpClient::DescribeAssetMachineDetail(const DescribeAssetMachineDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetMachineDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetMachineDetailResponse rsp = DescribeAssetMachineDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetMachineDetailOutcome(rsp);
        else
            return DescribeAssetMachineDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetMachineDetailOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetMachineDetailAsync(const DescribeAssetMachineDetailRequest& request, const DescribeAssetMachineDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetMachineDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetMachineDetailOutcomeCallable CwpClient::DescribeAssetMachineDetailCallable(const DescribeAssetMachineDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetMachineDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetMachineDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetMachineListOutcome CwpClient::DescribeAssetMachineList(const DescribeAssetMachineListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetMachineList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetMachineListResponse rsp = DescribeAssetMachineListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetMachineListOutcome(rsp);
        else
            return DescribeAssetMachineListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetMachineListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetMachineListAsync(const DescribeAssetMachineListRequest& request, const DescribeAssetMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetMachineList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetMachineListOutcomeCallable CwpClient::DescribeAssetMachineListCallable(const DescribeAssetMachineListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetMachineListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetMachineList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetMachineTagTopOutcome CwpClient::DescribeAssetMachineTagTop(const DescribeAssetMachineTagTopRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetMachineTagTop");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetMachineTagTopResponse rsp = DescribeAssetMachineTagTopResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetMachineTagTopOutcome(rsp);
        else
            return DescribeAssetMachineTagTopOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetMachineTagTopOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetMachineTagTopAsync(const DescribeAssetMachineTagTopRequest& request, const DescribeAssetMachineTagTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetMachineTagTop(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetMachineTagTopOutcomeCallable CwpClient::DescribeAssetMachineTagTopCallable(const DescribeAssetMachineTagTopRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetMachineTagTopOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetMachineTagTop(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetPlanTaskListOutcome CwpClient::DescribeAssetPlanTaskList(const DescribeAssetPlanTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetPlanTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetPlanTaskListResponse rsp = DescribeAssetPlanTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetPlanTaskListOutcome(rsp);
        else
            return DescribeAssetPlanTaskListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetPlanTaskListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetPlanTaskListAsync(const DescribeAssetPlanTaskListRequest& request, const DescribeAssetPlanTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetPlanTaskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetPlanTaskListOutcomeCallable CwpClient::DescribeAssetPlanTaskListCallable(const DescribeAssetPlanTaskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetPlanTaskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetPlanTaskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetPortCountOutcome CwpClient::DescribeAssetPortCount(const DescribeAssetPortCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetPortCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetPortCountResponse rsp = DescribeAssetPortCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetPortCountOutcome(rsp);
        else
            return DescribeAssetPortCountOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetPortCountOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetPortCountAsync(const DescribeAssetPortCountRequest& request, const DescribeAssetPortCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetPortCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetPortCountOutcomeCallable CwpClient::DescribeAssetPortCountCallable(const DescribeAssetPortCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetPortCountOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetPortCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetPortInfoListOutcome CwpClient::DescribeAssetPortInfoList(const DescribeAssetPortInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetPortInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetPortInfoListResponse rsp = DescribeAssetPortInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetPortInfoListOutcome(rsp);
        else
            return DescribeAssetPortInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetPortInfoListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetPortInfoListAsync(const DescribeAssetPortInfoListRequest& request, const DescribeAssetPortInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetPortInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetPortInfoListOutcomeCallable CwpClient::DescribeAssetPortInfoListCallable(const DescribeAssetPortInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetPortInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetPortInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetProcessCountOutcome CwpClient::DescribeAssetProcessCount(const DescribeAssetProcessCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetProcessCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetProcessCountResponse rsp = DescribeAssetProcessCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetProcessCountOutcome(rsp);
        else
            return DescribeAssetProcessCountOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetProcessCountOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetProcessCountAsync(const DescribeAssetProcessCountRequest& request, const DescribeAssetProcessCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetProcessCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetProcessCountOutcomeCallable CwpClient::DescribeAssetProcessCountCallable(const DescribeAssetProcessCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetProcessCountOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetProcessCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetProcessInfoListOutcome CwpClient::DescribeAssetProcessInfoList(const DescribeAssetProcessInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetProcessInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetProcessInfoListResponse rsp = DescribeAssetProcessInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetProcessInfoListOutcome(rsp);
        else
            return DescribeAssetProcessInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetProcessInfoListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetProcessInfoListAsync(const DescribeAssetProcessInfoListRequest& request, const DescribeAssetProcessInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetProcessInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetProcessInfoListOutcomeCallable CwpClient::DescribeAssetProcessInfoListCallable(const DescribeAssetProcessInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetProcessInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetProcessInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetRecentMachineInfoOutcome CwpClient::DescribeAssetRecentMachineInfo(const DescribeAssetRecentMachineInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetRecentMachineInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetRecentMachineInfoResponse rsp = DescribeAssetRecentMachineInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetRecentMachineInfoOutcome(rsp);
        else
            return DescribeAssetRecentMachineInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetRecentMachineInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetRecentMachineInfoAsync(const DescribeAssetRecentMachineInfoRequest& request, const DescribeAssetRecentMachineInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetRecentMachineInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetRecentMachineInfoOutcomeCallable CwpClient::DescribeAssetRecentMachineInfoCallable(const DescribeAssetRecentMachineInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetRecentMachineInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetRecentMachineInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetSystemPackageListOutcome CwpClient::DescribeAssetSystemPackageList(const DescribeAssetSystemPackageListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetSystemPackageList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetSystemPackageListResponse rsp = DescribeAssetSystemPackageListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetSystemPackageListOutcome(rsp);
        else
            return DescribeAssetSystemPackageListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetSystemPackageListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetSystemPackageListAsync(const DescribeAssetSystemPackageListRequest& request, const DescribeAssetSystemPackageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetSystemPackageList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetSystemPackageListOutcomeCallable CwpClient::DescribeAssetSystemPackageListCallable(const DescribeAssetSystemPackageListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetSystemPackageListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetSystemPackageList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetTotalCountOutcome CwpClient::DescribeAssetTotalCount(const DescribeAssetTotalCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetTotalCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetTotalCountResponse rsp = DescribeAssetTotalCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetTotalCountOutcome(rsp);
        else
            return DescribeAssetTotalCountOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetTotalCountOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetTotalCountAsync(const DescribeAssetTotalCountRequest& request, const DescribeAssetTotalCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetTotalCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetTotalCountOutcomeCallable CwpClient::DescribeAssetTotalCountCallable(const DescribeAssetTotalCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetTotalCountOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetTotalCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetTypeTopOutcome CwpClient::DescribeAssetTypeTop(const DescribeAssetTypeTopRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetTypeTop");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetTypeTopResponse rsp = DescribeAssetTypeTopResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetTypeTopOutcome(rsp);
        else
            return DescribeAssetTypeTopOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetTypeTopOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetTypeTopAsync(const DescribeAssetTypeTopRequest& request, const DescribeAssetTypeTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetTypeTop(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetTypeTopOutcomeCallable CwpClient::DescribeAssetTypeTopCallable(const DescribeAssetTypeTopRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetTypeTopOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetTypeTop(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetTypesOutcome CwpClient::DescribeAssetTypes(const DescribeAssetTypesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetTypesResponse rsp = DescribeAssetTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetTypesOutcome(rsp);
        else
            return DescribeAssetTypesOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetTypesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetTypesAsync(const DescribeAssetTypesRequest& request, const DescribeAssetTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetTypes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetTypesOutcomeCallable CwpClient::DescribeAssetTypesCallable(const DescribeAssetTypesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetTypesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetTypes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetUserCountOutcome CwpClient::DescribeAssetUserCount(const DescribeAssetUserCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetUserCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetUserCountResponse rsp = DescribeAssetUserCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetUserCountOutcome(rsp);
        else
            return DescribeAssetUserCountOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetUserCountOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetUserCountAsync(const DescribeAssetUserCountRequest& request, const DescribeAssetUserCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetUserCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetUserCountOutcomeCallable CwpClient::DescribeAssetUserCountCallable(const DescribeAssetUserCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetUserCountOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetUserCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetUserInfoOutcome CwpClient::DescribeAssetUserInfo(const DescribeAssetUserInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetUserInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetUserInfoResponse rsp = DescribeAssetUserInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetUserInfoOutcome(rsp);
        else
            return DescribeAssetUserInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetUserInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetUserInfoAsync(const DescribeAssetUserInfoRequest& request, const DescribeAssetUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetUserInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetUserInfoOutcomeCallable CwpClient::DescribeAssetUserInfoCallable(const DescribeAssetUserInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetUserInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetUserInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetUserKeyListOutcome CwpClient::DescribeAssetUserKeyList(const DescribeAssetUserKeyListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetUserKeyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetUserKeyListResponse rsp = DescribeAssetUserKeyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetUserKeyListOutcome(rsp);
        else
            return DescribeAssetUserKeyListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetUserKeyListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetUserKeyListAsync(const DescribeAssetUserKeyListRequest& request, const DescribeAssetUserKeyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetUserKeyList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetUserKeyListOutcomeCallable CwpClient::DescribeAssetUserKeyListCallable(const DescribeAssetUserKeyListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetUserKeyListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetUserKeyList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetUserListOutcome CwpClient::DescribeAssetUserList(const DescribeAssetUserListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetUserList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetUserListResponse rsp = DescribeAssetUserListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetUserListOutcome(rsp);
        else
            return DescribeAssetUserListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetUserListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetUserListAsync(const DescribeAssetUserListRequest& request, const DescribeAssetUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetUserList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetUserListOutcomeCallable CwpClient::DescribeAssetUserListCallable(const DescribeAssetUserListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetUserListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetUserList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetWebAppCountOutcome CwpClient::DescribeAssetWebAppCount(const DescribeAssetWebAppCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetWebAppCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetWebAppCountResponse rsp = DescribeAssetWebAppCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetWebAppCountOutcome(rsp);
        else
            return DescribeAssetWebAppCountOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetWebAppCountOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetWebAppCountAsync(const DescribeAssetWebAppCountRequest& request, const DescribeAssetWebAppCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetWebAppCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetWebAppCountOutcomeCallable CwpClient::DescribeAssetWebAppCountCallable(const DescribeAssetWebAppCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetWebAppCountOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetWebAppCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetWebAppListOutcome CwpClient::DescribeAssetWebAppList(const DescribeAssetWebAppListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetWebAppList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetWebAppListResponse rsp = DescribeAssetWebAppListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetWebAppListOutcome(rsp);
        else
            return DescribeAssetWebAppListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetWebAppListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetWebAppListAsync(const DescribeAssetWebAppListRequest& request, const DescribeAssetWebAppListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetWebAppList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetWebAppListOutcomeCallable CwpClient::DescribeAssetWebAppListCallable(const DescribeAssetWebAppListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetWebAppListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetWebAppList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetWebAppPluginListOutcome CwpClient::DescribeAssetWebAppPluginList(const DescribeAssetWebAppPluginListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetWebAppPluginList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetWebAppPluginListResponse rsp = DescribeAssetWebAppPluginListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetWebAppPluginListOutcome(rsp);
        else
            return DescribeAssetWebAppPluginListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetWebAppPluginListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetWebAppPluginListAsync(const DescribeAssetWebAppPluginListRequest& request, const DescribeAssetWebAppPluginListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetWebAppPluginList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetWebAppPluginListOutcomeCallable CwpClient::DescribeAssetWebAppPluginListCallable(const DescribeAssetWebAppPluginListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetWebAppPluginListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetWebAppPluginList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetWebFrameCountOutcome CwpClient::DescribeAssetWebFrameCount(const DescribeAssetWebFrameCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetWebFrameCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetWebFrameCountResponse rsp = DescribeAssetWebFrameCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetWebFrameCountOutcome(rsp);
        else
            return DescribeAssetWebFrameCountOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetWebFrameCountOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetWebFrameCountAsync(const DescribeAssetWebFrameCountRequest& request, const DescribeAssetWebFrameCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetWebFrameCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetWebFrameCountOutcomeCallable CwpClient::DescribeAssetWebFrameCountCallable(const DescribeAssetWebFrameCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetWebFrameCountOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetWebFrameCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetWebFrameListOutcome CwpClient::DescribeAssetWebFrameList(const DescribeAssetWebFrameListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetWebFrameList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetWebFrameListResponse rsp = DescribeAssetWebFrameListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetWebFrameListOutcome(rsp);
        else
            return DescribeAssetWebFrameListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetWebFrameListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetWebFrameListAsync(const DescribeAssetWebFrameListRequest& request, const DescribeAssetWebFrameListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetWebFrameList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetWebFrameListOutcomeCallable CwpClient::DescribeAssetWebFrameListCallable(const DescribeAssetWebFrameListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetWebFrameListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetWebFrameList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetWebLocationCountOutcome CwpClient::DescribeAssetWebLocationCount(const DescribeAssetWebLocationCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetWebLocationCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetWebLocationCountResponse rsp = DescribeAssetWebLocationCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetWebLocationCountOutcome(rsp);
        else
            return DescribeAssetWebLocationCountOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetWebLocationCountOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetWebLocationCountAsync(const DescribeAssetWebLocationCountRequest& request, const DescribeAssetWebLocationCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetWebLocationCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetWebLocationCountOutcomeCallable CwpClient::DescribeAssetWebLocationCountCallable(const DescribeAssetWebLocationCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetWebLocationCountOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetWebLocationCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetWebLocationInfoOutcome CwpClient::DescribeAssetWebLocationInfo(const DescribeAssetWebLocationInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetWebLocationInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetWebLocationInfoResponse rsp = DescribeAssetWebLocationInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetWebLocationInfoOutcome(rsp);
        else
            return DescribeAssetWebLocationInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetWebLocationInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetWebLocationInfoAsync(const DescribeAssetWebLocationInfoRequest& request, const DescribeAssetWebLocationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetWebLocationInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetWebLocationInfoOutcomeCallable CwpClient::DescribeAssetWebLocationInfoCallable(const DescribeAssetWebLocationInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetWebLocationInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetWebLocationInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetWebLocationListOutcome CwpClient::DescribeAssetWebLocationList(const DescribeAssetWebLocationListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetWebLocationList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetWebLocationListResponse rsp = DescribeAssetWebLocationListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetWebLocationListOutcome(rsp);
        else
            return DescribeAssetWebLocationListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetWebLocationListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetWebLocationListAsync(const DescribeAssetWebLocationListRequest& request, const DescribeAssetWebLocationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetWebLocationList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetWebLocationListOutcomeCallable CwpClient::DescribeAssetWebLocationListCallable(const DescribeAssetWebLocationListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetWebLocationListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetWebLocationList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetWebLocationPathListOutcome CwpClient::DescribeAssetWebLocationPathList(const DescribeAssetWebLocationPathListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetWebLocationPathList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetWebLocationPathListResponse rsp = DescribeAssetWebLocationPathListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetWebLocationPathListOutcome(rsp);
        else
            return DescribeAssetWebLocationPathListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetWebLocationPathListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetWebLocationPathListAsync(const DescribeAssetWebLocationPathListRequest& request, const DescribeAssetWebLocationPathListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetWebLocationPathList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetWebLocationPathListOutcomeCallable CwpClient::DescribeAssetWebLocationPathListCallable(const DescribeAssetWebLocationPathListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetWebLocationPathListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetWebLocationPathList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetWebServiceCountOutcome CwpClient::DescribeAssetWebServiceCount(const DescribeAssetWebServiceCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetWebServiceCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetWebServiceCountResponse rsp = DescribeAssetWebServiceCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetWebServiceCountOutcome(rsp);
        else
            return DescribeAssetWebServiceCountOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetWebServiceCountOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetWebServiceCountAsync(const DescribeAssetWebServiceCountRequest& request, const DescribeAssetWebServiceCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetWebServiceCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetWebServiceCountOutcomeCallable CwpClient::DescribeAssetWebServiceCountCallable(const DescribeAssetWebServiceCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetWebServiceCountOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetWebServiceCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetWebServiceInfoListOutcome CwpClient::DescribeAssetWebServiceInfoList(const DescribeAssetWebServiceInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetWebServiceInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetWebServiceInfoListResponse rsp = DescribeAssetWebServiceInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetWebServiceInfoListOutcome(rsp);
        else
            return DescribeAssetWebServiceInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetWebServiceInfoListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetWebServiceInfoListAsync(const DescribeAssetWebServiceInfoListRequest& request, const DescribeAssetWebServiceInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetWebServiceInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetWebServiceInfoListOutcomeCallable CwpClient::DescribeAssetWebServiceInfoListCallable(const DescribeAssetWebServiceInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetWebServiceInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetWebServiceInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAssetWebServiceProcessListOutcome CwpClient::DescribeAssetWebServiceProcessList(const DescribeAssetWebServiceProcessListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetWebServiceProcessList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetWebServiceProcessListResponse rsp = DescribeAssetWebServiceProcessListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetWebServiceProcessListOutcome(rsp);
        else
            return DescribeAssetWebServiceProcessListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetWebServiceProcessListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetWebServiceProcessListAsync(const DescribeAssetWebServiceProcessListRequest& request, const DescribeAssetWebServiceProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetWebServiceProcessList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAssetWebServiceProcessListOutcomeCallable CwpClient::DescribeAssetWebServiceProcessListCallable(const DescribeAssetWebServiceProcessListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetWebServiceProcessListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetWebServiceProcessList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAttackEventInfoOutcome CwpClient::DescribeAttackEventInfo(const DescribeAttackEventInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAttackEventInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAttackEventInfoResponse rsp = DescribeAttackEventInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAttackEventInfoOutcome(rsp);
        else
            return DescribeAttackEventInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeAttackEventInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAttackEventInfoAsync(const DescribeAttackEventInfoRequest& request, const DescribeAttackEventInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAttackEventInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAttackEventInfoOutcomeCallable CwpClient::DescribeAttackEventInfoCallable(const DescribeAttackEventInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAttackEventInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeAttackEventInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAttackEventsOutcome CwpClient::DescribeAttackEvents(const DescribeAttackEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAttackEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAttackEventsResponse rsp = DescribeAttackEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAttackEventsOutcome(rsp);
        else
            return DescribeAttackEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeAttackEventsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAttackEventsAsync(const DescribeAttackEventsRequest& request, const DescribeAttackEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAttackEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAttackEventsOutcomeCallable CwpClient::DescribeAttackEventsCallable(const DescribeAttackEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAttackEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAttackEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAttackStatisticsOutcome CwpClient::DescribeAttackStatistics(const DescribeAttackStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAttackStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAttackStatisticsResponse rsp = DescribeAttackStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAttackStatisticsOutcome(rsp);
        else
            return DescribeAttackStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeAttackStatisticsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAttackStatisticsAsync(const DescribeAttackStatisticsRequest& request, const DescribeAttackStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAttackStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAttackStatisticsOutcomeCallable CwpClient::DescribeAttackStatisticsCallable(const DescribeAttackStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAttackStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAttackStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAttackTopOutcome CwpClient::DescribeAttackTop(const DescribeAttackTopRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAttackTop");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAttackTopResponse rsp = DescribeAttackTopResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAttackTopOutcome(rsp);
        else
            return DescribeAttackTopOutcome(o.GetError());
    }
    else
    {
        return DescribeAttackTopOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAttackTopAsync(const DescribeAttackTopRequest& request, const DescribeAttackTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAttackTop(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAttackTopOutcomeCallable CwpClient::DescribeAttackTopCallable(const DescribeAttackTopRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAttackTopOutcome()>>(
        [this, request]()
        {
            return this->DescribeAttackTop(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAttackTrendsOutcome CwpClient::DescribeAttackTrends(const DescribeAttackTrendsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAttackTrends");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAttackTrendsResponse rsp = DescribeAttackTrendsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAttackTrendsOutcome(rsp);
        else
            return DescribeAttackTrendsOutcome(o.GetError());
    }
    else
    {
        return DescribeAttackTrendsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAttackTrendsAsync(const DescribeAttackTrendsRequest& request, const DescribeAttackTrendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAttackTrends(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAttackTrendsOutcomeCallable CwpClient::DescribeAttackTrendsCallable(const DescribeAttackTrendsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAttackTrendsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAttackTrends(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAttackVulTypeListOutcome CwpClient::DescribeAttackVulTypeList(const DescribeAttackVulTypeListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAttackVulTypeList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAttackVulTypeListResponse rsp = DescribeAttackVulTypeListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAttackVulTypeListOutcome(rsp);
        else
            return DescribeAttackVulTypeListOutcome(o.GetError());
    }
    else
    {
        return DescribeAttackVulTypeListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAttackVulTypeListAsync(const DescribeAttackVulTypeListRequest& request, const DescribeAttackVulTypeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAttackVulTypeList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAttackVulTypeListOutcomeCallable CwpClient::DescribeAttackVulTypeListCallable(const DescribeAttackVulTypeListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAttackVulTypeListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAttackVulTypeList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAvailableExpertServiceDetailOutcome CwpClient::DescribeAvailableExpertServiceDetail(const DescribeAvailableExpertServiceDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAvailableExpertServiceDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAvailableExpertServiceDetailResponse rsp = DescribeAvailableExpertServiceDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAvailableExpertServiceDetailOutcome(rsp);
        else
            return DescribeAvailableExpertServiceDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAvailableExpertServiceDetailOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAvailableExpertServiceDetailAsync(const DescribeAvailableExpertServiceDetailRequest& request, const DescribeAvailableExpertServiceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAvailableExpertServiceDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAvailableExpertServiceDetailOutcomeCallable CwpClient::DescribeAvailableExpertServiceDetailCallable(const DescribeAvailableExpertServiceDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAvailableExpertServiceDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeAvailableExpertServiceDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBanModeOutcome CwpClient::DescribeBanMode(const DescribeBanModeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBanMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBanModeResponse rsp = DescribeBanModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBanModeOutcome(rsp);
        else
            return DescribeBanModeOutcome(o.GetError());
    }
    else
    {
        return DescribeBanModeOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBanModeAsync(const DescribeBanModeRequest& request, const DescribeBanModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBanMode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBanModeOutcomeCallable CwpClient::DescribeBanModeCallable(const DescribeBanModeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBanModeOutcome()>>(
        [this, request]()
        {
            return this->DescribeBanMode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBanRegionsOutcome CwpClient::DescribeBanRegions(const DescribeBanRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBanRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBanRegionsResponse rsp = DescribeBanRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBanRegionsOutcome(rsp);
        else
            return DescribeBanRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeBanRegionsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBanRegionsAsync(const DescribeBanRegionsRequest& request, const DescribeBanRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBanRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBanRegionsOutcomeCallable CwpClient::DescribeBanRegionsCallable(const DescribeBanRegionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBanRegionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeBanRegions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBanStatusOutcome CwpClient::DescribeBanStatus(const DescribeBanStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBanStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBanStatusResponse rsp = DescribeBanStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBanStatusOutcome(rsp);
        else
            return DescribeBanStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeBanStatusOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBanStatusAsync(const DescribeBanStatusRequest& request, const DescribeBanStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBanStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBanStatusOutcomeCallable CwpClient::DescribeBanStatusCallable(const DescribeBanStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBanStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeBanStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBanWhiteListOutcome CwpClient::DescribeBanWhiteList(const DescribeBanWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBanWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBanWhiteListResponse rsp = DescribeBanWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBanWhiteListOutcome(rsp);
        else
            return DescribeBanWhiteListOutcome(o.GetError());
    }
    else
    {
        return DescribeBanWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBanWhiteListAsync(const DescribeBanWhiteListRequest& request, const DescribeBanWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBanWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBanWhiteListOutcomeCallable CwpClient::DescribeBanWhiteListCallable(const DescribeBanWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBanWhiteListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBanWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBaselineAnalysisDataOutcome CwpClient::DescribeBaselineAnalysisData(const DescribeBaselineAnalysisDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineAnalysisData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineAnalysisDataResponse rsp = DescribeBaselineAnalysisDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineAnalysisDataOutcome(rsp);
        else
            return DescribeBaselineAnalysisDataOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineAnalysisDataOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineAnalysisDataAsync(const DescribeBaselineAnalysisDataRequest& request, const DescribeBaselineAnalysisDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineAnalysisData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBaselineAnalysisDataOutcomeCallable CwpClient::DescribeBaselineAnalysisDataCallable(const DescribeBaselineAnalysisDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineAnalysisDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineAnalysisData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBaselineBasicInfoOutcome CwpClient::DescribeBaselineBasicInfo(const DescribeBaselineBasicInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineBasicInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineBasicInfoResponse rsp = DescribeBaselineBasicInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineBasicInfoOutcome(rsp);
        else
            return DescribeBaselineBasicInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineBasicInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineBasicInfoAsync(const DescribeBaselineBasicInfoRequest& request, const DescribeBaselineBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineBasicInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBaselineBasicInfoOutcomeCallable CwpClient::DescribeBaselineBasicInfoCallable(const DescribeBaselineBasicInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineBasicInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineBasicInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBaselineDefaultStrategyListOutcome CwpClient::DescribeBaselineDefaultStrategyList(const DescribeBaselineDefaultStrategyListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineDefaultStrategyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineDefaultStrategyListResponse rsp = DescribeBaselineDefaultStrategyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineDefaultStrategyListOutcome(rsp);
        else
            return DescribeBaselineDefaultStrategyListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineDefaultStrategyListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineDefaultStrategyListAsync(const DescribeBaselineDefaultStrategyListRequest& request, const DescribeBaselineDefaultStrategyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineDefaultStrategyList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBaselineDefaultStrategyListOutcomeCallable CwpClient::DescribeBaselineDefaultStrategyListCallable(const DescribeBaselineDefaultStrategyListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineDefaultStrategyListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineDefaultStrategyList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBaselineDetailOutcome CwpClient::DescribeBaselineDetail(const DescribeBaselineDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineDetailResponse rsp = DescribeBaselineDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineDetailOutcome(rsp);
        else
            return DescribeBaselineDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineDetailOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineDetailAsync(const DescribeBaselineDetailRequest& request, const DescribeBaselineDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBaselineDetailOutcomeCallable CwpClient::DescribeBaselineDetailCallable(const DescribeBaselineDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBaselineDetectListOutcome CwpClient::DescribeBaselineDetectList(const DescribeBaselineDetectListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineDetectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineDetectListResponse rsp = DescribeBaselineDetectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineDetectListOutcome(rsp);
        else
            return DescribeBaselineDetectListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineDetectListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineDetectListAsync(const DescribeBaselineDetectListRequest& request, const DescribeBaselineDetectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineDetectList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBaselineDetectListOutcomeCallable CwpClient::DescribeBaselineDetectListCallable(const DescribeBaselineDetectListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineDetectListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineDetectList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBaselineDetectOverviewOutcome CwpClient::DescribeBaselineDetectOverview(const DescribeBaselineDetectOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineDetectOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineDetectOverviewResponse rsp = DescribeBaselineDetectOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineDetectOverviewOutcome(rsp);
        else
            return DescribeBaselineDetectOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineDetectOverviewOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineDetectOverviewAsync(const DescribeBaselineDetectOverviewRequest& request, const DescribeBaselineDetectOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineDetectOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBaselineDetectOverviewOutcomeCallable CwpClient::DescribeBaselineDetectOverviewCallable(const DescribeBaselineDetectOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineDetectOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineDetectOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBaselineDownloadListOutcome CwpClient::DescribeBaselineDownloadList(const DescribeBaselineDownloadListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineDownloadList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineDownloadListResponse rsp = DescribeBaselineDownloadListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineDownloadListOutcome(rsp);
        else
            return DescribeBaselineDownloadListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineDownloadListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineDownloadListAsync(const DescribeBaselineDownloadListRequest& request, const DescribeBaselineDownloadListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineDownloadList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBaselineDownloadListOutcomeCallable CwpClient::DescribeBaselineDownloadListCallable(const DescribeBaselineDownloadListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineDownloadListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineDownloadList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBaselineEffectHostListOutcome CwpClient::DescribeBaselineEffectHostList(const DescribeBaselineEffectHostListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineEffectHostList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineEffectHostListResponse rsp = DescribeBaselineEffectHostListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineEffectHostListOutcome(rsp);
        else
            return DescribeBaselineEffectHostListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineEffectHostListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineEffectHostListAsync(const DescribeBaselineEffectHostListRequest& request, const DescribeBaselineEffectHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineEffectHostList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBaselineEffectHostListOutcomeCallable CwpClient::DescribeBaselineEffectHostListCallable(const DescribeBaselineEffectHostListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineEffectHostListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineEffectHostList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBaselineFixListOutcome CwpClient::DescribeBaselineFixList(const DescribeBaselineFixListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineFixList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineFixListResponse rsp = DescribeBaselineFixListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineFixListOutcome(rsp);
        else
            return DescribeBaselineFixListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineFixListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineFixListAsync(const DescribeBaselineFixListRequest& request, const DescribeBaselineFixListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineFixList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBaselineFixListOutcomeCallable CwpClient::DescribeBaselineFixListCallable(const DescribeBaselineFixListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineFixListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineFixList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBaselineHostDetectListOutcome CwpClient::DescribeBaselineHostDetectList(const DescribeBaselineHostDetectListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineHostDetectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineHostDetectListResponse rsp = DescribeBaselineHostDetectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineHostDetectListOutcome(rsp);
        else
            return DescribeBaselineHostDetectListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineHostDetectListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineHostDetectListAsync(const DescribeBaselineHostDetectListRequest& request, const DescribeBaselineHostDetectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineHostDetectList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBaselineHostDetectListOutcomeCallable CwpClient::DescribeBaselineHostDetectListCallable(const DescribeBaselineHostDetectListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineHostDetectListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineHostDetectList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBaselineHostIgnoreListOutcome CwpClient::DescribeBaselineHostIgnoreList(const DescribeBaselineHostIgnoreListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineHostIgnoreList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineHostIgnoreListResponse rsp = DescribeBaselineHostIgnoreListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineHostIgnoreListOutcome(rsp);
        else
            return DescribeBaselineHostIgnoreListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineHostIgnoreListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineHostIgnoreListAsync(const DescribeBaselineHostIgnoreListRequest& request, const DescribeBaselineHostIgnoreListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineHostIgnoreList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBaselineHostIgnoreListOutcomeCallable CwpClient::DescribeBaselineHostIgnoreListCallable(const DescribeBaselineHostIgnoreListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineHostIgnoreListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineHostIgnoreList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBaselineHostRiskTopOutcome CwpClient::DescribeBaselineHostRiskTop(const DescribeBaselineHostRiskTopRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineHostRiskTop");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineHostRiskTopResponse rsp = DescribeBaselineHostRiskTopResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineHostRiskTopOutcome(rsp);
        else
            return DescribeBaselineHostRiskTopOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineHostRiskTopOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineHostRiskTopAsync(const DescribeBaselineHostRiskTopRequest& request, const DescribeBaselineHostRiskTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineHostRiskTop(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBaselineHostRiskTopOutcomeCallable CwpClient::DescribeBaselineHostRiskTopCallable(const DescribeBaselineHostRiskTopRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineHostRiskTopOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineHostRiskTop(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBaselineHostTopOutcome CwpClient::DescribeBaselineHostTop(const DescribeBaselineHostTopRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineHostTop");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineHostTopResponse rsp = DescribeBaselineHostTopResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineHostTopOutcome(rsp);
        else
            return DescribeBaselineHostTopOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineHostTopOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineHostTopAsync(const DescribeBaselineHostTopRequest& request, const DescribeBaselineHostTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineHostTop(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBaselineHostTopOutcomeCallable CwpClient::DescribeBaselineHostTopCallable(const DescribeBaselineHostTopRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineHostTopOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineHostTop(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBaselineItemDetectListOutcome CwpClient::DescribeBaselineItemDetectList(const DescribeBaselineItemDetectListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineItemDetectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineItemDetectListResponse rsp = DescribeBaselineItemDetectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineItemDetectListOutcome(rsp);
        else
            return DescribeBaselineItemDetectListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineItemDetectListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineItemDetectListAsync(const DescribeBaselineItemDetectListRequest& request, const DescribeBaselineItemDetectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineItemDetectList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBaselineItemDetectListOutcomeCallable CwpClient::DescribeBaselineItemDetectListCallable(const DescribeBaselineItemDetectListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineItemDetectListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineItemDetectList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBaselineItemIgnoreListOutcome CwpClient::DescribeBaselineItemIgnoreList(const DescribeBaselineItemIgnoreListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineItemIgnoreList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineItemIgnoreListResponse rsp = DescribeBaselineItemIgnoreListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineItemIgnoreListOutcome(rsp);
        else
            return DescribeBaselineItemIgnoreListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineItemIgnoreListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineItemIgnoreListAsync(const DescribeBaselineItemIgnoreListRequest& request, const DescribeBaselineItemIgnoreListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineItemIgnoreList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBaselineItemIgnoreListOutcomeCallable CwpClient::DescribeBaselineItemIgnoreListCallable(const DescribeBaselineItemIgnoreListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineItemIgnoreListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineItemIgnoreList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBaselineItemInfoOutcome CwpClient::DescribeBaselineItemInfo(const DescribeBaselineItemInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineItemInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineItemInfoResponse rsp = DescribeBaselineItemInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineItemInfoOutcome(rsp);
        else
            return DescribeBaselineItemInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineItemInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineItemInfoAsync(const DescribeBaselineItemInfoRequest& request, const DescribeBaselineItemInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineItemInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBaselineItemInfoOutcomeCallable CwpClient::DescribeBaselineItemInfoCallable(const DescribeBaselineItemInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineItemInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineItemInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBaselineItemListOutcome CwpClient::DescribeBaselineItemList(const DescribeBaselineItemListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineItemList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineItemListResponse rsp = DescribeBaselineItemListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineItemListOutcome(rsp);
        else
            return DescribeBaselineItemListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineItemListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineItemListAsync(const DescribeBaselineItemListRequest& request, const DescribeBaselineItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineItemList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBaselineItemListOutcomeCallable CwpClient::DescribeBaselineItemListCallable(const DescribeBaselineItemListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineItemListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineItemList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBaselineItemRiskTopOutcome CwpClient::DescribeBaselineItemRiskTop(const DescribeBaselineItemRiskTopRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineItemRiskTop");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineItemRiskTopResponse rsp = DescribeBaselineItemRiskTopResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineItemRiskTopOutcome(rsp);
        else
            return DescribeBaselineItemRiskTopOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineItemRiskTopOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineItemRiskTopAsync(const DescribeBaselineItemRiskTopRequest& request, const DescribeBaselineItemRiskTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineItemRiskTop(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBaselineItemRiskTopOutcomeCallable CwpClient::DescribeBaselineItemRiskTopCallable(const DescribeBaselineItemRiskTopRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineItemRiskTopOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineItemRiskTop(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBaselineListOutcome CwpClient::DescribeBaselineList(const DescribeBaselineListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineListResponse rsp = DescribeBaselineListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineListOutcome(rsp);
        else
            return DescribeBaselineListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineListAsync(const DescribeBaselineListRequest& request, const DescribeBaselineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBaselineListOutcomeCallable CwpClient::DescribeBaselineListCallable(const DescribeBaselineListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBaselinePolicyListOutcome CwpClient::DescribeBaselinePolicyList(const DescribeBaselinePolicyListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselinePolicyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselinePolicyListResponse rsp = DescribeBaselinePolicyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselinePolicyListOutcome(rsp);
        else
            return DescribeBaselinePolicyListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselinePolicyListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselinePolicyListAsync(const DescribeBaselinePolicyListRequest& request, const DescribeBaselinePolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselinePolicyList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBaselinePolicyListOutcomeCallable CwpClient::DescribeBaselinePolicyListCallable(const DescribeBaselinePolicyListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselinePolicyListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselinePolicyList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBaselineRuleOutcome CwpClient::DescribeBaselineRule(const DescribeBaselineRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineRuleResponse rsp = DescribeBaselineRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineRuleOutcome(rsp);
        else
            return DescribeBaselineRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineRuleOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineRuleAsync(const DescribeBaselineRuleRequest& request, const DescribeBaselineRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBaselineRuleOutcomeCallable CwpClient::DescribeBaselineRuleCallable(const DescribeBaselineRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineRuleOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBaselineRuleCategoryListOutcome CwpClient::DescribeBaselineRuleCategoryList(const DescribeBaselineRuleCategoryListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineRuleCategoryList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineRuleCategoryListResponse rsp = DescribeBaselineRuleCategoryListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineRuleCategoryListOutcome(rsp);
        else
            return DescribeBaselineRuleCategoryListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineRuleCategoryListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineRuleCategoryListAsync(const DescribeBaselineRuleCategoryListRequest& request, const DescribeBaselineRuleCategoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineRuleCategoryList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBaselineRuleCategoryListOutcomeCallable CwpClient::DescribeBaselineRuleCategoryListCallable(const DescribeBaselineRuleCategoryListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineRuleCategoryListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineRuleCategoryList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBaselineRuleDetectListOutcome CwpClient::DescribeBaselineRuleDetectList(const DescribeBaselineRuleDetectListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineRuleDetectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineRuleDetectListResponse rsp = DescribeBaselineRuleDetectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineRuleDetectListOutcome(rsp);
        else
            return DescribeBaselineRuleDetectListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineRuleDetectListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineRuleDetectListAsync(const DescribeBaselineRuleDetectListRequest& request, const DescribeBaselineRuleDetectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineRuleDetectList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBaselineRuleDetectListOutcomeCallable CwpClient::DescribeBaselineRuleDetectListCallable(const DescribeBaselineRuleDetectListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineRuleDetectListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineRuleDetectList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBaselineRuleIgnoreListOutcome CwpClient::DescribeBaselineRuleIgnoreList(const DescribeBaselineRuleIgnoreListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineRuleIgnoreList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineRuleIgnoreListResponse rsp = DescribeBaselineRuleIgnoreListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineRuleIgnoreListOutcome(rsp);
        else
            return DescribeBaselineRuleIgnoreListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineRuleIgnoreListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineRuleIgnoreListAsync(const DescribeBaselineRuleIgnoreListRequest& request, const DescribeBaselineRuleIgnoreListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineRuleIgnoreList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBaselineRuleIgnoreListOutcomeCallable CwpClient::DescribeBaselineRuleIgnoreListCallable(const DescribeBaselineRuleIgnoreListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineRuleIgnoreListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineRuleIgnoreList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBaselineRuleListOutcome CwpClient::DescribeBaselineRuleList(const DescribeBaselineRuleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineRuleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineRuleListResponse rsp = DescribeBaselineRuleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineRuleListOutcome(rsp);
        else
            return DescribeBaselineRuleListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineRuleListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineRuleListAsync(const DescribeBaselineRuleListRequest& request, const DescribeBaselineRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineRuleList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBaselineRuleListOutcomeCallable CwpClient::DescribeBaselineRuleListCallable(const DescribeBaselineRuleListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineRuleListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineRuleList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBaselineScanScheduleOutcome CwpClient::DescribeBaselineScanSchedule(const DescribeBaselineScanScheduleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineScanSchedule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineScanScheduleResponse rsp = DescribeBaselineScanScheduleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineScanScheduleOutcome(rsp);
        else
            return DescribeBaselineScanScheduleOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineScanScheduleOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineScanScheduleAsync(const DescribeBaselineScanScheduleRequest& request, const DescribeBaselineScanScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineScanSchedule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBaselineScanScheduleOutcomeCallable CwpClient::DescribeBaselineScanScheduleCallable(const DescribeBaselineScanScheduleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineScanScheduleOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineScanSchedule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBaselineStrategyDetailOutcome CwpClient::DescribeBaselineStrategyDetail(const DescribeBaselineStrategyDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineStrategyDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineStrategyDetailResponse rsp = DescribeBaselineStrategyDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineStrategyDetailOutcome(rsp);
        else
            return DescribeBaselineStrategyDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineStrategyDetailOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineStrategyDetailAsync(const DescribeBaselineStrategyDetailRequest& request, const DescribeBaselineStrategyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineStrategyDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBaselineStrategyDetailOutcomeCallable CwpClient::DescribeBaselineStrategyDetailCallable(const DescribeBaselineStrategyDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineStrategyDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineStrategyDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBaselineStrategyListOutcome CwpClient::DescribeBaselineStrategyList(const DescribeBaselineStrategyListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineStrategyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineStrategyListResponse rsp = DescribeBaselineStrategyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineStrategyListOutcome(rsp);
        else
            return DescribeBaselineStrategyListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineStrategyListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineStrategyListAsync(const DescribeBaselineStrategyListRequest& request, const DescribeBaselineStrategyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineStrategyList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBaselineStrategyListOutcomeCallable CwpClient::DescribeBaselineStrategyListCallable(const DescribeBaselineStrategyListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineStrategyListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineStrategyList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBaselineTopOutcome CwpClient::DescribeBaselineTop(const DescribeBaselineTopRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineTop");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineTopResponse rsp = DescribeBaselineTopResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineTopOutcome(rsp);
        else
            return DescribeBaselineTopOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineTopOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineTopAsync(const DescribeBaselineTopRequest& request, const DescribeBaselineTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineTop(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBaselineTopOutcomeCallable CwpClient::DescribeBaselineTopCallable(const DescribeBaselineTopRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineTopOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineTop(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBaselineWeakPasswordListOutcome CwpClient::DescribeBaselineWeakPasswordList(const DescribeBaselineWeakPasswordListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineWeakPasswordList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineWeakPasswordListResponse rsp = DescribeBaselineWeakPasswordListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineWeakPasswordListOutcome(rsp);
        else
            return DescribeBaselineWeakPasswordListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineWeakPasswordListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineWeakPasswordListAsync(const DescribeBaselineWeakPasswordListRequest& request, const DescribeBaselineWeakPasswordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineWeakPasswordList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBaselineWeakPasswordListOutcomeCallable CwpClient::DescribeBaselineWeakPasswordListCallable(const DescribeBaselineWeakPasswordListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineWeakPasswordListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineWeakPasswordList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBashEventsOutcome CwpClient::DescribeBashEvents(const DescribeBashEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBashEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBashEventsResponse rsp = DescribeBashEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBashEventsOutcome(rsp);
        else
            return DescribeBashEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeBashEventsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBashEventsAsync(const DescribeBashEventsRequest& request, const DescribeBashEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBashEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBashEventsOutcomeCallable CwpClient::DescribeBashEventsCallable(const DescribeBashEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBashEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeBashEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBashEventsInfoOutcome CwpClient::DescribeBashEventsInfo(const DescribeBashEventsInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBashEventsInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBashEventsInfoResponse rsp = DescribeBashEventsInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBashEventsInfoOutcome(rsp);
        else
            return DescribeBashEventsInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeBashEventsInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBashEventsInfoAsync(const DescribeBashEventsInfoRequest& request, const DescribeBashEventsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBashEventsInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBashEventsInfoOutcomeCallable CwpClient::DescribeBashEventsInfoCallable(const DescribeBashEventsInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBashEventsInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeBashEventsInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBashEventsInfoNewOutcome CwpClient::DescribeBashEventsInfoNew(const DescribeBashEventsInfoNewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBashEventsInfoNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBashEventsInfoNewResponse rsp = DescribeBashEventsInfoNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBashEventsInfoNewOutcome(rsp);
        else
            return DescribeBashEventsInfoNewOutcome(o.GetError());
    }
    else
    {
        return DescribeBashEventsInfoNewOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBashEventsInfoNewAsync(const DescribeBashEventsInfoNewRequest& request, const DescribeBashEventsInfoNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBashEventsInfoNew(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBashEventsInfoNewOutcomeCallable CwpClient::DescribeBashEventsInfoNewCallable(const DescribeBashEventsInfoNewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBashEventsInfoNewOutcome()>>(
        [this, request]()
        {
            return this->DescribeBashEventsInfoNew(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBashEventsNewOutcome CwpClient::DescribeBashEventsNew(const DescribeBashEventsNewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBashEventsNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBashEventsNewResponse rsp = DescribeBashEventsNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBashEventsNewOutcome(rsp);
        else
            return DescribeBashEventsNewOutcome(o.GetError());
    }
    else
    {
        return DescribeBashEventsNewOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBashEventsNewAsync(const DescribeBashEventsNewRequest& request, const DescribeBashEventsNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBashEventsNew(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBashEventsNewOutcomeCallable CwpClient::DescribeBashEventsNewCallable(const DescribeBashEventsNewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBashEventsNewOutcome()>>(
        [this, request]()
        {
            return this->DescribeBashEventsNew(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBashPoliciesOutcome CwpClient::DescribeBashPolicies(const DescribeBashPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBashPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBashPoliciesResponse rsp = DescribeBashPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBashPoliciesOutcome(rsp);
        else
            return DescribeBashPoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeBashPoliciesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBashPoliciesAsync(const DescribeBashPoliciesRequest& request, const DescribeBashPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBashPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBashPoliciesOutcomeCallable CwpClient::DescribeBashPoliciesCallable(const DescribeBashPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBashPoliciesOutcome()>>(
        [this, request]()
        {
            return this->DescribeBashPolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBashRulesOutcome CwpClient::DescribeBashRules(const DescribeBashRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBashRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBashRulesResponse rsp = DescribeBashRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBashRulesOutcome(rsp);
        else
            return DescribeBashRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeBashRulesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBashRulesAsync(const DescribeBashRulesRequest& request, const DescribeBashRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBashRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBashRulesOutcomeCallable CwpClient::DescribeBashRulesCallable(const DescribeBashRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBashRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeBashRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBruteAttackListOutcome CwpClient::DescribeBruteAttackList(const DescribeBruteAttackListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBruteAttackList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBruteAttackListResponse rsp = DescribeBruteAttackListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBruteAttackListOutcome(rsp);
        else
            return DescribeBruteAttackListOutcome(o.GetError());
    }
    else
    {
        return DescribeBruteAttackListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBruteAttackListAsync(const DescribeBruteAttackListRequest& request, const DescribeBruteAttackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBruteAttackList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBruteAttackListOutcomeCallable CwpClient::DescribeBruteAttackListCallable(const DescribeBruteAttackListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBruteAttackListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBruteAttackList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeBruteAttackRulesOutcome CwpClient::DescribeBruteAttackRules(const DescribeBruteAttackRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBruteAttackRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBruteAttackRulesResponse rsp = DescribeBruteAttackRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBruteAttackRulesOutcome(rsp);
        else
            return DescribeBruteAttackRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeBruteAttackRulesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBruteAttackRulesAsync(const DescribeBruteAttackRulesRequest& request, const DescribeBruteAttackRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBruteAttackRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeBruteAttackRulesOutcomeCallable CwpClient::DescribeBruteAttackRulesCallable(const DescribeBruteAttackRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBruteAttackRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeBruteAttackRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeCanFixVulMachineOutcome CwpClient::DescribeCanFixVulMachine(const DescribeCanFixVulMachineRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCanFixVulMachine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCanFixVulMachineResponse rsp = DescribeCanFixVulMachineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCanFixVulMachineOutcome(rsp);
        else
            return DescribeCanFixVulMachineOutcome(o.GetError());
    }
    else
    {
        return DescribeCanFixVulMachineOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeCanFixVulMachineAsync(const DescribeCanFixVulMachineRequest& request, const DescribeCanFixVulMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCanFixVulMachine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeCanFixVulMachineOutcomeCallable CwpClient::DescribeCanFixVulMachineCallable(const DescribeCanFixVulMachineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCanFixVulMachineOutcome()>>(
        [this, request]()
        {
            return this->DescribeCanFixVulMachine(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeCanNotSeparateMachineOutcome CwpClient::DescribeCanNotSeparateMachine(const DescribeCanNotSeparateMachineRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCanNotSeparateMachine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCanNotSeparateMachineResponse rsp = DescribeCanNotSeparateMachineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCanNotSeparateMachineOutcome(rsp);
        else
            return DescribeCanNotSeparateMachineOutcome(o.GetError());
    }
    else
    {
        return DescribeCanNotSeparateMachineOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeCanNotSeparateMachineAsync(const DescribeCanNotSeparateMachineRequest& request, const DescribeCanNotSeparateMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCanNotSeparateMachine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeCanNotSeparateMachineOutcomeCallable CwpClient::DescribeCanNotSeparateMachineCallable(const DescribeCanNotSeparateMachineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCanNotSeparateMachineOutcome()>>(
        [this, request]()
        {
            return this->DescribeCanNotSeparateMachine(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeClientExceptionOutcome CwpClient::DescribeClientException(const DescribeClientExceptionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClientException");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClientExceptionResponse rsp = DescribeClientExceptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClientExceptionOutcome(rsp);
        else
            return DescribeClientExceptionOutcome(o.GetError());
    }
    else
    {
        return DescribeClientExceptionOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeClientExceptionAsync(const DescribeClientExceptionRequest& request, const DescribeClientExceptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClientException(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeClientExceptionOutcomeCallable CwpClient::DescribeClientExceptionCallable(const DescribeClientExceptionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClientExceptionOutcome()>>(
        [this, request]()
        {
            return this->DescribeClientException(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeDefenceEventDetailOutcome CwpClient::DescribeDefenceEventDetail(const DescribeDefenceEventDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDefenceEventDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDefenceEventDetailResponse rsp = DescribeDefenceEventDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDefenceEventDetailOutcome(rsp);
        else
            return DescribeDefenceEventDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDefenceEventDetailOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeDefenceEventDetailAsync(const DescribeDefenceEventDetailRequest& request, const DescribeDefenceEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDefenceEventDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeDefenceEventDetailOutcomeCallable CwpClient::DescribeDefenceEventDetailCallable(const DescribeDefenceEventDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDefenceEventDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeDefenceEventDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeDirectConnectInstallCommandOutcome CwpClient::DescribeDirectConnectInstallCommand(const DescribeDirectConnectInstallCommandRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDirectConnectInstallCommand");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDirectConnectInstallCommandResponse rsp = DescribeDirectConnectInstallCommandResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDirectConnectInstallCommandOutcome(rsp);
        else
            return DescribeDirectConnectInstallCommandOutcome(o.GetError());
    }
    else
    {
        return DescribeDirectConnectInstallCommandOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeDirectConnectInstallCommandAsync(const DescribeDirectConnectInstallCommandRequest& request, const DescribeDirectConnectInstallCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDirectConnectInstallCommand(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeDirectConnectInstallCommandOutcomeCallable CwpClient::DescribeDirectConnectInstallCommandCallable(const DescribeDirectConnectInstallCommandRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDirectConnectInstallCommandOutcome()>>(
        [this, request]()
        {
            return this->DescribeDirectConnectInstallCommand(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeESAggregationsOutcome CwpClient::DescribeESAggregations(const DescribeESAggregationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeESAggregations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeESAggregationsResponse rsp = DescribeESAggregationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeESAggregationsOutcome(rsp);
        else
            return DescribeESAggregationsOutcome(o.GetError());
    }
    else
    {
        return DescribeESAggregationsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeESAggregationsAsync(const DescribeESAggregationsRequest& request, const DescribeESAggregationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeESAggregations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeESAggregationsOutcomeCallable CwpClient::DescribeESAggregationsCallable(const DescribeESAggregationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeESAggregationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeESAggregations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeEmergencyResponseListOutcome CwpClient::DescribeEmergencyResponseList(const DescribeEmergencyResponseListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEmergencyResponseList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEmergencyResponseListResponse rsp = DescribeEmergencyResponseListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEmergencyResponseListOutcome(rsp);
        else
            return DescribeEmergencyResponseListOutcome(o.GetError());
    }
    else
    {
        return DescribeEmergencyResponseListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeEmergencyResponseListAsync(const DescribeEmergencyResponseListRequest& request, const DescribeEmergencyResponseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEmergencyResponseList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeEmergencyResponseListOutcomeCallable CwpClient::DescribeEmergencyResponseListCallable(const DescribeEmergencyResponseListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEmergencyResponseListOutcome()>>(
        [this, request]()
        {
            return this->DescribeEmergencyResponseList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeEmergencyVulListOutcome CwpClient::DescribeEmergencyVulList(const DescribeEmergencyVulListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEmergencyVulList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEmergencyVulListResponse rsp = DescribeEmergencyVulListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEmergencyVulListOutcome(rsp);
        else
            return DescribeEmergencyVulListOutcome(o.GetError());
    }
    else
    {
        return DescribeEmergencyVulListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeEmergencyVulListAsync(const DescribeEmergencyVulListRequest& request, const DescribeEmergencyVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEmergencyVulList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeEmergencyVulListOutcomeCallable CwpClient::DescribeEmergencyVulListCallable(const DescribeEmergencyVulListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEmergencyVulListOutcome()>>(
        [this, request]()
        {
            return this->DescribeEmergencyVulList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeEventByTableOutcome CwpClient::DescribeEventByTable(const DescribeEventByTableRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEventByTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEventByTableResponse rsp = DescribeEventByTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEventByTableOutcome(rsp);
        else
            return DescribeEventByTableOutcome(o.GetError());
    }
    else
    {
        return DescribeEventByTableOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeEventByTableAsync(const DescribeEventByTableRequest& request, const DescribeEventByTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEventByTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeEventByTableOutcomeCallable CwpClient::DescribeEventByTableCallable(const DescribeEventByTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEventByTableOutcome()>>(
        [this, request]()
        {
            return this->DescribeEventByTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeExpertServiceListOutcome CwpClient::DescribeExpertServiceList(const DescribeExpertServiceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExpertServiceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExpertServiceListResponse rsp = DescribeExpertServiceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExpertServiceListOutcome(rsp);
        else
            return DescribeExpertServiceListOutcome(o.GetError());
    }
    else
    {
        return DescribeExpertServiceListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeExpertServiceListAsync(const DescribeExpertServiceListRequest& request, const DescribeExpertServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExpertServiceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeExpertServiceListOutcomeCallable CwpClient::DescribeExpertServiceListCallable(const DescribeExpertServiceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExpertServiceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeExpertServiceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeExpertServiceOrderListOutcome CwpClient::DescribeExpertServiceOrderList(const DescribeExpertServiceOrderListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExpertServiceOrderList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExpertServiceOrderListResponse rsp = DescribeExpertServiceOrderListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExpertServiceOrderListOutcome(rsp);
        else
            return DescribeExpertServiceOrderListOutcome(o.GetError());
    }
    else
    {
        return DescribeExpertServiceOrderListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeExpertServiceOrderListAsync(const DescribeExpertServiceOrderListRequest& request, const DescribeExpertServiceOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExpertServiceOrderList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeExpertServiceOrderListOutcomeCallable CwpClient::DescribeExpertServiceOrderListCallable(const DescribeExpertServiceOrderListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExpertServiceOrderListOutcome()>>(
        [this, request]()
        {
            return this->DescribeExpertServiceOrderList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeExportMachinesOutcome CwpClient::DescribeExportMachines(const DescribeExportMachinesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExportMachines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExportMachinesResponse rsp = DescribeExportMachinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExportMachinesOutcome(rsp);
        else
            return DescribeExportMachinesOutcome(o.GetError());
    }
    else
    {
        return DescribeExportMachinesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeExportMachinesAsync(const DescribeExportMachinesRequest& request, const DescribeExportMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExportMachines(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeExportMachinesOutcomeCallable CwpClient::DescribeExportMachinesCallable(const DescribeExportMachinesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExportMachinesOutcome()>>(
        [this, request]()
        {
            return this->DescribeExportMachines(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeFastAnalysisOutcome CwpClient::DescribeFastAnalysis(const DescribeFastAnalysisRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFastAnalysis");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFastAnalysisResponse rsp = DescribeFastAnalysisResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFastAnalysisOutcome(rsp);
        else
            return DescribeFastAnalysisOutcome(o.GetError());
    }
    else
    {
        return DescribeFastAnalysisOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeFastAnalysisAsync(const DescribeFastAnalysisRequest& request, const DescribeFastAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFastAnalysis(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeFastAnalysisOutcomeCallable CwpClient::DescribeFastAnalysisCallable(const DescribeFastAnalysisRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFastAnalysisOutcome()>>(
        [this, request]()
        {
            return this->DescribeFastAnalysis(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeFileTamperEventRuleInfoOutcome CwpClient::DescribeFileTamperEventRuleInfo(const DescribeFileTamperEventRuleInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileTamperEventRuleInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileTamperEventRuleInfoResponse rsp = DescribeFileTamperEventRuleInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileTamperEventRuleInfoOutcome(rsp);
        else
            return DescribeFileTamperEventRuleInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeFileTamperEventRuleInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeFileTamperEventRuleInfoAsync(const DescribeFileTamperEventRuleInfoRequest& request, const DescribeFileTamperEventRuleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFileTamperEventRuleInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeFileTamperEventRuleInfoOutcomeCallable CwpClient::DescribeFileTamperEventRuleInfoCallable(const DescribeFileTamperEventRuleInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFileTamperEventRuleInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeFileTamperEventRuleInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeFileTamperEventsOutcome CwpClient::DescribeFileTamperEvents(const DescribeFileTamperEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileTamperEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileTamperEventsResponse rsp = DescribeFileTamperEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileTamperEventsOutcome(rsp);
        else
            return DescribeFileTamperEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeFileTamperEventsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeFileTamperEventsAsync(const DescribeFileTamperEventsRequest& request, const DescribeFileTamperEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFileTamperEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeFileTamperEventsOutcomeCallable CwpClient::DescribeFileTamperEventsCallable(const DescribeFileTamperEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFileTamperEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeFileTamperEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeFileTamperRuleCountOutcome CwpClient::DescribeFileTamperRuleCount(const DescribeFileTamperRuleCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileTamperRuleCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileTamperRuleCountResponse rsp = DescribeFileTamperRuleCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileTamperRuleCountOutcome(rsp);
        else
            return DescribeFileTamperRuleCountOutcome(o.GetError());
    }
    else
    {
        return DescribeFileTamperRuleCountOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeFileTamperRuleCountAsync(const DescribeFileTamperRuleCountRequest& request, const DescribeFileTamperRuleCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFileTamperRuleCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeFileTamperRuleCountOutcomeCallable CwpClient::DescribeFileTamperRuleCountCallable(const DescribeFileTamperRuleCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFileTamperRuleCountOutcome()>>(
        [this, request]()
        {
            return this->DescribeFileTamperRuleCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeFileTamperRuleInfoOutcome CwpClient::DescribeFileTamperRuleInfo(const DescribeFileTamperRuleInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileTamperRuleInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileTamperRuleInfoResponse rsp = DescribeFileTamperRuleInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileTamperRuleInfoOutcome(rsp);
        else
            return DescribeFileTamperRuleInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeFileTamperRuleInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeFileTamperRuleInfoAsync(const DescribeFileTamperRuleInfoRequest& request, const DescribeFileTamperRuleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFileTamperRuleInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeFileTamperRuleInfoOutcomeCallable CwpClient::DescribeFileTamperRuleInfoCallable(const DescribeFileTamperRuleInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFileTamperRuleInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeFileTamperRuleInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeFileTamperRulesOutcome CwpClient::DescribeFileTamperRules(const DescribeFileTamperRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileTamperRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileTamperRulesResponse rsp = DescribeFileTamperRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileTamperRulesOutcome(rsp);
        else
            return DescribeFileTamperRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeFileTamperRulesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeFileTamperRulesAsync(const DescribeFileTamperRulesRequest& request, const DescribeFileTamperRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFileTamperRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeFileTamperRulesOutcomeCallable CwpClient::DescribeFileTamperRulesCallable(const DescribeFileTamperRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFileTamperRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeFileTamperRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeGeneralStatOutcome CwpClient::DescribeGeneralStat(const DescribeGeneralStatRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGeneralStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGeneralStatResponse rsp = DescribeGeneralStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGeneralStatOutcome(rsp);
        else
            return DescribeGeneralStatOutcome(o.GetError());
    }
    else
    {
        return DescribeGeneralStatOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeGeneralStatAsync(const DescribeGeneralStatRequest& request, const DescribeGeneralStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGeneralStat(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeGeneralStatOutcomeCallable CwpClient::DescribeGeneralStatCallable(const DescribeGeneralStatRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGeneralStatOutcome()>>(
        [this, request]()
        {
            return this->DescribeGeneralStat(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeHistoryAccountsOutcome CwpClient::DescribeHistoryAccounts(const DescribeHistoryAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHistoryAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHistoryAccountsResponse rsp = DescribeHistoryAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHistoryAccountsOutcome(rsp);
        else
            return DescribeHistoryAccountsOutcome(o.GetError());
    }
    else
    {
        return DescribeHistoryAccountsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeHistoryAccountsAsync(const DescribeHistoryAccountsRequest& request, const DescribeHistoryAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHistoryAccounts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeHistoryAccountsOutcomeCallable CwpClient::DescribeHistoryAccountsCallable(const DescribeHistoryAccountsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHistoryAccountsOutcome()>>(
        [this, request]()
        {
            return this->DescribeHistoryAccounts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeHistoryServiceOutcome CwpClient::DescribeHistoryService(const DescribeHistoryServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHistoryService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHistoryServiceResponse rsp = DescribeHistoryServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHistoryServiceOutcome(rsp);
        else
            return DescribeHistoryServiceOutcome(o.GetError());
    }
    else
    {
        return DescribeHistoryServiceOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeHistoryServiceAsync(const DescribeHistoryServiceRequest& request, const DescribeHistoryServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHistoryService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeHistoryServiceOutcomeCallable CwpClient::DescribeHistoryServiceCallable(const DescribeHistoryServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHistoryServiceOutcome()>>(
        [this, request]()
        {
            return this->DescribeHistoryService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeHostInfoOutcome CwpClient::DescribeHostInfo(const DescribeHostInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostInfoResponse rsp = DescribeHostInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostInfoOutcome(rsp);
        else
            return DescribeHostInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeHostInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeHostInfoAsync(const DescribeHostInfoRequest& request, const DescribeHostInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHostInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeHostInfoOutcomeCallable CwpClient::DescribeHostInfoCallable(const DescribeHostInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeHostInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeHostLoginListOutcome CwpClient::DescribeHostLoginList(const DescribeHostLoginListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostLoginList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostLoginListResponse rsp = DescribeHostLoginListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostLoginListOutcome(rsp);
        else
            return DescribeHostLoginListOutcome(o.GetError());
    }
    else
    {
        return DescribeHostLoginListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeHostLoginListAsync(const DescribeHostLoginListRequest& request, const DescribeHostLoginListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHostLoginList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeHostLoginListOutcomeCallable CwpClient::DescribeHostLoginListCallable(const DescribeHostLoginListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostLoginListOutcome()>>(
        [this, request]()
        {
            return this->DescribeHostLoginList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeHotVulTopOutcome CwpClient::DescribeHotVulTop(const DescribeHotVulTopRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHotVulTop");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHotVulTopResponse rsp = DescribeHotVulTopResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHotVulTopOutcome(rsp);
        else
            return DescribeHotVulTopOutcome(o.GetError());
    }
    else
    {
        return DescribeHotVulTopOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeHotVulTopAsync(const DescribeHotVulTopRequest& request, const DescribeHotVulTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHotVulTop(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeHotVulTopOutcomeCallable CwpClient::DescribeHotVulTopCallable(const DescribeHotVulTopRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHotVulTopOutcome()>>(
        [this, request]()
        {
            return this->DescribeHotVulTop(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeIgnoreBaselineRuleOutcome CwpClient::DescribeIgnoreBaselineRule(const DescribeIgnoreBaselineRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIgnoreBaselineRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIgnoreBaselineRuleResponse rsp = DescribeIgnoreBaselineRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIgnoreBaselineRuleOutcome(rsp);
        else
            return DescribeIgnoreBaselineRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeIgnoreBaselineRuleOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeIgnoreBaselineRuleAsync(const DescribeIgnoreBaselineRuleRequest& request, const DescribeIgnoreBaselineRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIgnoreBaselineRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeIgnoreBaselineRuleOutcomeCallable CwpClient::DescribeIgnoreBaselineRuleCallable(const DescribeIgnoreBaselineRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIgnoreBaselineRuleOutcome()>>(
        [this, request]()
        {
            return this->DescribeIgnoreBaselineRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeIgnoreHostAndItemConfigOutcome CwpClient::DescribeIgnoreHostAndItemConfig(const DescribeIgnoreHostAndItemConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIgnoreHostAndItemConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIgnoreHostAndItemConfigResponse rsp = DescribeIgnoreHostAndItemConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIgnoreHostAndItemConfigOutcome(rsp);
        else
            return DescribeIgnoreHostAndItemConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeIgnoreHostAndItemConfigOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeIgnoreHostAndItemConfigAsync(const DescribeIgnoreHostAndItemConfigRequest& request, const DescribeIgnoreHostAndItemConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIgnoreHostAndItemConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeIgnoreHostAndItemConfigOutcomeCallable CwpClient::DescribeIgnoreHostAndItemConfigCallable(const DescribeIgnoreHostAndItemConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIgnoreHostAndItemConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeIgnoreHostAndItemConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeIgnoreRuleEffectHostListOutcome CwpClient::DescribeIgnoreRuleEffectHostList(const DescribeIgnoreRuleEffectHostListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIgnoreRuleEffectHostList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIgnoreRuleEffectHostListResponse rsp = DescribeIgnoreRuleEffectHostListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIgnoreRuleEffectHostListOutcome(rsp);
        else
            return DescribeIgnoreRuleEffectHostListOutcome(o.GetError());
    }
    else
    {
        return DescribeIgnoreRuleEffectHostListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeIgnoreRuleEffectHostListAsync(const DescribeIgnoreRuleEffectHostListRequest& request, const DescribeIgnoreRuleEffectHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIgnoreRuleEffectHostList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeIgnoreRuleEffectHostListOutcomeCallable CwpClient::DescribeIgnoreRuleEffectHostListCallable(const DescribeIgnoreRuleEffectHostListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIgnoreRuleEffectHostListOutcome()>>(
        [this, request]()
        {
            return this->DescribeIgnoreRuleEffectHostList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeImportMachineInfoOutcome CwpClient::DescribeImportMachineInfo(const DescribeImportMachineInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImportMachineInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImportMachineInfoResponse rsp = DescribeImportMachineInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImportMachineInfoOutcome(rsp);
        else
            return DescribeImportMachineInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeImportMachineInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeImportMachineInfoAsync(const DescribeImportMachineInfoRequest& request, const DescribeImportMachineInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImportMachineInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeImportMachineInfoOutcomeCallable CwpClient::DescribeImportMachineInfoCallable(const DescribeImportMachineInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImportMachineInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeImportMachineInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeJavaMemShellInfoOutcome CwpClient::DescribeJavaMemShellInfo(const DescribeJavaMemShellInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJavaMemShellInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJavaMemShellInfoResponse rsp = DescribeJavaMemShellInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJavaMemShellInfoOutcome(rsp);
        else
            return DescribeJavaMemShellInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeJavaMemShellInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeJavaMemShellInfoAsync(const DescribeJavaMemShellInfoRequest& request, const DescribeJavaMemShellInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeJavaMemShellInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeJavaMemShellInfoOutcomeCallable CwpClient::DescribeJavaMemShellInfoCallable(const DescribeJavaMemShellInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeJavaMemShellInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeJavaMemShellInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeJavaMemShellListOutcome CwpClient::DescribeJavaMemShellList(const DescribeJavaMemShellListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJavaMemShellList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJavaMemShellListResponse rsp = DescribeJavaMemShellListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJavaMemShellListOutcome(rsp);
        else
            return DescribeJavaMemShellListOutcome(o.GetError());
    }
    else
    {
        return DescribeJavaMemShellListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeJavaMemShellListAsync(const DescribeJavaMemShellListRequest& request, const DescribeJavaMemShellListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeJavaMemShellList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeJavaMemShellListOutcomeCallable CwpClient::DescribeJavaMemShellListCallable(const DescribeJavaMemShellListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeJavaMemShellListOutcome()>>(
        [this, request]()
        {
            return this->DescribeJavaMemShellList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeJavaMemShellPluginInfoOutcome CwpClient::DescribeJavaMemShellPluginInfo(const DescribeJavaMemShellPluginInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJavaMemShellPluginInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJavaMemShellPluginInfoResponse rsp = DescribeJavaMemShellPluginInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJavaMemShellPluginInfoOutcome(rsp);
        else
            return DescribeJavaMemShellPluginInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeJavaMemShellPluginInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeJavaMemShellPluginInfoAsync(const DescribeJavaMemShellPluginInfoRequest& request, const DescribeJavaMemShellPluginInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeJavaMemShellPluginInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeJavaMemShellPluginInfoOutcomeCallable CwpClient::DescribeJavaMemShellPluginInfoCallable(const DescribeJavaMemShellPluginInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeJavaMemShellPluginInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeJavaMemShellPluginInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeJavaMemShellPluginListOutcome CwpClient::DescribeJavaMemShellPluginList(const DescribeJavaMemShellPluginListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJavaMemShellPluginList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJavaMemShellPluginListResponse rsp = DescribeJavaMemShellPluginListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJavaMemShellPluginListOutcome(rsp);
        else
            return DescribeJavaMemShellPluginListOutcome(o.GetError());
    }
    else
    {
        return DescribeJavaMemShellPluginListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeJavaMemShellPluginListAsync(const DescribeJavaMemShellPluginListRequest& request, const DescribeJavaMemShellPluginListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeJavaMemShellPluginList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeJavaMemShellPluginListOutcomeCallable CwpClient::DescribeJavaMemShellPluginListCallable(const DescribeJavaMemShellPluginListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeJavaMemShellPluginListOutcome()>>(
        [this, request]()
        {
            return this->DescribeJavaMemShellPluginList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeLicenseOutcome CwpClient::DescribeLicense(const DescribeLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLicenseResponse rsp = DescribeLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLicenseOutcome(rsp);
        else
            return DescribeLicenseOutcome(o.GetError());
    }
    else
    {
        return DescribeLicenseOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLicenseAsync(const DescribeLicenseRequest& request, const DescribeLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLicense(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeLicenseOutcomeCallable CwpClient::DescribeLicenseCallable(const DescribeLicenseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLicenseOutcome()>>(
        [this, request]()
        {
            return this->DescribeLicense(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeLicenseBindListOutcome CwpClient::DescribeLicenseBindList(const DescribeLicenseBindListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLicenseBindList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLicenseBindListResponse rsp = DescribeLicenseBindListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLicenseBindListOutcome(rsp);
        else
            return DescribeLicenseBindListOutcome(o.GetError());
    }
    else
    {
        return DescribeLicenseBindListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLicenseBindListAsync(const DescribeLicenseBindListRequest& request, const DescribeLicenseBindListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLicenseBindList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeLicenseBindListOutcomeCallable CwpClient::DescribeLicenseBindListCallable(const DescribeLicenseBindListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLicenseBindListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLicenseBindList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeLicenseBindScheduleOutcome CwpClient::DescribeLicenseBindSchedule(const DescribeLicenseBindScheduleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLicenseBindSchedule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLicenseBindScheduleResponse rsp = DescribeLicenseBindScheduleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLicenseBindScheduleOutcome(rsp);
        else
            return DescribeLicenseBindScheduleOutcome(o.GetError());
    }
    else
    {
        return DescribeLicenseBindScheduleOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLicenseBindScheduleAsync(const DescribeLicenseBindScheduleRequest& request, const DescribeLicenseBindScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLicenseBindSchedule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeLicenseBindScheduleOutcomeCallable CwpClient::DescribeLicenseBindScheduleCallable(const DescribeLicenseBindScheduleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLicenseBindScheduleOutcome()>>(
        [this, request]()
        {
            return this->DescribeLicenseBindSchedule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeLicenseGeneralOutcome CwpClient::DescribeLicenseGeneral(const DescribeLicenseGeneralRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLicenseGeneral");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLicenseGeneralResponse rsp = DescribeLicenseGeneralResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLicenseGeneralOutcome(rsp);
        else
            return DescribeLicenseGeneralOutcome(o.GetError());
    }
    else
    {
        return DescribeLicenseGeneralOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLicenseGeneralAsync(const DescribeLicenseGeneralRequest& request, const DescribeLicenseGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLicenseGeneral(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeLicenseGeneralOutcomeCallable CwpClient::DescribeLicenseGeneralCallable(const DescribeLicenseGeneralRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLicenseGeneralOutcome()>>(
        [this, request]()
        {
            return this->DescribeLicenseGeneral(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeLicenseListOutcome CwpClient::DescribeLicenseList(const DescribeLicenseListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLicenseList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLicenseListResponse rsp = DescribeLicenseListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLicenseListOutcome(rsp);
        else
            return DescribeLicenseListOutcome(o.GetError());
    }
    else
    {
        return DescribeLicenseListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLicenseListAsync(const DescribeLicenseListRequest& request, const DescribeLicenseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLicenseList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeLicenseListOutcomeCallable CwpClient::DescribeLicenseListCallable(const DescribeLicenseListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLicenseListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLicenseList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeLicenseWhiteConfigOutcome CwpClient::DescribeLicenseWhiteConfig(const DescribeLicenseWhiteConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLicenseWhiteConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLicenseWhiteConfigResponse rsp = DescribeLicenseWhiteConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLicenseWhiteConfigOutcome(rsp);
        else
            return DescribeLicenseWhiteConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeLicenseWhiteConfigOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLicenseWhiteConfigAsync(const DescribeLicenseWhiteConfigRequest& request, const DescribeLicenseWhiteConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLicenseWhiteConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeLicenseWhiteConfigOutcomeCallable CwpClient::DescribeLicenseWhiteConfigCallable(const DescribeLicenseWhiteConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLicenseWhiteConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeLicenseWhiteConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeLogDeliveryKafkaOptionsOutcome CwpClient::DescribeLogDeliveryKafkaOptions(const DescribeLogDeliveryKafkaOptionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogDeliveryKafkaOptions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogDeliveryKafkaOptionsResponse rsp = DescribeLogDeliveryKafkaOptionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogDeliveryKafkaOptionsOutcome(rsp);
        else
            return DescribeLogDeliveryKafkaOptionsOutcome(o.GetError());
    }
    else
    {
        return DescribeLogDeliveryKafkaOptionsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLogDeliveryKafkaOptionsAsync(const DescribeLogDeliveryKafkaOptionsRequest& request, const DescribeLogDeliveryKafkaOptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogDeliveryKafkaOptions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeLogDeliveryKafkaOptionsOutcomeCallable CwpClient::DescribeLogDeliveryKafkaOptionsCallable(const DescribeLogDeliveryKafkaOptionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogDeliveryKafkaOptionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogDeliveryKafkaOptions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeLogExportsOutcome CwpClient::DescribeLogExports(const DescribeLogExportsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogExports");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogExportsResponse rsp = DescribeLogExportsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogExportsOutcome(rsp);
        else
            return DescribeLogExportsOutcome(o.GetError());
    }
    else
    {
        return DescribeLogExportsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLogExportsAsync(const DescribeLogExportsRequest& request, const DescribeLogExportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogExports(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeLogExportsOutcomeCallable CwpClient::DescribeLogExportsCallable(const DescribeLogExportsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogExportsOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogExports(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeLogHistogramOutcome CwpClient::DescribeLogHistogram(const DescribeLogHistogramRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogHistogram");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogHistogramResponse rsp = DescribeLogHistogramResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogHistogramOutcome(rsp);
        else
            return DescribeLogHistogramOutcome(o.GetError());
    }
    else
    {
        return DescribeLogHistogramOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLogHistogramAsync(const DescribeLogHistogramRequest& request, const DescribeLogHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogHistogram(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeLogHistogramOutcomeCallable CwpClient::DescribeLogHistogramCallable(const DescribeLogHistogramRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogHistogramOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogHistogram(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeLogIndexOutcome CwpClient::DescribeLogIndex(const DescribeLogIndexRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogIndexResponse rsp = DescribeLogIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogIndexOutcome(rsp);
        else
            return DescribeLogIndexOutcome(o.GetError());
    }
    else
    {
        return DescribeLogIndexOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLogIndexAsync(const DescribeLogIndexRequest& request, const DescribeLogIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogIndex(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeLogIndexOutcomeCallable CwpClient::DescribeLogIndexCallable(const DescribeLogIndexRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogIndexOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogIndex(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeLogKafkaDeliverInfoOutcome CwpClient::DescribeLogKafkaDeliverInfo(const DescribeLogKafkaDeliverInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogKafkaDeliverInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogKafkaDeliverInfoResponse rsp = DescribeLogKafkaDeliverInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogKafkaDeliverInfoOutcome(rsp);
        else
            return DescribeLogKafkaDeliverInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeLogKafkaDeliverInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLogKafkaDeliverInfoAsync(const DescribeLogKafkaDeliverInfoRequest& request, const DescribeLogKafkaDeliverInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogKafkaDeliverInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeLogKafkaDeliverInfoOutcomeCallable CwpClient::DescribeLogKafkaDeliverInfoCallable(const DescribeLogKafkaDeliverInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogKafkaDeliverInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogKafkaDeliverInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeLogStorageConfigOutcome CwpClient::DescribeLogStorageConfig(const DescribeLogStorageConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogStorageConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogStorageConfigResponse rsp = DescribeLogStorageConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogStorageConfigOutcome(rsp);
        else
            return DescribeLogStorageConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeLogStorageConfigOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLogStorageConfigAsync(const DescribeLogStorageConfigRequest& request, const DescribeLogStorageConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogStorageConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeLogStorageConfigOutcomeCallable CwpClient::DescribeLogStorageConfigCallable(const DescribeLogStorageConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogStorageConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogStorageConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeLogStorageRecordOutcome CwpClient::DescribeLogStorageRecord(const DescribeLogStorageRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogStorageRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogStorageRecordResponse rsp = DescribeLogStorageRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogStorageRecordOutcome(rsp);
        else
            return DescribeLogStorageRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeLogStorageRecordOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLogStorageRecordAsync(const DescribeLogStorageRecordRequest& request, const DescribeLogStorageRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogStorageRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeLogStorageRecordOutcomeCallable CwpClient::DescribeLogStorageRecordCallable(const DescribeLogStorageRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogStorageRecordOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogStorageRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeLogStorageStatisticOutcome CwpClient::DescribeLogStorageStatistic(const DescribeLogStorageStatisticRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogStorageStatistic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogStorageStatisticResponse rsp = DescribeLogStorageStatisticResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogStorageStatisticOutcome(rsp);
        else
            return DescribeLogStorageStatisticOutcome(o.GetError());
    }
    else
    {
        return DescribeLogStorageStatisticOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLogStorageStatisticAsync(const DescribeLogStorageStatisticRequest& request, const DescribeLogStorageStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogStorageStatistic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeLogStorageStatisticOutcomeCallable CwpClient::DescribeLogStorageStatisticCallable(const DescribeLogStorageStatisticRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogStorageStatisticOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogStorageStatistic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeLogTypeOutcome CwpClient::DescribeLogType(const DescribeLogTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogTypeResponse rsp = DescribeLogTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogTypeOutcome(rsp);
        else
            return DescribeLogTypeOutcome(o.GetError());
    }
    else
    {
        return DescribeLogTypeOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLogTypeAsync(const DescribeLogTypeRequest& request, const DescribeLogTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeLogTypeOutcomeCallable CwpClient::DescribeLogTypeCallable(const DescribeLogTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogTypeOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeLoginWhiteCombinedListOutcome CwpClient::DescribeLoginWhiteCombinedList(const DescribeLoginWhiteCombinedListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoginWhiteCombinedList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoginWhiteCombinedListResponse rsp = DescribeLoginWhiteCombinedListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoginWhiteCombinedListOutcome(rsp);
        else
            return DescribeLoginWhiteCombinedListOutcome(o.GetError());
    }
    else
    {
        return DescribeLoginWhiteCombinedListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLoginWhiteCombinedListAsync(const DescribeLoginWhiteCombinedListRequest& request, const DescribeLoginWhiteCombinedListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLoginWhiteCombinedList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeLoginWhiteCombinedListOutcomeCallable CwpClient::DescribeLoginWhiteCombinedListCallable(const DescribeLoginWhiteCombinedListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLoginWhiteCombinedListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLoginWhiteCombinedList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeLoginWhiteHostListOutcome CwpClient::DescribeLoginWhiteHostList(const DescribeLoginWhiteHostListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoginWhiteHostList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoginWhiteHostListResponse rsp = DescribeLoginWhiteHostListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoginWhiteHostListOutcome(rsp);
        else
            return DescribeLoginWhiteHostListOutcome(o.GetError());
    }
    else
    {
        return DescribeLoginWhiteHostListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLoginWhiteHostListAsync(const DescribeLoginWhiteHostListRequest& request, const DescribeLoginWhiteHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLoginWhiteHostList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeLoginWhiteHostListOutcomeCallable CwpClient::DescribeLoginWhiteHostListCallable(const DescribeLoginWhiteHostListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLoginWhiteHostListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLoginWhiteHostList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeLoginWhiteListOutcome CwpClient::DescribeLoginWhiteList(const DescribeLoginWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoginWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoginWhiteListResponse rsp = DescribeLoginWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoginWhiteListOutcome(rsp);
        else
            return DescribeLoginWhiteListOutcome(o.GetError());
    }
    else
    {
        return DescribeLoginWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLoginWhiteListAsync(const DescribeLoginWhiteListRequest& request, const DescribeLoginWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLoginWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeLoginWhiteListOutcomeCallable CwpClient::DescribeLoginWhiteListCallable(const DescribeLoginWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLoginWhiteListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLoginWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeMachineClearHistoryOutcome CwpClient::DescribeMachineClearHistory(const DescribeMachineClearHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineClearHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineClearHistoryResponse rsp = DescribeMachineClearHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineClearHistoryOutcome(rsp);
        else
            return DescribeMachineClearHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineClearHistoryOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMachineClearHistoryAsync(const DescribeMachineClearHistoryRequest& request, const DescribeMachineClearHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMachineClearHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeMachineClearHistoryOutcomeCallable CwpClient::DescribeMachineClearHistoryCallable(const DescribeMachineClearHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMachineClearHistoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeMachineClearHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeMachineDefenseCntOutcome CwpClient::DescribeMachineDefenseCnt(const DescribeMachineDefenseCntRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineDefenseCnt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineDefenseCntResponse rsp = DescribeMachineDefenseCntResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineDefenseCntOutcome(rsp);
        else
            return DescribeMachineDefenseCntOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineDefenseCntOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMachineDefenseCntAsync(const DescribeMachineDefenseCntRequest& request, const DescribeMachineDefenseCntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMachineDefenseCnt(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeMachineDefenseCntOutcomeCallable CwpClient::DescribeMachineDefenseCntCallable(const DescribeMachineDefenseCntRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMachineDefenseCntOutcome()>>(
        [this, request]()
        {
            return this->DescribeMachineDefenseCnt(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeMachineFileTamperRulesOutcome CwpClient::DescribeMachineFileTamperRules(const DescribeMachineFileTamperRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineFileTamperRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineFileTamperRulesResponse rsp = DescribeMachineFileTamperRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineFileTamperRulesOutcome(rsp);
        else
            return DescribeMachineFileTamperRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineFileTamperRulesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMachineFileTamperRulesAsync(const DescribeMachineFileTamperRulesRequest& request, const DescribeMachineFileTamperRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMachineFileTamperRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeMachineFileTamperRulesOutcomeCallable CwpClient::DescribeMachineFileTamperRulesCallable(const DescribeMachineFileTamperRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMachineFileTamperRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeMachineFileTamperRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeMachineGeneralOutcome CwpClient::DescribeMachineGeneral(const DescribeMachineGeneralRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineGeneral");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineGeneralResponse rsp = DescribeMachineGeneralResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineGeneralOutcome(rsp);
        else
            return DescribeMachineGeneralOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineGeneralOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMachineGeneralAsync(const DescribeMachineGeneralRequest& request, const DescribeMachineGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMachineGeneral(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeMachineGeneralOutcomeCallable CwpClient::DescribeMachineGeneralCallable(const DescribeMachineGeneralRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMachineGeneralOutcome()>>(
        [this, request]()
        {
            return this->DescribeMachineGeneral(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeMachineInfoOutcome CwpClient::DescribeMachineInfo(const DescribeMachineInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineInfoResponse rsp = DescribeMachineInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineInfoOutcome(rsp);
        else
            return DescribeMachineInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMachineInfoAsync(const DescribeMachineInfoRequest& request, const DescribeMachineInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMachineInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeMachineInfoOutcomeCallable CwpClient::DescribeMachineInfoCallable(const DescribeMachineInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMachineInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeMachineInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeMachineLicenseDetailOutcome CwpClient::DescribeMachineLicenseDetail(const DescribeMachineLicenseDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineLicenseDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineLicenseDetailResponse rsp = DescribeMachineLicenseDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineLicenseDetailOutcome(rsp);
        else
            return DescribeMachineLicenseDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineLicenseDetailOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMachineLicenseDetailAsync(const DescribeMachineLicenseDetailRequest& request, const DescribeMachineLicenseDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMachineLicenseDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeMachineLicenseDetailOutcomeCallable CwpClient::DescribeMachineLicenseDetailCallable(const DescribeMachineLicenseDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMachineLicenseDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeMachineLicenseDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeMachineListOutcome CwpClient::DescribeMachineList(const DescribeMachineListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineListResponse rsp = DescribeMachineListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineListOutcome(rsp);
        else
            return DescribeMachineListOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMachineListAsync(const DescribeMachineListRequest& request, const DescribeMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMachineList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeMachineListOutcomeCallable CwpClient::DescribeMachineListCallable(const DescribeMachineListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMachineListOutcome()>>(
        [this, request]()
        {
            return this->DescribeMachineList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeMachineOsListOutcome CwpClient::DescribeMachineOsList(const DescribeMachineOsListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineOsList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineOsListResponse rsp = DescribeMachineOsListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineOsListOutcome(rsp);
        else
            return DescribeMachineOsListOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineOsListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMachineOsListAsync(const DescribeMachineOsListRequest& request, const DescribeMachineOsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMachineOsList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeMachineOsListOutcomeCallable CwpClient::DescribeMachineOsListCallable(const DescribeMachineOsListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMachineOsListOutcome()>>(
        [this, request]()
        {
            return this->DescribeMachineOsList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeMachineRegionListOutcome CwpClient::DescribeMachineRegionList(const DescribeMachineRegionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineRegionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineRegionListResponse rsp = DescribeMachineRegionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineRegionListOutcome(rsp);
        else
            return DescribeMachineRegionListOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineRegionListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMachineRegionListAsync(const DescribeMachineRegionListRequest& request, const DescribeMachineRegionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMachineRegionList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeMachineRegionListOutcomeCallable CwpClient::DescribeMachineRegionListCallable(const DescribeMachineRegionListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMachineRegionListOutcome()>>(
        [this, request]()
        {
            return this->DescribeMachineRegionList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeMachineRegionsOutcome CwpClient::DescribeMachineRegions(const DescribeMachineRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineRegionsResponse rsp = DescribeMachineRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineRegionsOutcome(rsp);
        else
            return DescribeMachineRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineRegionsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMachineRegionsAsync(const DescribeMachineRegionsRequest& request, const DescribeMachineRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMachineRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeMachineRegionsOutcomeCallable CwpClient::DescribeMachineRegionsCallable(const DescribeMachineRegionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMachineRegionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMachineRegions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeMachineRiskCntOutcome CwpClient::DescribeMachineRiskCnt(const DescribeMachineRiskCntRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineRiskCnt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineRiskCntResponse rsp = DescribeMachineRiskCntResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineRiskCntOutcome(rsp);
        else
            return DescribeMachineRiskCntOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineRiskCntOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMachineRiskCntAsync(const DescribeMachineRiskCntRequest& request, const DescribeMachineRiskCntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMachineRiskCnt(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeMachineRiskCntOutcomeCallable CwpClient::DescribeMachineRiskCntCallable(const DescribeMachineRiskCntRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMachineRiskCntOutcome()>>(
        [this, request]()
        {
            return this->DescribeMachineRiskCnt(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeMachineSnapshotOutcome CwpClient::DescribeMachineSnapshot(const DescribeMachineSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineSnapshotResponse rsp = DescribeMachineSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineSnapshotOutcome(rsp);
        else
            return DescribeMachineSnapshotOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineSnapshotOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMachineSnapshotAsync(const DescribeMachineSnapshotRequest& request, const DescribeMachineSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMachineSnapshot(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeMachineSnapshotOutcomeCallable CwpClient::DescribeMachineSnapshotCallable(const DescribeMachineSnapshotRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMachineSnapshotOutcome()>>(
        [this, request]()
        {
            return this->DescribeMachineSnapshot(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeMachinesOutcome CwpClient::DescribeMachines(const DescribeMachinesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachinesResponse rsp = DescribeMachinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachinesOutcome(rsp);
        else
            return DescribeMachinesOutcome(o.GetError());
    }
    else
    {
        return DescribeMachinesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMachinesAsync(const DescribeMachinesRequest& request, const DescribeMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMachines(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeMachinesOutcomeCallable CwpClient::DescribeMachinesCallable(const DescribeMachinesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMachinesOutcome()>>(
        [this, request]()
        {
            return this->DescribeMachines(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeMachinesSimpleOutcome CwpClient::DescribeMachinesSimple(const DescribeMachinesSimpleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachinesSimple");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachinesSimpleResponse rsp = DescribeMachinesSimpleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachinesSimpleOutcome(rsp);
        else
            return DescribeMachinesSimpleOutcome(o.GetError());
    }
    else
    {
        return DescribeMachinesSimpleOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMachinesSimpleAsync(const DescribeMachinesSimpleRequest& request, const DescribeMachinesSimpleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMachinesSimple(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeMachinesSimpleOutcomeCallable CwpClient::DescribeMachinesSimpleCallable(const DescribeMachinesSimpleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMachinesSimpleOutcome()>>(
        [this, request]()
        {
            return this->DescribeMachinesSimple(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeMalWareListOutcome CwpClient::DescribeMalWareList(const DescribeMalWareListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMalWareList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMalWareListResponse rsp = DescribeMalWareListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMalWareListOutcome(rsp);
        else
            return DescribeMalWareListOutcome(o.GetError());
    }
    else
    {
        return DescribeMalWareListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMalWareListAsync(const DescribeMalWareListRequest& request, const DescribeMalWareListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMalWareList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeMalWareListOutcomeCallable CwpClient::DescribeMalWareListCallable(const DescribeMalWareListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMalWareListOutcome()>>(
        [this, request]()
        {
            return this->DescribeMalWareList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeMaliciousRequestWhiteListOutcome CwpClient::DescribeMaliciousRequestWhiteList(const DescribeMaliciousRequestWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMaliciousRequestWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMaliciousRequestWhiteListResponse rsp = DescribeMaliciousRequestWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMaliciousRequestWhiteListOutcome(rsp);
        else
            return DescribeMaliciousRequestWhiteListOutcome(o.GetError());
    }
    else
    {
        return DescribeMaliciousRequestWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMaliciousRequestWhiteListAsync(const DescribeMaliciousRequestWhiteListRequest& request, const DescribeMaliciousRequestWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMaliciousRequestWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeMaliciousRequestWhiteListOutcomeCallable CwpClient::DescribeMaliciousRequestWhiteListCallable(const DescribeMaliciousRequestWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMaliciousRequestWhiteListOutcome()>>(
        [this, request]()
        {
            return this->DescribeMaliciousRequestWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeMalwareFileOutcome CwpClient::DescribeMalwareFile(const DescribeMalwareFileRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMalwareFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMalwareFileResponse rsp = DescribeMalwareFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMalwareFileOutcome(rsp);
        else
            return DescribeMalwareFileOutcome(o.GetError());
    }
    else
    {
        return DescribeMalwareFileOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMalwareFileAsync(const DescribeMalwareFileRequest& request, const DescribeMalwareFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMalwareFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeMalwareFileOutcomeCallable CwpClient::DescribeMalwareFileCallable(const DescribeMalwareFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMalwareFileOutcome()>>(
        [this, request]()
        {
            return this->DescribeMalwareFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeMalwareInfoOutcome CwpClient::DescribeMalwareInfo(const DescribeMalwareInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMalwareInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMalwareInfoResponse rsp = DescribeMalwareInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMalwareInfoOutcome(rsp);
        else
            return DescribeMalwareInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeMalwareInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMalwareInfoAsync(const DescribeMalwareInfoRequest& request, const DescribeMalwareInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMalwareInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeMalwareInfoOutcomeCallable CwpClient::DescribeMalwareInfoCallable(const DescribeMalwareInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMalwareInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeMalwareInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeMalwareRiskOverviewOutcome CwpClient::DescribeMalwareRiskOverview(const DescribeMalwareRiskOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMalwareRiskOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMalwareRiskOverviewResponse rsp = DescribeMalwareRiskOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMalwareRiskOverviewOutcome(rsp);
        else
            return DescribeMalwareRiskOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeMalwareRiskOverviewOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMalwareRiskOverviewAsync(const DescribeMalwareRiskOverviewRequest& request, const DescribeMalwareRiskOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMalwareRiskOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeMalwareRiskOverviewOutcomeCallable CwpClient::DescribeMalwareRiskOverviewCallable(const DescribeMalwareRiskOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMalwareRiskOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeMalwareRiskOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeMalwareRiskWarningOutcome CwpClient::DescribeMalwareRiskWarning(const DescribeMalwareRiskWarningRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMalwareRiskWarning");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMalwareRiskWarningResponse rsp = DescribeMalwareRiskWarningResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMalwareRiskWarningOutcome(rsp);
        else
            return DescribeMalwareRiskWarningOutcome(o.GetError());
    }
    else
    {
        return DescribeMalwareRiskWarningOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMalwareRiskWarningAsync(const DescribeMalwareRiskWarningRequest& request, const DescribeMalwareRiskWarningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMalwareRiskWarning(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeMalwareRiskWarningOutcomeCallable CwpClient::DescribeMalwareRiskWarningCallable(const DescribeMalwareRiskWarningRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMalwareRiskWarningOutcome()>>(
        [this, request]()
        {
            return this->DescribeMalwareRiskWarning(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeMalwareTimingScanSettingOutcome CwpClient::DescribeMalwareTimingScanSetting(const DescribeMalwareTimingScanSettingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMalwareTimingScanSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMalwareTimingScanSettingResponse rsp = DescribeMalwareTimingScanSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMalwareTimingScanSettingOutcome(rsp);
        else
            return DescribeMalwareTimingScanSettingOutcome(o.GetError());
    }
    else
    {
        return DescribeMalwareTimingScanSettingOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMalwareTimingScanSettingAsync(const DescribeMalwareTimingScanSettingRequest& request, const DescribeMalwareTimingScanSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMalwareTimingScanSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeMalwareTimingScanSettingOutcomeCallable CwpClient::DescribeMalwareTimingScanSettingCallable(const DescribeMalwareTimingScanSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMalwareTimingScanSettingOutcome()>>(
        [this, request]()
        {
            return this->DescribeMalwareTimingScanSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeMalwareWhiteListOutcome CwpClient::DescribeMalwareWhiteList(const DescribeMalwareWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMalwareWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMalwareWhiteListResponse rsp = DescribeMalwareWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMalwareWhiteListOutcome(rsp);
        else
            return DescribeMalwareWhiteListOutcome(o.GetError());
    }
    else
    {
        return DescribeMalwareWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMalwareWhiteListAsync(const DescribeMalwareWhiteListRequest& request, const DescribeMalwareWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMalwareWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeMalwareWhiteListOutcomeCallable CwpClient::DescribeMalwareWhiteListCallable(const DescribeMalwareWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMalwareWhiteListOutcome()>>(
        [this, request]()
        {
            return this->DescribeMalwareWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeMalwareWhiteListAffectListOutcome CwpClient::DescribeMalwareWhiteListAffectList(const DescribeMalwareWhiteListAffectListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMalwareWhiteListAffectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMalwareWhiteListAffectListResponse rsp = DescribeMalwareWhiteListAffectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMalwareWhiteListAffectListOutcome(rsp);
        else
            return DescribeMalwareWhiteListAffectListOutcome(o.GetError());
    }
    else
    {
        return DescribeMalwareWhiteListAffectListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMalwareWhiteListAffectListAsync(const DescribeMalwareWhiteListAffectListRequest& request, const DescribeMalwareWhiteListAffectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMalwareWhiteListAffectList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeMalwareWhiteListAffectListOutcomeCallable CwpClient::DescribeMalwareWhiteListAffectListCallable(const DescribeMalwareWhiteListAffectListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMalwareWhiteListAffectListOutcome()>>(
        [this, request]()
        {
            return this->DescribeMalwareWhiteListAffectList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeMonthInspectionReportOutcome CwpClient::DescribeMonthInspectionReport(const DescribeMonthInspectionReportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMonthInspectionReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMonthInspectionReportResponse rsp = DescribeMonthInspectionReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMonthInspectionReportOutcome(rsp);
        else
            return DescribeMonthInspectionReportOutcome(o.GetError());
    }
    else
    {
        return DescribeMonthInspectionReportOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMonthInspectionReportAsync(const DescribeMonthInspectionReportRequest& request, const DescribeMonthInspectionReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMonthInspectionReport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeMonthInspectionReportOutcomeCallable CwpClient::DescribeMonthInspectionReportCallable(const DescribeMonthInspectionReportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMonthInspectionReportOutcome()>>(
        [this, request]()
        {
            return this->DescribeMonthInspectionReport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeNetAttackSettingOutcome CwpClient::DescribeNetAttackSetting(const DescribeNetAttackSettingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNetAttackSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNetAttackSettingResponse rsp = DescribeNetAttackSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNetAttackSettingOutcome(rsp);
        else
            return DescribeNetAttackSettingOutcome(o.GetError());
    }
    else
    {
        return DescribeNetAttackSettingOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeNetAttackSettingAsync(const DescribeNetAttackSettingRequest& request, const DescribeNetAttackSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNetAttackSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeNetAttackSettingOutcomeCallable CwpClient::DescribeNetAttackSettingCallable(const DescribeNetAttackSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNetAttackSettingOutcome()>>(
        [this, request]()
        {
            return this->DescribeNetAttackSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeNetAttackWhiteListOutcome CwpClient::DescribeNetAttackWhiteList(const DescribeNetAttackWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNetAttackWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNetAttackWhiteListResponse rsp = DescribeNetAttackWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNetAttackWhiteListOutcome(rsp);
        else
            return DescribeNetAttackWhiteListOutcome(o.GetError());
    }
    else
    {
        return DescribeNetAttackWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeNetAttackWhiteListAsync(const DescribeNetAttackWhiteListRequest& request, const DescribeNetAttackWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNetAttackWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeNetAttackWhiteListOutcomeCallable CwpClient::DescribeNetAttackWhiteListCallable(const DescribeNetAttackWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNetAttackWhiteListOutcome()>>(
        [this, request]()
        {
            return this->DescribeNetAttackWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeOpenPortStatisticsOutcome CwpClient::DescribeOpenPortStatistics(const DescribeOpenPortStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOpenPortStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOpenPortStatisticsResponse rsp = DescribeOpenPortStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOpenPortStatisticsOutcome(rsp);
        else
            return DescribeOpenPortStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeOpenPortStatisticsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeOpenPortStatisticsAsync(const DescribeOpenPortStatisticsRequest& request, const DescribeOpenPortStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOpenPortStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeOpenPortStatisticsOutcomeCallable CwpClient::DescribeOpenPortStatisticsCallable(const DescribeOpenPortStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOpenPortStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeOpenPortStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeOverviewStatisticsOutcome CwpClient::DescribeOverviewStatistics(const DescribeOverviewStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOverviewStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOverviewStatisticsResponse rsp = DescribeOverviewStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOverviewStatisticsOutcome(rsp);
        else
            return DescribeOverviewStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeOverviewStatisticsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeOverviewStatisticsAsync(const DescribeOverviewStatisticsRequest& request, const DescribeOverviewStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOverviewStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeOverviewStatisticsOutcomeCallable CwpClient::DescribeOverviewStatisticsCallable(const DescribeOverviewStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOverviewStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeOverviewStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribePrivilegeEventInfoOutcome CwpClient::DescribePrivilegeEventInfo(const DescribePrivilegeEventInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrivilegeEventInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrivilegeEventInfoResponse rsp = DescribePrivilegeEventInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrivilegeEventInfoOutcome(rsp);
        else
            return DescribePrivilegeEventInfoOutcome(o.GetError());
    }
    else
    {
        return DescribePrivilegeEventInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribePrivilegeEventInfoAsync(const DescribePrivilegeEventInfoRequest& request, const DescribePrivilegeEventInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrivilegeEventInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribePrivilegeEventInfoOutcomeCallable CwpClient::DescribePrivilegeEventInfoCallable(const DescribePrivilegeEventInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrivilegeEventInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribePrivilegeEventInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribePrivilegeEventsOutcome CwpClient::DescribePrivilegeEvents(const DescribePrivilegeEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrivilegeEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrivilegeEventsResponse rsp = DescribePrivilegeEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrivilegeEventsOutcome(rsp);
        else
            return DescribePrivilegeEventsOutcome(o.GetError());
    }
    else
    {
        return DescribePrivilegeEventsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribePrivilegeEventsAsync(const DescribePrivilegeEventsRequest& request, const DescribePrivilegeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrivilegeEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribePrivilegeEventsOutcomeCallable CwpClient::DescribePrivilegeEventsCallable(const DescribePrivilegeEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrivilegeEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribePrivilegeEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribePrivilegeRulesOutcome CwpClient::DescribePrivilegeRules(const DescribePrivilegeRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrivilegeRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrivilegeRulesResponse rsp = DescribePrivilegeRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrivilegeRulesOutcome(rsp);
        else
            return DescribePrivilegeRulesOutcome(o.GetError());
    }
    else
    {
        return DescribePrivilegeRulesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribePrivilegeRulesAsync(const DescribePrivilegeRulesRequest& request, const DescribePrivilegeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrivilegeRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribePrivilegeRulesOutcomeCallable CwpClient::DescribePrivilegeRulesCallable(const DescribePrivilegeRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrivilegeRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribePrivilegeRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeProVersionInfoOutcome CwpClient::DescribeProVersionInfo(const DescribeProVersionInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProVersionInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProVersionInfoResponse rsp = DescribeProVersionInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProVersionInfoOutcome(rsp);
        else
            return DescribeProVersionInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeProVersionInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeProVersionInfoAsync(const DescribeProVersionInfoRequest& request, const DescribeProVersionInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProVersionInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeProVersionInfoOutcomeCallable CwpClient::DescribeProVersionInfoCallable(const DescribeProVersionInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProVersionInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeProVersionInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeProVersionStatusOutcome CwpClient::DescribeProVersionStatus(const DescribeProVersionStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProVersionStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProVersionStatusResponse rsp = DescribeProVersionStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProVersionStatusOutcome(rsp);
        else
            return DescribeProVersionStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeProVersionStatusOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeProVersionStatusAsync(const DescribeProVersionStatusRequest& request, const DescribeProVersionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProVersionStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeProVersionStatusOutcomeCallable CwpClient::DescribeProVersionStatusCallable(const DescribeProVersionStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProVersionStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeProVersionStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeProcessStatisticsOutcome CwpClient::DescribeProcessStatistics(const DescribeProcessStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProcessStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProcessStatisticsResponse rsp = DescribeProcessStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProcessStatisticsOutcome(rsp);
        else
            return DescribeProcessStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeProcessStatisticsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeProcessStatisticsAsync(const DescribeProcessStatisticsRequest& request, const DescribeProcessStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProcessStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeProcessStatisticsOutcomeCallable CwpClient::DescribeProcessStatisticsCallable(const DescribeProcessStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProcessStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeProcessStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeProductStatusOutcome CwpClient::DescribeProductStatus(const DescribeProductStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductStatusResponse rsp = DescribeProductStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductStatusOutcome(rsp);
        else
            return DescribeProductStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeProductStatusOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeProductStatusAsync(const DescribeProductStatusRequest& request, const DescribeProductStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProductStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeProductStatusOutcomeCallable CwpClient::DescribeProductStatusCallable(const DescribeProductStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProductStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeProductStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeProtectDirListOutcome CwpClient::DescribeProtectDirList(const DescribeProtectDirListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProtectDirList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProtectDirListResponse rsp = DescribeProtectDirListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProtectDirListOutcome(rsp);
        else
            return DescribeProtectDirListOutcome(o.GetError());
    }
    else
    {
        return DescribeProtectDirListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeProtectDirListAsync(const DescribeProtectDirListRequest& request, const DescribeProtectDirListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProtectDirList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeProtectDirListOutcomeCallable CwpClient::DescribeProtectDirListCallable(const DescribeProtectDirListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProtectDirListOutcome()>>(
        [this, request]()
        {
            return this->DescribeProtectDirList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeProtectDirRelatedServerOutcome CwpClient::DescribeProtectDirRelatedServer(const DescribeProtectDirRelatedServerRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProtectDirRelatedServer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProtectDirRelatedServerResponse rsp = DescribeProtectDirRelatedServerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProtectDirRelatedServerOutcome(rsp);
        else
            return DescribeProtectDirRelatedServerOutcome(o.GetError());
    }
    else
    {
        return DescribeProtectDirRelatedServerOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeProtectDirRelatedServerAsync(const DescribeProtectDirRelatedServerRequest& request, const DescribeProtectDirRelatedServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProtectDirRelatedServer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeProtectDirRelatedServerOutcomeCallable CwpClient::DescribeProtectDirRelatedServerCallable(const DescribeProtectDirRelatedServerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProtectDirRelatedServerOutcome()>>(
        [this, request]()
        {
            return this->DescribeProtectDirRelatedServer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeProtectNetListOutcome CwpClient::DescribeProtectNetList(const DescribeProtectNetListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProtectNetList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProtectNetListResponse rsp = DescribeProtectNetListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProtectNetListOutcome(rsp);
        else
            return DescribeProtectNetListOutcome(o.GetError());
    }
    else
    {
        return DescribeProtectNetListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeProtectNetListAsync(const DescribeProtectNetListRequest& request, const DescribeProtectNetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProtectNetList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeProtectNetListOutcomeCallable CwpClient::DescribeProtectNetListCallable(const DescribeProtectNetListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProtectNetListOutcome()>>(
        [this, request]()
        {
            return this->DescribeProtectNetList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribePublicProxyInstallCommandOutcome CwpClient::DescribePublicProxyInstallCommand(const DescribePublicProxyInstallCommandRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublicProxyInstallCommand");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublicProxyInstallCommandResponse rsp = DescribePublicProxyInstallCommandResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublicProxyInstallCommandOutcome(rsp);
        else
            return DescribePublicProxyInstallCommandOutcome(o.GetError());
    }
    else
    {
        return DescribePublicProxyInstallCommandOutcome(outcome.GetError());
    }
}

void CwpClient::DescribePublicProxyInstallCommandAsync(const DescribePublicProxyInstallCommandRequest& request, const DescribePublicProxyInstallCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePublicProxyInstallCommand(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribePublicProxyInstallCommandOutcomeCallable CwpClient::DescribePublicProxyInstallCommandCallable(const DescribePublicProxyInstallCommandRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePublicProxyInstallCommandOutcome()>>(
        [this, request]()
        {
            return this->DescribePublicProxyInstallCommand(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeRansomDefenseBackupListOutcome CwpClient::DescribeRansomDefenseBackupList(const DescribeRansomDefenseBackupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRansomDefenseBackupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRansomDefenseBackupListResponse rsp = DescribeRansomDefenseBackupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRansomDefenseBackupListOutcome(rsp);
        else
            return DescribeRansomDefenseBackupListOutcome(o.GetError());
    }
    else
    {
        return DescribeRansomDefenseBackupListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRansomDefenseBackupListAsync(const DescribeRansomDefenseBackupListRequest& request, const DescribeRansomDefenseBackupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRansomDefenseBackupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeRansomDefenseBackupListOutcomeCallable CwpClient::DescribeRansomDefenseBackupListCallable(const DescribeRansomDefenseBackupListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRansomDefenseBackupListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRansomDefenseBackupList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeRansomDefenseEventsListOutcome CwpClient::DescribeRansomDefenseEventsList(const DescribeRansomDefenseEventsListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRansomDefenseEventsList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRansomDefenseEventsListResponse rsp = DescribeRansomDefenseEventsListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRansomDefenseEventsListOutcome(rsp);
        else
            return DescribeRansomDefenseEventsListOutcome(o.GetError());
    }
    else
    {
        return DescribeRansomDefenseEventsListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRansomDefenseEventsListAsync(const DescribeRansomDefenseEventsListRequest& request, const DescribeRansomDefenseEventsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRansomDefenseEventsList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeRansomDefenseEventsListOutcomeCallable CwpClient::DescribeRansomDefenseEventsListCallable(const DescribeRansomDefenseEventsListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRansomDefenseEventsListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRansomDefenseEventsList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeRansomDefenseMachineListOutcome CwpClient::DescribeRansomDefenseMachineList(const DescribeRansomDefenseMachineListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRansomDefenseMachineList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRansomDefenseMachineListResponse rsp = DescribeRansomDefenseMachineListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRansomDefenseMachineListOutcome(rsp);
        else
            return DescribeRansomDefenseMachineListOutcome(o.GetError());
    }
    else
    {
        return DescribeRansomDefenseMachineListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRansomDefenseMachineListAsync(const DescribeRansomDefenseMachineListRequest& request, const DescribeRansomDefenseMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRansomDefenseMachineList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeRansomDefenseMachineListOutcomeCallable CwpClient::DescribeRansomDefenseMachineListCallable(const DescribeRansomDefenseMachineListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRansomDefenseMachineListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRansomDefenseMachineList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeRansomDefenseMachineStrategyInfoOutcome CwpClient::DescribeRansomDefenseMachineStrategyInfo(const DescribeRansomDefenseMachineStrategyInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRansomDefenseMachineStrategyInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRansomDefenseMachineStrategyInfoResponse rsp = DescribeRansomDefenseMachineStrategyInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRansomDefenseMachineStrategyInfoOutcome(rsp);
        else
            return DescribeRansomDefenseMachineStrategyInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeRansomDefenseMachineStrategyInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRansomDefenseMachineStrategyInfoAsync(const DescribeRansomDefenseMachineStrategyInfoRequest& request, const DescribeRansomDefenseMachineStrategyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRansomDefenseMachineStrategyInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeRansomDefenseMachineStrategyInfoOutcomeCallable CwpClient::DescribeRansomDefenseMachineStrategyInfoCallable(const DescribeRansomDefenseMachineStrategyInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRansomDefenseMachineStrategyInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeRansomDefenseMachineStrategyInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeRansomDefenseRollBackTaskListOutcome CwpClient::DescribeRansomDefenseRollBackTaskList(const DescribeRansomDefenseRollBackTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRansomDefenseRollBackTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRansomDefenseRollBackTaskListResponse rsp = DescribeRansomDefenseRollBackTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRansomDefenseRollBackTaskListOutcome(rsp);
        else
            return DescribeRansomDefenseRollBackTaskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRansomDefenseRollBackTaskListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRansomDefenseRollBackTaskListAsync(const DescribeRansomDefenseRollBackTaskListRequest& request, const DescribeRansomDefenseRollBackTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRansomDefenseRollBackTaskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeRansomDefenseRollBackTaskListOutcomeCallable CwpClient::DescribeRansomDefenseRollBackTaskListCallable(const DescribeRansomDefenseRollBackTaskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRansomDefenseRollBackTaskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRansomDefenseRollBackTaskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeRansomDefenseStateOutcome CwpClient::DescribeRansomDefenseState(const DescribeRansomDefenseStateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRansomDefenseState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRansomDefenseStateResponse rsp = DescribeRansomDefenseStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRansomDefenseStateOutcome(rsp);
        else
            return DescribeRansomDefenseStateOutcome(o.GetError());
    }
    else
    {
        return DescribeRansomDefenseStateOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRansomDefenseStateAsync(const DescribeRansomDefenseStateRequest& request, const DescribeRansomDefenseStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRansomDefenseState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeRansomDefenseStateOutcomeCallable CwpClient::DescribeRansomDefenseStateCallable(const DescribeRansomDefenseStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRansomDefenseStateOutcome()>>(
        [this, request]()
        {
            return this->DescribeRansomDefenseState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeRansomDefenseStrategyDetailOutcome CwpClient::DescribeRansomDefenseStrategyDetail(const DescribeRansomDefenseStrategyDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRansomDefenseStrategyDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRansomDefenseStrategyDetailResponse rsp = DescribeRansomDefenseStrategyDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRansomDefenseStrategyDetailOutcome(rsp);
        else
            return DescribeRansomDefenseStrategyDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeRansomDefenseStrategyDetailOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRansomDefenseStrategyDetailAsync(const DescribeRansomDefenseStrategyDetailRequest& request, const DescribeRansomDefenseStrategyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRansomDefenseStrategyDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeRansomDefenseStrategyDetailOutcomeCallable CwpClient::DescribeRansomDefenseStrategyDetailCallable(const DescribeRansomDefenseStrategyDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRansomDefenseStrategyDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeRansomDefenseStrategyDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeRansomDefenseStrategyListOutcome CwpClient::DescribeRansomDefenseStrategyList(const DescribeRansomDefenseStrategyListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRansomDefenseStrategyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRansomDefenseStrategyListResponse rsp = DescribeRansomDefenseStrategyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRansomDefenseStrategyListOutcome(rsp);
        else
            return DescribeRansomDefenseStrategyListOutcome(o.GetError());
    }
    else
    {
        return DescribeRansomDefenseStrategyListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRansomDefenseStrategyListAsync(const DescribeRansomDefenseStrategyListRequest& request, const DescribeRansomDefenseStrategyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRansomDefenseStrategyList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeRansomDefenseStrategyListOutcomeCallable CwpClient::DescribeRansomDefenseStrategyListCallable(const DescribeRansomDefenseStrategyListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRansomDefenseStrategyListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRansomDefenseStrategyList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeRansomDefenseStrategyMachinesOutcome CwpClient::DescribeRansomDefenseStrategyMachines(const DescribeRansomDefenseStrategyMachinesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRansomDefenseStrategyMachines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRansomDefenseStrategyMachinesResponse rsp = DescribeRansomDefenseStrategyMachinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRansomDefenseStrategyMachinesOutcome(rsp);
        else
            return DescribeRansomDefenseStrategyMachinesOutcome(o.GetError());
    }
    else
    {
        return DescribeRansomDefenseStrategyMachinesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRansomDefenseStrategyMachinesAsync(const DescribeRansomDefenseStrategyMachinesRequest& request, const DescribeRansomDefenseStrategyMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRansomDefenseStrategyMachines(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeRansomDefenseStrategyMachinesOutcomeCallable CwpClient::DescribeRansomDefenseStrategyMachinesCallable(const DescribeRansomDefenseStrategyMachinesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRansomDefenseStrategyMachinesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRansomDefenseStrategyMachines(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeRansomDefenseTrendOutcome CwpClient::DescribeRansomDefenseTrend(const DescribeRansomDefenseTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRansomDefenseTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRansomDefenseTrendResponse rsp = DescribeRansomDefenseTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRansomDefenseTrendOutcome(rsp);
        else
            return DescribeRansomDefenseTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeRansomDefenseTrendOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRansomDefenseTrendAsync(const DescribeRansomDefenseTrendRequest& request, const DescribeRansomDefenseTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRansomDefenseTrend(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeRansomDefenseTrendOutcomeCallable CwpClient::DescribeRansomDefenseTrendCallable(const DescribeRansomDefenseTrendRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRansomDefenseTrendOutcome()>>(
        [this, request]()
        {
            return this->DescribeRansomDefenseTrend(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeRaspMaxCpuOutcome CwpClient::DescribeRaspMaxCpu(const DescribeRaspMaxCpuRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRaspMaxCpu");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRaspMaxCpuResponse rsp = DescribeRaspMaxCpuResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRaspMaxCpuOutcome(rsp);
        else
            return DescribeRaspMaxCpuOutcome(o.GetError());
    }
    else
    {
        return DescribeRaspMaxCpuOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRaspMaxCpuAsync(const DescribeRaspMaxCpuRequest& request, const DescribeRaspMaxCpuAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRaspMaxCpu(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeRaspMaxCpuOutcomeCallable CwpClient::DescribeRaspMaxCpuCallable(const DescribeRaspMaxCpuRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRaspMaxCpuOutcome()>>(
        [this, request]()
        {
            return this->DescribeRaspMaxCpu(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeRaspRuleVulsOutcome CwpClient::DescribeRaspRuleVuls(const DescribeRaspRuleVulsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRaspRuleVuls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRaspRuleVulsResponse rsp = DescribeRaspRuleVulsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRaspRuleVulsOutcome(rsp);
        else
            return DescribeRaspRuleVulsOutcome(o.GetError());
    }
    else
    {
        return DescribeRaspRuleVulsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRaspRuleVulsAsync(const DescribeRaspRuleVulsRequest& request, const DescribeRaspRuleVulsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRaspRuleVuls(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeRaspRuleVulsOutcomeCallable CwpClient::DescribeRaspRuleVulsCallable(const DescribeRaspRuleVulsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRaspRuleVulsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRaspRuleVuls(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeRaspRulesOutcome CwpClient::DescribeRaspRules(const DescribeRaspRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRaspRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRaspRulesResponse rsp = DescribeRaspRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRaspRulesOutcome(rsp);
        else
            return DescribeRaspRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeRaspRulesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRaspRulesAsync(const DescribeRaspRulesRequest& request, const DescribeRaspRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRaspRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeRaspRulesOutcomeCallable CwpClient::DescribeRaspRulesCallable(const DescribeRaspRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRaspRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRaspRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeRecommendedProtectCpuOutcome CwpClient::DescribeRecommendedProtectCpu(const DescribeRecommendedProtectCpuRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecommendedProtectCpu");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecommendedProtectCpuResponse rsp = DescribeRecommendedProtectCpuResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecommendedProtectCpuOutcome(rsp);
        else
            return DescribeRecommendedProtectCpuOutcome(o.GetError());
    }
    else
    {
        return DescribeRecommendedProtectCpuOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRecommendedProtectCpuAsync(const DescribeRecommendedProtectCpuRequest& request, const DescribeRecommendedProtectCpuAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecommendedProtectCpu(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeRecommendedProtectCpuOutcomeCallable CwpClient::DescribeRecommendedProtectCpuCallable(const DescribeRecommendedProtectCpuRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecommendedProtectCpuOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecommendedProtectCpu(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeReverseShellEventInfoOutcome CwpClient::DescribeReverseShellEventInfo(const DescribeReverseShellEventInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReverseShellEventInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReverseShellEventInfoResponse rsp = DescribeReverseShellEventInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReverseShellEventInfoOutcome(rsp);
        else
            return DescribeReverseShellEventInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeReverseShellEventInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeReverseShellEventInfoAsync(const DescribeReverseShellEventInfoRequest& request, const DescribeReverseShellEventInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReverseShellEventInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeReverseShellEventInfoOutcomeCallable CwpClient::DescribeReverseShellEventInfoCallable(const DescribeReverseShellEventInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReverseShellEventInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeReverseShellEventInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeReverseShellEventsOutcome CwpClient::DescribeReverseShellEvents(const DescribeReverseShellEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReverseShellEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReverseShellEventsResponse rsp = DescribeReverseShellEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReverseShellEventsOutcome(rsp);
        else
            return DescribeReverseShellEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeReverseShellEventsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeReverseShellEventsAsync(const DescribeReverseShellEventsRequest& request, const DescribeReverseShellEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReverseShellEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeReverseShellEventsOutcomeCallable CwpClient::DescribeReverseShellEventsCallable(const DescribeReverseShellEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReverseShellEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeReverseShellEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeReverseShellRulesOutcome CwpClient::DescribeReverseShellRules(const DescribeReverseShellRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReverseShellRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReverseShellRulesResponse rsp = DescribeReverseShellRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReverseShellRulesOutcome(rsp);
        else
            return DescribeReverseShellRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeReverseShellRulesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeReverseShellRulesAsync(const DescribeReverseShellRulesRequest& request, const DescribeReverseShellRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReverseShellRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeReverseShellRulesOutcomeCallable CwpClient::DescribeReverseShellRulesCallable(const DescribeReverseShellRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReverseShellRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeReverseShellRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeRiskBatchStatusOutcome CwpClient::DescribeRiskBatchStatus(const DescribeRiskBatchStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskBatchStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskBatchStatusResponse rsp = DescribeRiskBatchStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskBatchStatusOutcome(rsp);
        else
            return DescribeRiskBatchStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskBatchStatusOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRiskBatchStatusAsync(const DescribeRiskBatchStatusRequest& request, const DescribeRiskBatchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskBatchStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeRiskBatchStatusOutcomeCallable CwpClient::DescribeRiskBatchStatusCallable(const DescribeRiskBatchStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskBatchStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskBatchStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeRiskDnsEventInfoOutcome CwpClient::DescribeRiskDnsEventInfo(const DescribeRiskDnsEventInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskDnsEventInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskDnsEventInfoResponse rsp = DescribeRiskDnsEventInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskDnsEventInfoOutcome(rsp);
        else
            return DescribeRiskDnsEventInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskDnsEventInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRiskDnsEventInfoAsync(const DescribeRiskDnsEventInfoRequest& request, const DescribeRiskDnsEventInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskDnsEventInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeRiskDnsEventInfoOutcomeCallable CwpClient::DescribeRiskDnsEventInfoCallable(const DescribeRiskDnsEventInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskDnsEventInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskDnsEventInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeRiskDnsEventListOutcome CwpClient::DescribeRiskDnsEventList(const DescribeRiskDnsEventListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskDnsEventList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskDnsEventListResponse rsp = DescribeRiskDnsEventListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskDnsEventListOutcome(rsp);
        else
            return DescribeRiskDnsEventListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskDnsEventListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRiskDnsEventListAsync(const DescribeRiskDnsEventListRequest& request, const DescribeRiskDnsEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskDnsEventList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeRiskDnsEventListOutcomeCallable CwpClient::DescribeRiskDnsEventListCallable(const DescribeRiskDnsEventListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskDnsEventListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskDnsEventList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeRiskDnsInfoOutcome CwpClient::DescribeRiskDnsInfo(const DescribeRiskDnsInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskDnsInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskDnsInfoResponse rsp = DescribeRiskDnsInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskDnsInfoOutcome(rsp);
        else
            return DescribeRiskDnsInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskDnsInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRiskDnsInfoAsync(const DescribeRiskDnsInfoRequest& request, const DescribeRiskDnsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskDnsInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeRiskDnsInfoOutcomeCallable CwpClient::DescribeRiskDnsInfoCallable(const DescribeRiskDnsInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskDnsInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskDnsInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeRiskDnsListOutcome CwpClient::DescribeRiskDnsList(const DescribeRiskDnsListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskDnsList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskDnsListResponse rsp = DescribeRiskDnsListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskDnsListOutcome(rsp);
        else
            return DescribeRiskDnsListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskDnsListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRiskDnsListAsync(const DescribeRiskDnsListRequest& request, const DescribeRiskDnsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskDnsList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeRiskDnsListOutcomeCallable CwpClient::DescribeRiskDnsListCallable(const DescribeRiskDnsListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskDnsListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskDnsList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeRiskDnsPolicyListOutcome CwpClient::DescribeRiskDnsPolicyList(const DescribeRiskDnsPolicyListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskDnsPolicyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskDnsPolicyListResponse rsp = DescribeRiskDnsPolicyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskDnsPolicyListOutcome(rsp);
        else
            return DescribeRiskDnsPolicyListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskDnsPolicyListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRiskDnsPolicyListAsync(const DescribeRiskDnsPolicyListRequest& request, const DescribeRiskDnsPolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskDnsPolicyList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeRiskDnsPolicyListOutcomeCallable CwpClient::DescribeRiskDnsPolicyListCallable(const DescribeRiskDnsPolicyListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskDnsPolicyListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskDnsPolicyList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeRiskProcessEventsOutcome CwpClient::DescribeRiskProcessEvents(const DescribeRiskProcessEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskProcessEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskProcessEventsResponse rsp = DescribeRiskProcessEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskProcessEventsOutcome(rsp);
        else
            return DescribeRiskProcessEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskProcessEventsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRiskProcessEventsAsync(const DescribeRiskProcessEventsRequest& request, const DescribeRiskProcessEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskProcessEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeRiskProcessEventsOutcomeCallable CwpClient::DescribeRiskProcessEventsCallable(const DescribeRiskProcessEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskProcessEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskProcessEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeSafeInfoOutcome CwpClient::DescribeSafeInfo(const DescribeSafeInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSafeInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSafeInfoResponse rsp = DescribeSafeInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSafeInfoOutcome(rsp);
        else
            return DescribeSafeInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeSafeInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeSafeInfoAsync(const DescribeSafeInfoRequest& request, const DescribeSafeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSafeInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeSafeInfoOutcomeCallable CwpClient::DescribeSafeInfoCallable(const DescribeSafeInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSafeInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeSafeInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeScanMalwareScheduleOutcome CwpClient::DescribeScanMalwareSchedule(const DescribeScanMalwareScheduleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanMalwareSchedule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanMalwareScheduleResponse rsp = DescribeScanMalwareScheduleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanMalwareScheduleOutcome(rsp);
        else
            return DescribeScanMalwareScheduleOutcome(o.GetError());
    }
    else
    {
        return DescribeScanMalwareScheduleOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScanMalwareScheduleAsync(const DescribeScanMalwareScheduleRequest& request, const DescribeScanMalwareScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScanMalwareSchedule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeScanMalwareScheduleOutcomeCallable CwpClient::DescribeScanMalwareScheduleCallable(const DescribeScanMalwareScheduleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScanMalwareScheduleOutcome()>>(
        [this, request]()
        {
            return this->DescribeScanMalwareSchedule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeScanScheduleOutcome CwpClient::DescribeScanSchedule(const DescribeScanScheduleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanSchedule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanScheduleResponse rsp = DescribeScanScheduleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanScheduleOutcome(rsp);
        else
            return DescribeScanScheduleOutcome(o.GetError());
    }
    else
    {
        return DescribeScanScheduleOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScanScheduleAsync(const DescribeScanScheduleRequest& request, const DescribeScanScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScanSchedule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeScanScheduleOutcomeCallable CwpClient::DescribeScanScheduleCallable(const DescribeScanScheduleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScanScheduleOutcome()>>(
        [this, request]()
        {
            return this->DescribeScanSchedule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeScanStateOutcome CwpClient::DescribeScanState(const DescribeScanStateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanStateResponse rsp = DescribeScanStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanStateOutcome(rsp);
        else
            return DescribeScanStateOutcome(o.GetError());
    }
    else
    {
        return DescribeScanStateOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScanStateAsync(const DescribeScanStateRequest& request, const DescribeScanStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScanState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeScanStateOutcomeCallable CwpClient::DescribeScanStateCallable(const DescribeScanStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScanStateOutcome()>>(
        [this, request]()
        {
            return this->DescribeScanState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeScanTaskDetailsOutcome CwpClient::DescribeScanTaskDetails(const DescribeScanTaskDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanTaskDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanTaskDetailsResponse rsp = DescribeScanTaskDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanTaskDetailsOutcome(rsp);
        else
            return DescribeScanTaskDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeScanTaskDetailsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScanTaskDetailsAsync(const DescribeScanTaskDetailsRequest& request, const DescribeScanTaskDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScanTaskDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeScanTaskDetailsOutcomeCallable CwpClient::DescribeScanTaskDetailsCallable(const DescribeScanTaskDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScanTaskDetailsOutcome()>>(
        [this, request]()
        {
            return this->DescribeScanTaskDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeScanTaskStatusOutcome CwpClient::DescribeScanTaskStatus(const DescribeScanTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanTaskStatusResponse rsp = DescribeScanTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanTaskStatusOutcome(rsp);
        else
            return DescribeScanTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeScanTaskStatusOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScanTaskStatusAsync(const DescribeScanTaskStatusRequest& request, const DescribeScanTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScanTaskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeScanTaskStatusOutcomeCallable CwpClient::DescribeScanTaskStatusCallable(const DescribeScanTaskStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScanTaskStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeScanTaskStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeScanVulSettingOutcome CwpClient::DescribeScanVulSetting(const DescribeScanVulSettingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanVulSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanVulSettingResponse rsp = DescribeScanVulSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanVulSettingOutcome(rsp);
        else
            return DescribeScanVulSettingOutcome(o.GetError());
    }
    else
    {
        return DescribeScanVulSettingOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScanVulSettingAsync(const DescribeScanVulSettingRequest& request, const DescribeScanVulSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScanVulSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeScanVulSettingOutcomeCallable CwpClient::DescribeScanVulSettingCallable(const DescribeScanVulSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScanVulSettingOutcome()>>(
        [this, request]()
        {
            return this->DescribeScanVulSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeScreenAttackHotspotOutcome CwpClient::DescribeScreenAttackHotspot(const DescribeScreenAttackHotspotRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScreenAttackHotspot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScreenAttackHotspotResponse rsp = DescribeScreenAttackHotspotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScreenAttackHotspotOutcome(rsp);
        else
            return DescribeScreenAttackHotspotOutcome(o.GetError());
    }
    else
    {
        return DescribeScreenAttackHotspotOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScreenAttackHotspotAsync(const DescribeScreenAttackHotspotRequest& request, const DescribeScreenAttackHotspotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScreenAttackHotspot(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeScreenAttackHotspotOutcomeCallable CwpClient::DescribeScreenAttackHotspotCallable(const DescribeScreenAttackHotspotRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScreenAttackHotspotOutcome()>>(
        [this, request]()
        {
            return this->DescribeScreenAttackHotspot(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeScreenBroadcastsOutcome CwpClient::DescribeScreenBroadcasts(const DescribeScreenBroadcastsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScreenBroadcasts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScreenBroadcastsResponse rsp = DescribeScreenBroadcastsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScreenBroadcastsOutcome(rsp);
        else
            return DescribeScreenBroadcastsOutcome(o.GetError());
    }
    else
    {
        return DescribeScreenBroadcastsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScreenBroadcastsAsync(const DescribeScreenBroadcastsRequest& request, const DescribeScreenBroadcastsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScreenBroadcasts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeScreenBroadcastsOutcomeCallable CwpClient::DescribeScreenBroadcastsCallable(const DescribeScreenBroadcastsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScreenBroadcastsOutcome()>>(
        [this, request]()
        {
            return this->DescribeScreenBroadcasts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeScreenDefenseTrendsOutcome CwpClient::DescribeScreenDefenseTrends(const DescribeScreenDefenseTrendsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScreenDefenseTrends");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScreenDefenseTrendsResponse rsp = DescribeScreenDefenseTrendsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScreenDefenseTrendsOutcome(rsp);
        else
            return DescribeScreenDefenseTrendsOutcome(o.GetError());
    }
    else
    {
        return DescribeScreenDefenseTrendsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScreenDefenseTrendsAsync(const DescribeScreenDefenseTrendsRequest& request, const DescribeScreenDefenseTrendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScreenDefenseTrends(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeScreenDefenseTrendsOutcomeCallable CwpClient::DescribeScreenDefenseTrendsCallable(const DescribeScreenDefenseTrendsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScreenDefenseTrendsOutcome()>>(
        [this, request]()
        {
            return this->DescribeScreenDefenseTrends(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeScreenEmergentMsgOutcome CwpClient::DescribeScreenEmergentMsg(const DescribeScreenEmergentMsgRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScreenEmergentMsg");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScreenEmergentMsgResponse rsp = DescribeScreenEmergentMsgResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScreenEmergentMsgOutcome(rsp);
        else
            return DescribeScreenEmergentMsgOutcome(o.GetError());
    }
    else
    {
        return DescribeScreenEmergentMsgOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScreenEmergentMsgAsync(const DescribeScreenEmergentMsgRequest& request, const DescribeScreenEmergentMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScreenEmergentMsg(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeScreenEmergentMsgOutcomeCallable CwpClient::DescribeScreenEmergentMsgCallable(const DescribeScreenEmergentMsgRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScreenEmergentMsgOutcome()>>(
        [this, request]()
        {
            return this->DescribeScreenEmergentMsg(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeScreenEventsCntOutcome CwpClient::DescribeScreenEventsCnt(const DescribeScreenEventsCntRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScreenEventsCnt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScreenEventsCntResponse rsp = DescribeScreenEventsCntResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScreenEventsCntOutcome(rsp);
        else
            return DescribeScreenEventsCntOutcome(o.GetError());
    }
    else
    {
        return DescribeScreenEventsCntOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScreenEventsCntAsync(const DescribeScreenEventsCntRequest& request, const DescribeScreenEventsCntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScreenEventsCnt(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeScreenEventsCntOutcomeCallable CwpClient::DescribeScreenEventsCntCallable(const DescribeScreenEventsCntRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScreenEventsCntOutcome()>>(
        [this, request]()
        {
            return this->DescribeScreenEventsCnt(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeScreenGeneralStatOutcome CwpClient::DescribeScreenGeneralStat(const DescribeScreenGeneralStatRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScreenGeneralStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScreenGeneralStatResponse rsp = DescribeScreenGeneralStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScreenGeneralStatOutcome(rsp);
        else
            return DescribeScreenGeneralStatOutcome(o.GetError());
    }
    else
    {
        return DescribeScreenGeneralStatOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScreenGeneralStatAsync(const DescribeScreenGeneralStatRequest& request, const DescribeScreenGeneralStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScreenGeneralStat(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeScreenGeneralStatOutcomeCallable CwpClient::DescribeScreenGeneralStatCallable(const DescribeScreenGeneralStatRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScreenGeneralStatOutcome()>>(
        [this, request]()
        {
            return this->DescribeScreenGeneralStat(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeScreenHostInvasionOutcome CwpClient::DescribeScreenHostInvasion(const DescribeScreenHostInvasionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScreenHostInvasion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScreenHostInvasionResponse rsp = DescribeScreenHostInvasionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScreenHostInvasionOutcome(rsp);
        else
            return DescribeScreenHostInvasionOutcome(o.GetError());
    }
    else
    {
        return DescribeScreenHostInvasionOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScreenHostInvasionAsync(const DescribeScreenHostInvasionRequest& request, const DescribeScreenHostInvasionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScreenHostInvasion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeScreenHostInvasionOutcomeCallable CwpClient::DescribeScreenHostInvasionCallable(const DescribeScreenHostInvasionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScreenHostInvasionOutcome()>>(
        [this, request]()
        {
            return this->DescribeScreenHostInvasion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeScreenMachineRegionsOutcome CwpClient::DescribeScreenMachineRegions(const DescribeScreenMachineRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScreenMachineRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScreenMachineRegionsResponse rsp = DescribeScreenMachineRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScreenMachineRegionsOutcome(rsp);
        else
            return DescribeScreenMachineRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeScreenMachineRegionsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScreenMachineRegionsAsync(const DescribeScreenMachineRegionsRequest& request, const DescribeScreenMachineRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScreenMachineRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeScreenMachineRegionsOutcomeCallable CwpClient::DescribeScreenMachineRegionsCallable(const DescribeScreenMachineRegionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScreenMachineRegionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeScreenMachineRegions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeScreenMachinesOutcome CwpClient::DescribeScreenMachines(const DescribeScreenMachinesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScreenMachines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScreenMachinesResponse rsp = DescribeScreenMachinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScreenMachinesOutcome(rsp);
        else
            return DescribeScreenMachinesOutcome(o.GetError());
    }
    else
    {
        return DescribeScreenMachinesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScreenMachinesAsync(const DescribeScreenMachinesRequest& request, const DescribeScreenMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScreenMachines(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeScreenMachinesOutcomeCallable CwpClient::DescribeScreenMachinesCallable(const DescribeScreenMachinesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScreenMachinesOutcome()>>(
        [this, request]()
        {
            return this->DescribeScreenMachines(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeScreenProtectionCntOutcome CwpClient::DescribeScreenProtectionCnt(const DescribeScreenProtectionCntRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScreenProtectionCnt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScreenProtectionCntResponse rsp = DescribeScreenProtectionCntResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScreenProtectionCntOutcome(rsp);
        else
            return DescribeScreenProtectionCntOutcome(o.GetError());
    }
    else
    {
        return DescribeScreenProtectionCntOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScreenProtectionCntAsync(const DescribeScreenProtectionCntRequest& request, const DescribeScreenProtectionCntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScreenProtectionCnt(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeScreenProtectionCntOutcomeCallable CwpClient::DescribeScreenProtectionCntCallable(const DescribeScreenProtectionCntRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScreenProtectionCntOutcome()>>(
        [this, request]()
        {
            return this->DescribeScreenProtectionCnt(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeScreenProtectionStatOutcome CwpClient::DescribeScreenProtectionStat(const DescribeScreenProtectionStatRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScreenProtectionStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScreenProtectionStatResponse rsp = DescribeScreenProtectionStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScreenProtectionStatOutcome(rsp);
        else
            return DescribeScreenProtectionStatOutcome(o.GetError());
    }
    else
    {
        return DescribeScreenProtectionStatOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScreenProtectionStatAsync(const DescribeScreenProtectionStatRequest& request, const DescribeScreenProtectionStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScreenProtectionStat(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeScreenProtectionStatOutcomeCallable CwpClient::DescribeScreenProtectionStatCallable(const DescribeScreenProtectionStatRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScreenProtectionStatOutcome()>>(
        [this, request]()
        {
            return this->DescribeScreenProtectionStat(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeScreenRiskAssetsTopOutcome CwpClient::DescribeScreenRiskAssetsTop(const DescribeScreenRiskAssetsTopRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScreenRiskAssetsTop");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScreenRiskAssetsTopResponse rsp = DescribeScreenRiskAssetsTopResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScreenRiskAssetsTopOutcome(rsp);
        else
            return DescribeScreenRiskAssetsTopOutcome(o.GetError());
    }
    else
    {
        return DescribeScreenRiskAssetsTopOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScreenRiskAssetsTopAsync(const DescribeScreenRiskAssetsTopRequest& request, const DescribeScreenRiskAssetsTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScreenRiskAssetsTop(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeScreenRiskAssetsTopOutcomeCallable CwpClient::DescribeScreenRiskAssetsTopCallable(const DescribeScreenRiskAssetsTopRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScreenRiskAssetsTopOutcome()>>(
        [this, request]()
        {
            return this->DescribeScreenRiskAssetsTop(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeSearchLogsOutcome CwpClient::DescribeSearchLogs(const DescribeSearchLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSearchLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSearchLogsResponse rsp = DescribeSearchLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSearchLogsOutcome(rsp);
        else
            return DescribeSearchLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeSearchLogsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeSearchLogsAsync(const DescribeSearchLogsRequest& request, const DescribeSearchLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSearchLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeSearchLogsOutcomeCallable CwpClient::DescribeSearchLogsCallable(const DescribeSearchLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSearchLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSearchLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeSearchTemplatesOutcome CwpClient::DescribeSearchTemplates(const DescribeSearchTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSearchTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSearchTemplatesResponse rsp = DescribeSearchTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSearchTemplatesOutcome(rsp);
        else
            return DescribeSearchTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeSearchTemplatesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeSearchTemplatesAsync(const DescribeSearchTemplatesRequest& request, const DescribeSearchTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSearchTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeSearchTemplatesOutcomeCallable CwpClient::DescribeSearchTemplatesCallable(const DescribeSearchTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSearchTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSearchTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeSecurityBroadcastInfoOutcome CwpClient::DescribeSecurityBroadcastInfo(const DescribeSecurityBroadcastInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityBroadcastInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityBroadcastInfoResponse rsp = DescribeSecurityBroadcastInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityBroadcastInfoOutcome(rsp);
        else
            return DescribeSecurityBroadcastInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityBroadcastInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeSecurityBroadcastInfoAsync(const DescribeSecurityBroadcastInfoRequest& request, const DescribeSecurityBroadcastInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityBroadcastInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeSecurityBroadcastInfoOutcomeCallable CwpClient::DescribeSecurityBroadcastInfoCallable(const DescribeSecurityBroadcastInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityBroadcastInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityBroadcastInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeSecurityBroadcastsOutcome CwpClient::DescribeSecurityBroadcasts(const DescribeSecurityBroadcastsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityBroadcasts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityBroadcastsResponse rsp = DescribeSecurityBroadcastsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityBroadcastsOutcome(rsp);
        else
            return DescribeSecurityBroadcastsOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityBroadcastsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeSecurityBroadcastsAsync(const DescribeSecurityBroadcastsRequest& request, const DescribeSecurityBroadcastsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityBroadcasts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeSecurityBroadcastsOutcomeCallable CwpClient::DescribeSecurityBroadcastsCallable(const DescribeSecurityBroadcastsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityBroadcastsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityBroadcasts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeSecurityDynamicsOutcome CwpClient::DescribeSecurityDynamics(const DescribeSecurityDynamicsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityDynamics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityDynamicsResponse rsp = DescribeSecurityDynamicsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityDynamicsOutcome(rsp);
        else
            return DescribeSecurityDynamicsOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityDynamicsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeSecurityDynamicsAsync(const DescribeSecurityDynamicsRequest& request, const DescribeSecurityDynamicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityDynamics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeSecurityDynamicsOutcomeCallable CwpClient::DescribeSecurityDynamicsCallable(const DescribeSecurityDynamicsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityDynamicsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityDynamics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeSecurityEventStatOutcome CwpClient::DescribeSecurityEventStat(const DescribeSecurityEventStatRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityEventStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityEventStatResponse rsp = DescribeSecurityEventStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityEventStatOutcome(rsp);
        else
            return DescribeSecurityEventStatOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityEventStatOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeSecurityEventStatAsync(const DescribeSecurityEventStatRequest& request, const DescribeSecurityEventStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityEventStat(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeSecurityEventStatOutcomeCallable CwpClient::DescribeSecurityEventStatCallable(const DescribeSecurityEventStatRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityEventStatOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityEventStat(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeSecurityEventsCntOutcome CwpClient::DescribeSecurityEventsCnt(const DescribeSecurityEventsCntRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityEventsCnt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityEventsCntResponse rsp = DescribeSecurityEventsCntResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityEventsCntOutcome(rsp);
        else
            return DescribeSecurityEventsCntOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityEventsCntOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeSecurityEventsCntAsync(const DescribeSecurityEventsCntRequest& request, const DescribeSecurityEventsCntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityEventsCnt(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeSecurityEventsCntOutcomeCallable CwpClient::DescribeSecurityEventsCntCallable(const DescribeSecurityEventsCntRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityEventsCntOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityEventsCnt(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeSecurityTrendsOutcome CwpClient::DescribeSecurityTrends(const DescribeSecurityTrendsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityTrends");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityTrendsResponse rsp = DescribeSecurityTrendsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityTrendsOutcome(rsp);
        else
            return DescribeSecurityTrendsOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityTrendsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeSecurityTrendsAsync(const DescribeSecurityTrendsRequest& request, const DescribeSecurityTrendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityTrends(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeSecurityTrendsOutcomeCallable CwpClient::DescribeSecurityTrendsCallable(const DescribeSecurityTrendsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityTrendsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityTrends(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeServerRelatedDirInfoOutcome CwpClient::DescribeServerRelatedDirInfo(const DescribeServerRelatedDirInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServerRelatedDirInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServerRelatedDirInfoResponse rsp = DescribeServerRelatedDirInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServerRelatedDirInfoOutcome(rsp);
        else
            return DescribeServerRelatedDirInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeServerRelatedDirInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeServerRelatedDirInfoAsync(const DescribeServerRelatedDirInfoRequest& request, const DescribeServerRelatedDirInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServerRelatedDirInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeServerRelatedDirInfoOutcomeCallable CwpClient::DescribeServerRelatedDirInfoCallable(const DescribeServerRelatedDirInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServerRelatedDirInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeServerRelatedDirInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeServersAndRiskAndFirstInfoOutcome CwpClient::DescribeServersAndRiskAndFirstInfo(const DescribeServersAndRiskAndFirstInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServersAndRiskAndFirstInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServersAndRiskAndFirstInfoResponse rsp = DescribeServersAndRiskAndFirstInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServersAndRiskAndFirstInfoOutcome(rsp);
        else
            return DescribeServersAndRiskAndFirstInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeServersAndRiskAndFirstInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeServersAndRiskAndFirstInfoAsync(const DescribeServersAndRiskAndFirstInfoRequest& request, const DescribeServersAndRiskAndFirstInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServersAndRiskAndFirstInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeServersAndRiskAndFirstInfoOutcomeCallable CwpClient::DescribeServersAndRiskAndFirstInfoCallable(const DescribeServersAndRiskAndFirstInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServersAndRiskAndFirstInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeServersAndRiskAndFirstInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeStrategyExistOutcome CwpClient::DescribeStrategyExist(const DescribeStrategyExistRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStrategyExist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStrategyExistResponse rsp = DescribeStrategyExistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStrategyExistOutcome(rsp);
        else
            return DescribeStrategyExistOutcome(o.GetError());
    }
    else
    {
        return DescribeStrategyExistOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeStrategyExistAsync(const DescribeStrategyExistRequest& request, const DescribeStrategyExistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStrategyExist(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeStrategyExistOutcomeCallable CwpClient::DescribeStrategyExistCallable(const DescribeStrategyExistRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStrategyExistOutcome()>>(
        [this, request]()
        {
            return this->DescribeStrategyExist(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeTagMachinesOutcome CwpClient::DescribeTagMachines(const DescribeTagMachinesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTagMachines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTagMachinesResponse rsp = DescribeTagMachinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTagMachinesOutcome(rsp);
        else
            return DescribeTagMachinesOutcome(o.GetError());
    }
    else
    {
        return DescribeTagMachinesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeTagMachinesAsync(const DescribeTagMachinesRequest& request, const DescribeTagMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTagMachines(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeTagMachinesOutcomeCallable CwpClient::DescribeTagMachinesCallable(const DescribeTagMachinesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTagMachinesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTagMachines(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeTagsOutcome CwpClient::DescribeTags(const DescribeTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTagsResponse rsp = DescribeTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTagsOutcome(rsp);
        else
            return DescribeTagsOutcome(o.GetError());
    }
    else
    {
        return DescribeTagsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeTagsOutcomeCallable CwpClient::DescribeTagsCallable(const DescribeTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTagsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTags(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeTrialReportOutcome CwpClient::DescribeTrialReport(const DescribeTrialReportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrialReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrialReportResponse rsp = DescribeTrialReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrialReportOutcome(rsp);
        else
            return DescribeTrialReportOutcome(o.GetError());
    }
    else
    {
        return DescribeTrialReportOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeTrialReportAsync(const DescribeTrialReportRequest& request, const DescribeTrialReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTrialReport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeTrialReportOutcomeCallable CwpClient::DescribeTrialReportCallable(const DescribeTrialReportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTrialReportOutcome()>>(
        [this, request]()
        {
            return this->DescribeTrialReport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeUndoVulCountsOutcome CwpClient::DescribeUndoVulCounts(const DescribeUndoVulCountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUndoVulCounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUndoVulCountsResponse rsp = DescribeUndoVulCountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUndoVulCountsOutcome(rsp);
        else
            return DescribeUndoVulCountsOutcome(o.GetError());
    }
    else
    {
        return DescribeUndoVulCountsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeUndoVulCountsAsync(const DescribeUndoVulCountsRequest& request, const DescribeUndoVulCountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUndoVulCounts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeUndoVulCountsOutcomeCallable CwpClient::DescribeUndoVulCountsCallable(const DescribeUndoVulCountsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUndoVulCountsOutcome()>>(
        [this, request]()
        {
            return this->DescribeUndoVulCounts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeUsersConfigOutcome CwpClient::DescribeUsersConfig(const DescribeUsersConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsersConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsersConfigResponse rsp = DescribeUsersConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsersConfigOutcome(rsp);
        else
            return DescribeUsersConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeUsersConfigOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeUsersConfigAsync(const DescribeUsersConfigRequest& request, const DescribeUsersConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUsersConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeUsersConfigOutcomeCallable CwpClient::DescribeUsersConfigCallable(const DescribeUsersConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUsersConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeUsersConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeUsualLoginPlacesOutcome CwpClient::DescribeUsualLoginPlaces(const DescribeUsualLoginPlacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsualLoginPlaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsualLoginPlacesResponse rsp = DescribeUsualLoginPlacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsualLoginPlacesOutcome(rsp);
        else
            return DescribeUsualLoginPlacesOutcome(o.GetError());
    }
    else
    {
        return DescribeUsualLoginPlacesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeUsualLoginPlacesAsync(const DescribeUsualLoginPlacesRequest& request, const DescribeUsualLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUsualLoginPlaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeUsualLoginPlacesOutcomeCallable CwpClient::DescribeUsualLoginPlacesCallable(const DescribeUsualLoginPlacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUsualLoginPlacesOutcome()>>(
        [this, request]()
        {
            return this->DescribeUsualLoginPlaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeVdbAndPocInfoOutcome CwpClient::DescribeVdbAndPocInfo(const DescribeVdbAndPocInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVdbAndPocInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVdbAndPocInfoResponse rsp = DescribeVdbAndPocInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVdbAndPocInfoOutcome(rsp);
        else
            return DescribeVdbAndPocInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeVdbAndPocInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVdbAndPocInfoAsync(const DescribeVdbAndPocInfoRequest& request, const DescribeVdbAndPocInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVdbAndPocInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeVdbAndPocInfoOutcomeCallable CwpClient::DescribeVdbAndPocInfoCallable(const DescribeVdbAndPocInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVdbAndPocInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeVdbAndPocInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeVersionCompareChartOutcome CwpClient::DescribeVersionCompareChart(const DescribeVersionCompareChartRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVersionCompareChart");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVersionCompareChartResponse rsp = DescribeVersionCompareChartResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVersionCompareChartOutcome(rsp);
        else
            return DescribeVersionCompareChartOutcome(o.GetError());
    }
    else
    {
        return DescribeVersionCompareChartOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVersionCompareChartAsync(const DescribeVersionCompareChartRequest& request, const DescribeVersionCompareChartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVersionCompareChart(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeVersionCompareChartOutcomeCallable CwpClient::DescribeVersionCompareChartCallable(const DescribeVersionCompareChartRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVersionCompareChartOutcome()>>(
        [this, request]()
        {
            return this->DescribeVersionCompareChart(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeVersionStatisticsOutcome CwpClient::DescribeVersionStatistics(const DescribeVersionStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVersionStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVersionStatisticsResponse rsp = DescribeVersionStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVersionStatisticsOutcome(rsp);
        else
            return DescribeVersionStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeVersionStatisticsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVersionStatisticsAsync(const DescribeVersionStatisticsRequest& request, const DescribeVersionStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVersionStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeVersionStatisticsOutcomeCallable CwpClient::DescribeVersionStatisticsCallable(const DescribeVersionStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVersionStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeVersionStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeVertexDetailOutcome CwpClient::DescribeVertexDetail(const DescribeVertexDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVertexDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVertexDetailResponse rsp = DescribeVertexDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVertexDetailOutcome(rsp);
        else
            return DescribeVertexDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeVertexDetailOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVertexDetailAsync(const DescribeVertexDetailRequest& request, const DescribeVertexDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVertexDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeVertexDetailOutcomeCallable CwpClient::DescribeVertexDetailCallable(const DescribeVertexDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVertexDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeVertexDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeVulCountByDatesOutcome CwpClient::DescribeVulCountByDates(const DescribeVulCountByDatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulCountByDates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulCountByDatesResponse rsp = DescribeVulCountByDatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulCountByDatesOutcome(rsp);
        else
            return DescribeVulCountByDatesOutcome(o.GetError());
    }
    else
    {
        return DescribeVulCountByDatesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulCountByDatesAsync(const DescribeVulCountByDatesRequest& request, const DescribeVulCountByDatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulCountByDates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeVulCountByDatesOutcomeCallable CwpClient::DescribeVulCountByDatesCallable(const DescribeVulCountByDatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulCountByDatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulCountByDates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeVulCveIdInfoOutcome CwpClient::DescribeVulCveIdInfo(const DescribeVulCveIdInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulCveIdInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulCveIdInfoResponse rsp = DescribeVulCveIdInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulCveIdInfoOutcome(rsp);
        else
            return DescribeVulCveIdInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeVulCveIdInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulCveIdInfoAsync(const DescribeVulCveIdInfoRequest& request, const DescribeVulCveIdInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulCveIdInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeVulCveIdInfoOutcomeCallable CwpClient::DescribeVulCveIdInfoCallable(const DescribeVulCveIdInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulCveIdInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulCveIdInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeVulDefenceEventOutcome CwpClient::DescribeVulDefenceEvent(const DescribeVulDefenceEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulDefenceEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulDefenceEventResponse rsp = DescribeVulDefenceEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulDefenceEventOutcome(rsp);
        else
            return DescribeVulDefenceEventOutcome(o.GetError());
    }
    else
    {
        return DescribeVulDefenceEventOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulDefenceEventAsync(const DescribeVulDefenceEventRequest& request, const DescribeVulDefenceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulDefenceEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeVulDefenceEventOutcomeCallable CwpClient::DescribeVulDefenceEventCallable(const DescribeVulDefenceEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulDefenceEventOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulDefenceEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeVulDefenceListOutcome CwpClient::DescribeVulDefenceList(const DescribeVulDefenceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulDefenceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulDefenceListResponse rsp = DescribeVulDefenceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulDefenceListOutcome(rsp);
        else
            return DescribeVulDefenceListOutcome(o.GetError());
    }
    else
    {
        return DescribeVulDefenceListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulDefenceListAsync(const DescribeVulDefenceListRequest& request, const DescribeVulDefenceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulDefenceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeVulDefenceListOutcomeCallable CwpClient::DescribeVulDefenceListCallable(const DescribeVulDefenceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulDefenceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulDefenceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeVulDefenceOverviewOutcome CwpClient::DescribeVulDefenceOverview(const DescribeVulDefenceOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulDefenceOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulDefenceOverviewResponse rsp = DescribeVulDefenceOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulDefenceOverviewOutcome(rsp);
        else
            return DescribeVulDefenceOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeVulDefenceOverviewOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulDefenceOverviewAsync(const DescribeVulDefenceOverviewRequest& request, const DescribeVulDefenceOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulDefenceOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeVulDefenceOverviewOutcomeCallable CwpClient::DescribeVulDefenceOverviewCallable(const DescribeVulDefenceOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulDefenceOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulDefenceOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeVulDefencePluginDetailOutcome CwpClient::DescribeVulDefencePluginDetail(const DescribeVulDefencePluginDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulDefencePluginDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulDefencePluginDetailResponse rsp = DescribeVulDefencePluginDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulDefencePluginDetailOutcome(rsp);
        else
            return DescribeVulDefencePluginDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeVulDefencePluginDetailOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulDefencePluginDetailAsync(const DescribeVulDefencePluginDetailRequest& request, const DescribeVulDefencePluginDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulDefencePluginDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeVulDefencePluginDetailOutcomeCallable CwpClient::DescribeVulDefencePluginDetailCallable(const DescribeVulDefencePluginDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulDefencePluginDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulDefencePluginDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeVulDefencePluginExceptionCountOutcome CwpClient::DescribeVulDefencePluginExceptionCount(const DescribeVulDefencePluginExceptionCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulDefencePluginExceptionCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulDefencePluginExceptionCountResponse rsp = DescribeVulDefencePluginExceptionCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulDefencePluginExceptionCountOutcome(rsp);
        else
            return DescribeVulDefencePluginExceptionCountOutcome(o.GetError());
    }
    else
    {
        return DescribeVulDefencePluginExceptionCountOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulDefencePluginExceptionCountAsync(const DescribeVulDefencePluginExceptionCountRequest& request, const DescribeVulDefencePluginExceptionCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulDefencePluginExceptionCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeVulDefencePluginExceptionCountOutcomeCallable CwpClient::DescribeVulDefencePluginExceptionCountCallable(const DescribeVulDefencePluginExceptionCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulDefencePluginExceptionCountOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulDefencePluginExceptionCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeVulDefencePluginStatusOutcome CwpClient::DescribeVulDefencePluginStatus(const DescribeVulDefencePluginStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulDefencePluginStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulDefencePluginStatusResponse rsp = DescribeVulDefencePluginStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulDefencePluginStatusOutcome(rsp);
        else
            return DescribeVulDefencePluginStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeVulDefencePluginStatusOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulDefencePluginStatusAsync(const DescribeVulDefencePluginStatusRequest& request, const DescribeVulDefencePluginStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulDefencePluginStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeVulDefencePluginStatusOutcomeCallable CwpClient::DescribeVulDefencePluginStatusCallable(const DescribeVulDefencePluginStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulDefencePluginStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulDefencePluginStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeVulDefenceSettingOutcome CwpClient::DescribeVulDefenceSetting(const DescribeVulDefenceSettingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulDefenceSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulDefenceSettingResponse rsp = DescribeVulDefenceSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulDefenceSettingOutcome(rsp);
        else
            return DescribeVulDefenceSettingOutcome(o.GetError());
    }
    else
    {
        return DescribeVulDefenceSettingOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulDefenceSettingAsync(const DescribeVulDefenceSettingRequest& request, const DescribeVulDefenceSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulDefenceSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeVulDefenceSettingOutcomeCallable CwpClient::DescribeVulDefenceSettingCallable(const DescribeVulDefenceSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulDefenceSettingOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulDefenceSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeVulEffectHostListOutcome CwpClient::DescribeVulEffectHostList(const DescribeVulEffectHostListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulEffectHostList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulEffectHostListResponse rsp = DescribeVulEffectHostListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulEffectHostListOutcome(rsp);
        else
            return DescribeVulEffectHostListOutcome(o.GetError());
    }
    else
    {
        return DescribeVulEffectHostListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulEffectHostListAsync(const DescribeVulEffectHostListRequest& request, const DescribeVulEffectHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulEffectHostList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeVulEffectHostListOutcomeCallable CwpClient::DescribeVulEffectHostListCallable(const DescribeVulEffectHostListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulEffectHostListOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulEffectHostList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeVulEffectModulesOutcome CwpClient::DescribeVulEffectModules(const DescribeVulEffectModulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulEffectModules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulEffectModulesResponse rsp = DescribeVulEffectModulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulEffectModulesOutcome(rsp);
        else
            return DescribeVulEffectModulesOutcome(o.GetError());
    }
    else
    {
        return DescribeVulEffectModulesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulEffectModulesAsync(const DescribeVulEffectModulesRequest& request, const DescribeVulEffectModulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulEffectModules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeVulEffectModulesOutcomeCallable CwpClient::DescribeVulEffectModulesCallable(const DescribeVulEffectModulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulEffectModulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulEffectModules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeVulEmergentMsgOutcome CwpClient::DescribeVulEmergentMsg(const DescribeVulEmergentMsgRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulEmergentMsg");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulEmergentMsgResponse rsp = DescribeVulEmergentMsgResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulEmergentMsgOutcome(rsp);
        else
            return DescribeVulEmergentMsgOutcome(o.GetError());
    }
    else
    {
        return DescribeVulEmergentMsgOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulEmergentMsgAsync(const DescribeVulEmergentMsgRequest& request, const DescribeVulEmergentMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulEmergentMsg(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeVulEmergentMsgOutcomeCallable CwpClient::DescribeVulEmergentMsgCallable(const DescribeVulEmergentMsgRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulEmergentMsgOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulEmergentMsg(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeVulFixStatusOutcome CwpClient::DescribeVulFixStatus(const DescribeVulFixStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulFixStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulFixStatusResponse rsp = DescribeVulFixStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulFixStatusOutcome(rsp);
        else
            return DescribeVulFixStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeVulFixStatusOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulFixStatusAsync(const DescribeVulFixStatusRequest& request, const DescribeVulFixStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulFixStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeVulFixStatusOutcomeCallable CwpClient::DescribeVulFixStatusCallable(const DescribeVulFixStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulFixStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulFixStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeVulHostCountScanTimeOutcome CwpClient::DescribeVulHostCountScanTime(const DescribeVulHostCountScanTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulHostCountScanTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulHostCountScanTimeResponse rsp = DescribeVulHostCountScanTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulHostCountScanTimeOutcome(rsp);
        else
            return DescribeVulHostCountScanTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeVulHostCountScanTimeOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulHostCountScanTimeAsync(const DescribeVulHostCountScanTimeRequest& request, const DescribeVulHostCountScanTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulHostCountScanTime(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeVulHostCountScanTimeOutcomeCallable CwpClient::DescribeVulHostCountScanTimeCallable(const DescribeVulHostCountScanTimeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulHostCountScanTimeOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulHostCountScanTime(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeVulHostTopOutcome CwpClient::DescribeVulHostTop(const DescribeVulHostTopRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulHostTop");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulHostTopResponse rsp = DescribeVulHostTopResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulHostTopOutcome(rsp);
        else
            return DescribeVulHostTopOutcome(o.GetError());
    }
    else
    {
        return DescribeVulHostTopOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulHostTopAsync(const DescribeVulHostTopRequest& request, const DescribeVulHostTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulHostTop(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeVulHostTopOutcomeCallable CwpClient::DescribeVulHostTopCallable(const DescribeVulHostTopRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulHostTopOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulHostTop(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeVulInfoCvssOutcome CwpClient::DescribeVulInfoCvss(const DescribeVulInfoCvssRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulInfoCvss");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulInfoCvssResponse rsp = DescribeVulInfoCvssResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulInfoCvssOutcome(rsp);
        else
            return DescribeVulInfoCvssOutcome(o.GetError());
    }
    else
    {
        return DescribeVulInfoCvssOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulInfoCvssAsync(const DescribeVulInfoCvssRequest& request, const DescribeVulInfoCvssAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulInfoCvss(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeVulInfoCvssOutcomeCallable CwpClient::DescribeVulInfoCvssCallable(const DescribeVulInfoCvssRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulInfoCvssOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulInfoCvss(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeVulLabelsOutcome CwpClient::DescribeVulLabels(const DescribeVulLabelsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulLabels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulLabelsResponse rsp = DescribeVulLabelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulLabelsOutcome(rsp);
        else
            return DescribeVulLabelsOutcome(o.GetError());
    }
    else
    {
        return DescribeVulLabelsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulLabelsAsync(const DescribeVulLabelsRequest& request, const DescribeVulLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulLabels(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeVulLabelsOutcomeCallable CwpClient::DescribeVulLabelsCallable(const DescribeVulLabelsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulLabelsOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulLabels(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeVulLevelCountOutcome CwpClient::DescribeVulLevelCount(const DescribeVulLevelCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulLevelCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulLevelCountResponse rsp = DescribeVulLevelCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulLevelCountOutcome(rsp);
        else
            return DescribeVulLevelCountOutcome(o.GetError());
    }
    else
    {
        return DescribeVulLevelCountOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulLevelCountAsync(const DescribeVulLevelCountRequest& request, const DescribeVulLevelCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulLevelCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeVulLevelCountOutcomeCallable CwpClient::DescribeVulLevelCountCallable(const DescribeVulLevelCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulLevelCountOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulLevelCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeVulListOutcome CwpClient::DescribeVulList(const DescribeVulListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulListResponse rsp = DescribeVulListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulListOutcome(rsp);
        else
            return DescribeVulListOutcome(o.GetError());
    }
    else
    {
        return DescribeVulListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulListAsync(const DescribeVulListRequest& request, const DescribeVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeVulListOutcomeCallable CwpClient::DescribeVulListCallable(const DescribeVulListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulListOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeVulOverviewOutcome CwpClient::DescribeVulOverview(const DescribeVulOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulOverviewResponse rsp = DescribeVulOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulOverviewOutcome(rsp);
        else
            return DescribeVulOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeVulOverviewOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulOverviewAsync(const DescribeVulOverviewRequest& request, const DescribeVulOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeVulOverviewOutcomeCallable CwpClient::DescribeVulOverviewCallable(const DescribeVulOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeVulStoreListOutcome CwpClient::DescribeVulStoreList(const DescribeVulStoreListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulStoreList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulStoreListResponse rsp = DescribeVulStoreListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulStoreListOutcome(rsp);
        else
            return DescribeVulStoreListOutcome(o.GetError());
    }
    else
    {
        return DescribeVulStoreListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulStoreListAsync(const DescribeVulStoreListRequest& request, const DescribeVulStoreListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulStoreList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeVulStoreListOutcomeCallable CwpClient::DescribeVulStoreListCallable(const DescribeVulStoreListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulStoreListOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulStoreList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeVulTopOutcome CwpClient::DescribeVulTop(const DescribeVulTopRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulTop");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulTopResponse rsp = DescribeVulTopResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulTopOutcome(rsp);
        else
            return DescribeVulTopOutcome(o.GetError());
    }
    else
    {
        return DescribeVulTopOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulTopAsync(const DescribeVulTopRequest& request, const DescribeVulTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulTop(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeVulTopOutcomeCallable CwpClient::DescribeVulTopCallable(const DescribeVulTopRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulTopOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulTop(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeVulTrendOutcome CwpClient::DescribeVulTrend(const DescribeVulTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulTrendResponse rsp = DescribeVulTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulTrendOutcome(rsp);
        else
            return DescribeVulTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeVulTrendOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulTrendAsync(const DescribeVulTrendRequest& request, const DescribeVulTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulTrend(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeVulTrendOutcomeCallable CwpClient::DescribeVulTrendCallable(const DescribeVulTrendRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulTrendOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulTrend(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeWarningHostConfigOutcome CwpClient::DescribeWarningHostConfig(const DescribeWarningHostConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWarningHostConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWarningHostConfigResponse rsp = DescribeWarningHostConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWarningHostConfigOutcome(rsp);
        else
            return DescribeWarningHostConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeWarningHostConfigOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeWarningHostConfigAsync(const DescribeWarningHostConfigRequest& request, const DescribeWarningHostConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWarningHostConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeWarningHostConfigOutcomeCallable CwpClient::DescribeWarningHostConfigCallable(const DescribeWarningHostConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWarningHostConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeWarningHostConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeWarningListOutcome CwpClient::DescribeWarningList(const DescribeWarningListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWarningList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWarningListResponse rsp = DescribeWarningListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWarningListOutcome(rsp);
        else
            return DescribeWarningListOutcome(o.GetError());
    }
    else
    {
        return DescribeWarningListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeWarningListAsync(const DescribeWarningListRequest& request, const DescribeWarningListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWarningList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeWarningListOutcomeCallable CwpClient::DescribeWarningListCallable(const DescribeWarningListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWarningListOutcome()>>(
        [this, request]()
        {
            return this->DescribeWarningList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeWebHookPolicyOutcome CwpClient::DescribeWebHookPolicy(const DescribeWebHookPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebHookPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebHookPolicyResponse rsp = DescribeWebHookPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebHookPolicyOutcome(rsp);
        else
            return DescribeWebHookPolicyOutcome(o.GetError());
    }
    else
    {
        return DescribeWebHookPolicyOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeWebHookPolicyAsync(const DescribeWebHookPolicyRequest& request, const DescribeWebHookPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebHookPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeWebHookPolicyOutcomeCallable CwpClient::DescribeWebHookPolicyCallable(const DescribeWebHookPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebHookPolicyOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebHookPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeWebHookReceiverOutcome CwpClient::DescribeWebHookReceiver(const DescribeWebHookReceiverRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebHookReceiver");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebHookReceiverResponse rsp = DescribeWebHookReceiverResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebHookReceiverOutcome(rsp);
        else
            return DescribeWebHookReceiverOutcome(o.GetError());
    }
    else
    {
        return DescribeWebHookReceiverOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeWebHookReceiverAsync(const DescribeWebHookReceiverRequest& request, const DescribeWebHookReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebHookReceiver(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeWebHookReceiverOutcomeCallable CwpClient::DescribeWebHookReceiverCallable(const DescribeWebHookReceiverRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebHookReceiverOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebHookReceiver(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeWebHookReceiverUsageOutcome CwpClient::DescribeWebHookReceiverUsage(const DescribeWebHookReceiverUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebHookReceiverUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebHookReceiverUsageResponse rsp = DescribeWebHookReceiverUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebHookReceiverUsageOutcome(rsp);
        else
            return DescribeWebHookReceiverUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeWebHookReceiverUsageOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeWebHookReceiverUsageAsync(const DescribeWebHookReceiverUsageRequest& request, const DescribeWebHookReceiverUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebHookReceiverUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeWebHookReceiverUsageOutcomeCallable CwpClient::DescribeWebHookReceiverUsageCallable(const DescribeWebHookReceiverUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebHookReceiverUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebHookReceiverUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeWebHookRuleOutcome CwpClient::DescribeWebHookRule(const DescribeWebHookRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebHookRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebHookRuleResponse rsp = DescribeWebHookRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebHookRuleOutcome(rsp);
        else
            return DescribeWebHookRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeWebHookRuleOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeWebHookRuleAsync(const DescribeWebHookRuleRequest& request, const DescribeWebHookRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebHookRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeWebHookRuleOutcomeCallable CwpClient::DescribeWebHookRuleCallable(const DescribeWebHookRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebHookRuleOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebHookRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeWebHookRulesOutcome CwpClient::DescribeWebHookRules(const DescribeWebHookRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebHookRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebHookRulesResponse rsp = DescribeWebHookRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebHookRulesOutcome(rsp);
        else
            return DescribeWebHookRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeWebHookRulesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeWebHookRulesAsync(const DescribeWebHookRulesRequest& request, const DescribeWebHookRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebHookRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeWebHookRulesOutcomeCallable CwpClient::DescribeWebHookRulesCallable(const DescribeWebHookRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebHookRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebHookRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeWebPageEventListOutcome CwpClient::DescribeWebPageEventList(const DescribeWebPageEventListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebPageEventList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebPageEventListResponse rsp = DescribeWebPageEventListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebPageEventListOutcome(rsp);
        else
            return DescribeWebPageEventListOutcome(o.GetError());
    }
    else
    {
        return DescribeWebPageEventListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeWebPageEventListAsync(const DescribeWebPageEventListRequest& request, const DescribeWebPageEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebPageEventList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeWebPageEventListOutcomeCallable CwpClient::DescribeWebPageEventListCallable(const DescribeWebPageEventListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebPageEventListOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebPageEventList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeWebPageGeneralizeOutcome CwpClient::DescribeWebPageGeneralize(const DescribeWebPageGeneralizeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebPageGeneralize");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebPageGeneralizeResponse rsp = DescribeWebPageGeneralizeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebPageGeneralizeOutcome(rsp);
        else
            return DescribeWebPageGeneralizeOutcome(o.GetError());
    }
    else
    {
        return DescribeWebPageGeneralizeOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeWebPageGeneralizeAsync(const DescribeWebPageGeneralizeRequest& request, const DescribeWebPageGeneralizeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebPageGeneralize(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeWebPageGeneralizeOutcomeCallable CwpClient::DescribeWebPageGeneralizeCallable(const DescribeWebPageGeneralizeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebPageGeneralizeOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebPageGeneralize(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeWebPageProtectStatOutcome CwpClient::DescribeWebPageProtectStat(const DescribeWebPageProtectStatRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebPageProtectStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebPageProtectStatResponse rsp = DescribeWebPageProtectStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebPageProtectStatOutcome(rsp);
        else
            return DescribeWebPageProtectStatOutcome(o.GetError());
    }
    else
    {
        return DescribeWebPageProtectStatOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeWebPageProtectStatAsync(const DescribeWebPageProtectStatRequest& request, const DescribeWebPageProtectStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebPageProtectStat(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeWebPageProtectStatOutcomeCallable CwpClient::DescribeWebPageProtectStatCallable(const DescribeWebPageProtectStatRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebPageProtectStatOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebPageProtectStat(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeWebPageServiceInfoOutcome CwpClient::DescribeWebPageServiceInfo(const DescribeWebPageServiceInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebPageServiceInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebPageServiceInfoResponse rsp = DescribeWebPageServiceInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebPageServiceInfoOutcome(rsp);
        else
            return DescribeWebPageServiceInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeWebPageServiceInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeWebPageServiceInfoAsync(const DescribeWebPageServiceInfoRequest& request, const DescribeWebPageServiceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebPageServiceInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeWebPageServiceInfoOutcomeCallable CwpClient::DescribeWebPageServiceInfoCallable(const DescribeWebPageServiceInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebPageServiceInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebPageServiceInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DestroyOrderOutcome CwpClient::DestroyOrder(const DestroyOrderRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyOrderResponse rsp = DestroyOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyOrderOutcome(rsp);
        else
            return DestroyOrderOutcome(o.GetError());
    }
    else
    {
        return DestroyOrderOutcome(outcome.GetError());
    }
}

void CwpClient::DestroyOrderAsync(const DestroyOrderRequest& request, const DestroyOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DestroyOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DestroyOrderOutcomeCallable CwpClient::DestroyOrderCallable(const DestroyOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DestroyOrderOutcome()>>(
        [this, request]()
        {
            return this->DestroyOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::EditBashRulesOutcome CwpClient::EditBashRules(const EditBashRulesRequest &request)
{
    auto outcome = MakeRequest(request, "EditBashRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EditBashRulesResponse rsp = EditBashRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EditBashRulesOutcome(rsp);
        else
            return EditBashRulesOutcome(o.GetError());
    }
    else
    {
        return EditBashRulesOutcome(outcome.GetError());
    }
}

void CwpClient::EditBashRulesAsync(const EditBashRulesRequest& request, const EditBashRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EditBashRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::EditBashRulesOutcomeCallable CwpClient::EditBashRulesCallable(const EditBashRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EditBashRulesOutcome()>>(
        [this, request]()
        {
            return this->EditBashRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::EditPrivilegeRulesOutcome CwpClient::EditPrivilegeRules(const EditPrivilegeRulesRequest &request)
{
    auto outcome = MakeRequest(request, "EditPrivilegeRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EditPrivilegeRulesResponse rsp = EditPrivilegeRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EditPrivilegeRulesOutcome(rsp);
        else
            return EditPrivilegeRulesOutcome(o.GetError());
    }
    else
    {
        return EditPrivilegeRulesOutcome(outcome.GetError());
    }
}

void CwpClient::EditPrivilegeRulesAsync(const EditPrivilegeRulesRequest& request, const EditPrivilegeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EditPrivilegeRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::EditPrivilegeRulesOutcomeCallable CwpClient::EditPrivilegeRulesCallable(const EditPrivilegeRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EditPrivilegeRulesOutcome()>>(
        [this, request]()
        {
            return this->EditPrivilegeRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::EditReverseShellRulesOutcome CwpClient::EditReverseShellRules(const EditReverseShellRulesRequest &request)
{
    auto outcome = MakeRequest(request, "EditReverseShellRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EditReverseShellRulesResponse rsp = EditReverseShellRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EditReverseShellRulesOutcome(rsp);
        else
            return EditReverseShellRulesOutcome(o.GetError());
    }
    else
    {
        return EditReverseShellRulesOutcome(outcome.GetError());
    }
}

void CwpClient::EditReverseShellRulesAsync(const EditReverseShellRulesRequest& request, const EditReverseShellRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EditReverseShellRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::EditReverseShellRulesOutcomeCallable CwpClient::EditReverseShellRulesCallable(const EditReverseShellRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EditReverseShellRulesOutcome()>>(
        [this, request]()
        {
            return this->EditReverseShellRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::EditTagsOutcome CwpClient::EditTags(const EditTagsRequest &request)
{
    auto outcome = MakeRequest(request, "EditTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EditTagsResponse rsp = EditTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EditTagsOutcome(rsp);
        else
            return EditTagsOutcome(o.GetError());
    }
    else
    {
        return EditTagsOutcome(outcome.GetError());
    }
}

void CwpClient::EditTagsAsync(const EditTagsRequest& request, const EditTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EditTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::EditTagsOutcomeCallable CwpClient::EditTagsCallable(const EditTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EditTagsOutcome()>>(
        [this, request]()
        {
            return this->EditTags(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportAssetAppListOutcome CwpClient::ExportAssetAppList(const ExportAssetAppListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetAppList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetAppListResponse rsp = ExportAssetAppListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetAppListOutcome(rsp);
        else
            return ExportAssetAppListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetAppListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetAppListAsync(const ExportAssetAppListRequest& request, const ExportAssetAppListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportAssetAppList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportAssetAppListOutcomeCallable CwpClient::ExportAssetAppListCallable(const ExportAssetAppListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportAssetAppListOutcome()>>(
        [this, request]()
        {
            return this->ExportAssetAppList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportAssetCoreModuleListOutcome CwpClient::ExportAssetCoreModuleList(const ExportAssetCoreModuleListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetCoreModuleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetCoreModuleListResponse rsp = ExportAssetCoreModuleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetCoreModuleListOutcome(rsp);
        else
            return ExportAssetCoreModuleListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetCoreModuleListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetCoreModuleListAsync(const ExportAssetCoreModuleListRequest& request, const ExportAssetCoreModuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportAssetCoreModuleList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportAssetCoreModuleListOutcomeCallable CwpClient::ExportAssetCoreModuleListCallable(const ExportAssetCoreModuleListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportAssetCoreModuleListOutcome()>>(
        [this, request]()
        {
            return this->ExportAssetCoreModuleList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportAssetDatabaseListOutcome CwpClient::ExportAssetDatabaseList(const ExportAssetDatabaseListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetDatabaseList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetDatabaseListResponse rsp = ExportAssetDatabaseListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetDatabaseListOutcome(rsp);
        else
            return ExportAssetDatabaseListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetDatabaseListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetDatabaseListAsync(const ExportAssetDatabaseListRequest& request, const ExportAssetDatabaseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportAssetDatabaseList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportAssetDatabaseListOutcomeCallable CwpClient::ExportAssetDatabaseListCallable(const ExportAssetDatabaseListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportAssetDatabaseListOutcome()>>(
        [this, request]()
        {
            return this->ExportAssetDatabaseList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportAssetEnvListOutcome CwpClient::ExportAssetEnvList(const ExportAssetEnvListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetEnvList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetEnvListResponse rsp = ExportAssetEnvListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetEnvListOutcome(rsp);
        else
            return ExportAssetEnvListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetEnvListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetEnvListAsync(const ExportAssetEnvListRequest& request, const ExportAssetEnvListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportAssetEnvList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportAssetEnvListOutcomeCallable CwpClient::ExportAssetEnvListCallable(const ExportAssetEnvListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportAssetEnvListOutcome()>>(
        [this, request]()
        {
            return this->ExportAssetEnvList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportAssetInitServiceListOutcome CwpClient::ExportAssetInitServiceList(const ExportAssetInitServiceListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetInitServiceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetInitServiceListResponse rsp = ExportAssetInitServiceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetInitServiceListOutcome(rsp);
        else
            return ExportAssetInitServiceListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetInitServiceListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetInitServiceListAsync(const ExportAssetInitServiceListRequest& request, const ExportAssetInitServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportAssetInitServiceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportAssetInitServiceListOutcomeCallable CwpClient::ExportAssetInitServiceListCallable(const ExportAssetInitServiceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportAssetInitServiceListOutcome()>>(
        [this, request]()
        {
            return this->ExportAssetInitServiceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportAssetJarListOutcome CwpClient::ExportAssetJarList(const ExportAssetJarListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetJarList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetJarListResponse rsp = ExportAssetJarListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetJarListOutcome(rsp);
        else
            return ExportAssetJarListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetJarListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetJarListAsync(const ExportAssetJarListRequest& request, const ExportAssetJarListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportAssetJarList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportAssetJarListOutcomeCallable CwpClient::ExportAssetJarListCallable(const ExportAssetJarListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportAssetJarListOutcome()>>(
        [this, request]()
        {
            return this->ExportAssetJarList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportAssetMachineDetailOutcome CwpClient::ExportAssetMachineDetail(const ExportAssetMachineDetailRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetMachineDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetMachineDetailResponse rsp = ExportAssetMachineDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetMachineDetailOutcome(rsp);
        else
            return ExportAssetMachineDetailOutcome(o.GetError());
    }
    else
    {
        return ExportAssetMachineDetailOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetMachineDetailAsync(const ExportAssetMachineDetailRequest& request, const ExportAssetMachineDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportAssetMachineDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportAssetMachineDetailOutcomeCallable CwpClient::ExportAssetMachineDetailCallable(const ExportAssetMachineDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportAssetMachineDetailOutcome()>>(
        [this, request]()
        {
            return this->ExportAssetMachineDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportAssetMachineListOutcome CwpClient::ExportAssetMachineList(const ExportAssetMachineListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetMachineList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetMachineListResponse rsp = ExportAssetMachineListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetMachineListOutcome(rsp);
        else
            return ExportAssetMachineListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetMachineListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetMachineListAsync(const ExportAssetMachineListRequest& request, const ExportAssetMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportAssetMachineList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportAssetMachineListOutcomeCallable CwpClient::ExportAssetMachineListCallable(const ExportAssetMachineListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportAssetMachineListOutcome()>>(
        [this, request]()
        {
            return this->ExportAssetMachineList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportAssetPlanTaskListOutcome CwpClient::ExportAssetPlanTaskList(const ExportAssetPlanTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetPlanTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetPlanTaskListResponse rsp = ExportAssetPlanTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetPlanTaskListOutcome(rsp);
        else
            return ExportAssetPlanTaskListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetPlanTaskListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetPlanTaskListAsync(const ExportAssetPlanTaskListRequest& request, const ExportAssetPlanTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportAssetPlanTaskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportAssetPlanTaskListOutcomeCallable CwpClient::ExportAssetPlanTaskListCallable(const ExportAssetPlanTaskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportAssetPlanTaskListOutcome()>>(
        [this, request]()
        {
            return this->ExportAssetPlanTaskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportAssetPortInfoListOutcome CwpClient::ExportAssetPortInfoList(const ExportAssetPortInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetPortInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetPortInfoListResponse rsp = ExportAssetPortInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetPortInfoListOutcome(rsp);
        else
            return ExportAssetPortInfoListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetPortInfoListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetPortInfoListAsync(const ExportAssetPortInfoListRequest& request, const ExportAssetPortInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportAssetPortInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportAssetPortInfoListOutcomeCallable CwpClient::ExportAssetPortInfoListCallable(const ExportAssetPortInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportAssetPortInfoListOutcome()>>(
        [this, request]()
        {
            return this->ExportAssetPortInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportAssetProcessInfoListOutcome CwpClient::ExportAssetProcessInfoList(const ExportAssetProcessInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetProcessInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetProcessInfoListResponse rsp = ExportAssetProcessInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetProcessInfoListOutcome(rsp);
        else
            return ExportAssetProcessInfoListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetProcessInfoListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetProcessInfoListAsync(const ExportAssetProcessInfoListRequest& request, const ExportAssetProcessInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportAssetProcessInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportAssetProcessInfoListOutcomeCallable CwpClient::ExportAssetProcessInfoListCallable(const ExportAssetProcessInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportAssetProcessInfoListOutcome()>>(
        [this, request]()
        {
            return this->ExportAssetProcessInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportAssetRecentMachineInfoOutcome CwpClient::ExportAssetRecentMachineInfo(const ExportAssetRecentMachineInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetRecentMachineInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetRecentMachineInfoResponse rsp = ExportAssetRecentMachineInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetRecentMachineInfoOutcome(rsp);
        else
            return ExportAssetRecentMachineInfoOutcome(o.GetError());
    }
    else
    {
        return ExportAssetRecentMachineInfoOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetRecentMachineInfoAsync(const ExportAssetRecentMachineInfoRequest& request, const ExportAssetRecentMachineInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportAssetRecentMachineInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportAssetRecentMachineInfoOutcomeCallable CwpClient::ExportAssetRecentMachineInfoCallable(const ExportAssetRecentMachineInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportAssetRecentMachineInfoOutcome()>>(
        [this, request]()
        {
            return this->ExportAssetRecentMachineInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportAssetSystemPackageListOutcome CwpClient::ExportAssetSystemPackageList(const ExportAssetSystemPackageListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetSystemPackageList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetSystemPackageListResponse rsp = ExportAssetSystemPackageListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetSystemPackageListOutcome(rsp);
        else
            return ExportAssetSystemPackageListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetSystemPackageListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetSystemPackageListAsync(const ExportAssetSystemPackageListRequest& request, const ExportAssetSystemPackageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportAssetSystemPackageList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportAssetSystemPackageListOutcomeCallable CwpClient::ExportAssetSystemPackageListCallable(const ExportAssetSystemPackageListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportAssetSystemPackageListOutcome()>>(
        [this, request]()
        {
            return this->ExportAssetSystemPackageList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportAssetUserListOutcome CwpClient::ExportAssetUserList(const ExportAssetUserListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetUserList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetUserListResponse rsp = ExportAssetUserListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetUserListOutcome(rsp);
        else
            return ExportAssetUserListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetUserListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetUserListAsync(const ExportAssetUserListRequest& request, const ExportAssetUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportAssetUserList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportAssetUserListOutcomeCallable CwpClient::ExportAssetUserListCallable(const ExportAssetUserListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportAssetUserListOutcome()>>(
        [this, request]()
        {
            return this->ExportAssetUserList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportAssetWebAppListOutcome CwpClient::ExportAssetWebAppList(const ExportAssetWebAppListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetWebAppList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetWebAppListResponse rsp = ExportAssetWebAppListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetWebAppListOutcome(rsp);
        else
            return ExportAssetWebAppListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetWebAppListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetWebAppListAsync(const ExportAssetWebAppListRequest& request, const ExportAssetWebAppListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportAssetWebAppList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportAssetWebAppListOutcomeCallable CwpClient::ExportAssetWebAppListCallable(const ExportAssetWebAppListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportAssetWebAppListOutcome()>>(
        [this, request]()
        {
            return this->ExportAssetWebAppList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportAssetWebFrameListOutcome CwpClient::ExportAssetWebFrameList(const ExportAssetWebFrameListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetWebFrameList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetWebFrameListResponse rsp = ExportAssetWebFrameListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetWebFrameListOutcome(rsp);
        else
            return ExportAssetWebFrameListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetWebFrameListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetWebFrameListAsync(const ExportAssetWebFrameListRequest& request, const ExportAssetWebFrameListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportAssetWebFrameList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportAssetWebFrameListOutcomeCallable CwpClient::ExportAssetWebFrameListCallable(const ExportAssetWebFrameListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportAssetWebFrameListOutcome()>>(
        [this, request]()
        {
            return this->ExportAssetWebFrameList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportAssetWebLocationListOutcome CwpClient::ExportAssetWebLocationList(const ExportAssetWebLocationListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetWebLocationList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetWebLocationListResponse rsp = ExportAssetWebLocationListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetWebLocationListOutcome(rsp);
        else
            return ExportAssetWebLocationListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetWebLocationListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetWebLocationListAsync(const ExportAssetWebLocationListRequest& request, const ExportAssetWebLocationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportAssetWebLocationList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportAssetWebLocationListOutcomeCallable CwpClient::ExportAssetWebLocationListCallable(const ExportAssetWebLocationListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportAssetWebLocationListOutcome()>>(
        [this, request]()
        {
            return this->ExportAssetWebLocationList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportAssetWebServiceInfoListOutcome CwpClient::ExportAssetWebServiceInfoList(const ExportAssetWebServiceInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetWebServiceInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetWebServiceInfoListResponse rsp = ExportAssetWebServiceInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetWebServiceInfoListOutcome(rsp);
        else
            return ExportAssetWebServiceInfoListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetWebServiceInfoListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetWebServiceInfoListAsync(const ExportAssetWebServiceInfoListRequest& request, const ExportAssetWebServiceInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportAssetWebServiceInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportAssetWebServiceInfoListOutcomeCallable CwpClient::ExportAssetWebServiceInfoListCallable(const ExportAssetWebServiceInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportAssetWebServiceInfoListOutcome()>>(
        [this, request]()
        {
            return this->ExportAssetWebServiceInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportAttackEventsOutcome CwpClient::ExportAttackEvents(const ExportAttackEventsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAttackEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAttackEventsResponse rsp = ExportAttackEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAttackEventsOutcome(rsp);
        else
            return ExportAttackEventsOutcome(o.GetError());
    }
    else
    {
        return ExportAttackEventsOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAttackEventsAsync(const ExportAttackEventsRequest& request, const ExportAttackEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportAttackEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportAttackEventsOutcomeCallable CwpClient::ExportAttackEventsCallable(const ExportAttackEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportAttackEventsOutcome()>>(
        [this, request]()
        {
            return this->ExportAttackEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportBaselineEffectHostListOutcome CwpClient::ExportBaselineEffectHostList(const ExportBaselineEffectHostListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportBaselineEffectHostList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportBaselineEffectHostListResponse rsp = ExportBaselineEffectHostListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportBaselineEffectHostListOutcome(rsp);
        else
            return ExportBaselineEffectHostListOutcome(o.GetError());
    }
    else
    {
        return ExportBaselineEffectHostListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportBaselineEffectHostListAsync(const ExportBaselineEffectHostListRequest& request, const ExportBaselineEffectHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportBaselineEffectHostList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportBaselineEffectHostListOutcomeCallable CwpClient::ExportBaselineEffectHostListCallable(const ExportBaselineEffectHostListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportBaselineEffectHostListOutcome()>>(
        [this, request]()
        {
            return this->ExportBaselineEffectHostList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportBaselineFixListOutcome CwpClient::ExportBaselineFixList(const ExportBaselineFixListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportBaselineFixList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportBaselineFixListResponse rsp = ExportBaselineFixListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportBaselineFixListOutcome(rsp);
        else
            return ExportBaselineFixListOutcome(o.GetError());
    }
    else
    {
        return ExportBaselineFixListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportBaselineFixListAsync(const ExportBaselineFixListRequest& request, const ExportBaselineFixListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportBaselineFixList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportBaselineFixListOutcomeCallable CwpClient::ExportBaselineFixListCallable(const ExportBaselineFixListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportBaselineFixListOutcome()>>(
        [this, request]()
        {
            return this->ExportBaselineFixList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportBaselineHostDetectListOutcome CwpClient::ExportBaselineHostDetectList(const ExportBaselineHostDetectListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportBaselineHostDetectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportBaselineHostDetectListResponse rsp = ExportBaselineHostDetectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportBaselineHostDetectListOutcome(rsp);
        else
            return ExportBaselineHostDetectListOutcome(o.GetError());
    }
    else
    {
        return ExportBaselineHostDetectListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportBaselineHostDetectListAsync(const ExportBaselineHostDetectListRequest& request, const ExportBaselineHostDetectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportBaselineHostDetectList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportBaselineHostDetectListOutcomeCallable CwpClient::ExportBaselineHostDetectListCallable(const ExportBaselineHostDetectListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportBaselineHostDetectListOutcome()>>(
        [this, request]()
        {
            return this->ExportBaselineHostDetectList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportBaselineItemDetectListOutcome CwpClient::ExportBaselineItemDetectList(const ExportBaselineItemDetectListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportBaselineItemDetectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportBaselineItemDetectListResponse rsp = ExportBaselineItemDetectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportBaselineItemDetectListOutcome(rsp);
        else
            return ExportBaselineItemDetectListOutcome(o.GetError());
    }
    else
    {
        return ExportBaselineItemDetectListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportBaselineItemDetectListAsync(const ExportBaselineItemDetectListRequest& request, const ExportBaselineItemDetectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportBaselineItemDetectList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportBaselineItemDetectListOutcomeCallable CwpClient::ExportBaselineItemDetectListCallable(const ExportBaselineItemDetectListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportBaselineItemDetectListOutcome()>>(
        [this, request]()
        {
            return this->ExportBaselineItemDetectList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportBaselineItemListOutcome CwpClient::ExportBaselineItemList(const ExportBaselineItemListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportBaselineItemList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportBaselineItemListResponse rsp = ExportBaselineItemListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportBaselineItemListOutcome(rsp);
        else
            return ExportBaselineItemListOutcome(o.GetError());
    }
    else
    {
        return ExportBaselineItemListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportBaselineItemListAsync(const ExportBaselineItemListRequest& request, const ExportBaselineItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportBaselineItemList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportBaselineItemListOutcomeCallable CwpClient::ExportBaselineItemListCallable(const ExportBaselineItemListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportBaselineItemListOutcome()>>(
        [this, request]()
        {
            return this->ExportBaselineItemList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportBaselineListOutcome CwpClient::ExportBaselineList(const ExportBaselineListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportBaselineList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportBaselineListResponse rsp = ExportBaselineListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportBaselineListOutcome(rsp);
        else
            return ExportBaselineListOutcome(o.GetError());
    }
    else
    {
        return ExportBaselineListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportBaselineListAsync(const ExportBaselineListRequest& request, const ExportBaselineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportBaselineList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportBaselineListOutcomeCallable CwpClient::ExportBaselineListCallable(const ExportBaselineListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportBaselineListOutcome()>>(
        [this, request]()
        {
            return this->ExportBaselineList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportBaselineRuleDetectListOutcome CwpClient::ExportBaselineRuleDetectList(const ExportBaselineRuleDetectListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportBaselineRuleDetectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportBaselineRuleDetectListResponse rsp = ExportBaselineRuleDetectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportBaselineRuleDetectListOutcome(rsp);
        else
            return ExportBaselineRuleDetectListOutcome(o.GetError());
    }
    else
    {
        return ExportBaselineRuleDetectListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportBaselineRuleDetectListAsync(const ExportBaselineRuleDetectListRequest& request, const ExportBaselineRuleDetectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportBaselineRuleDetectList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportBaselineRuleDetectListOutcomeCallable CwpClient::ExportBaselineRuleDetectListCallable(const ExportBaselineRuleDetectListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportBaselineRuleDetectListOutcome()>>(
        [this, request]()
        {
            return this->ExportBaselineRuleDetectList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportBaselineWeakPasswordListOutcome CwpClient::ExportBaselineWeakPasswordList(const ExportBaselineWeakPasswordListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportBaselineWeakPasswordList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportBaselineWeakPasswordListResponse rsp = ExportBaselineWeakPasswordListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportBaselineWeakPasswordListOutcome(rsp);
        else
            return ExportBaselineWeakPasswordListOutcome(o.GetError());
    }
    else
    {
        return ExportBaselineWeakPasswordListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportBaselineWeakPasswordListAsync(const ExportBaselineWeakPasswordListRequest& request, const ExportBaselineWeakPasswordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportBaselineWeakPasswordList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportBaselineWeakPasswordListOutcomeCallable CwpClient::ExportBaselineWeakPasswordListCallable(const ExportBaselineWeakPasswordListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportBaselineWeakPasswordListOutcome()>>(
        [this, request]()
        {
            return this->ExportBaselineWeakPasswordList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportBashEventsOutcome CwpClient::ExportBashEvents(const ExportBashEventsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportBashEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportBashEventsResponse rsp = ExportBashEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportBashEventsOutcome(rsp);
        else
            return ExportBashEventsOutcome(o.GetError());
    }
    else
    {
        return ExportBashEventsOutcome(outcome.GetError());
    }
}

void CwpClient::ExportBashEventsAsync(const ExportBashEventsRequest& request, const ExportBashEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportBashEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportBashEventsOutcomeCallable CwpClient::ExportBashEventsCallable(const ExportBashEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportBashEventsOutcome()>>(
        [this, request]()
        {
            return this->ExportBashEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportBashEventsNewOutcome CwpClient::ExportBashEventsNew(const ExportBashEventsNewRequest &request)
{
    auto outcome = MakeRequest(request, "ExportBashEventsNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportBashEventsNewResponse rsp = ExportBashEventsNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportBashEventsNewOutcome(rsp);
        else
            return ExportBashEventsNewOutcome(o.GetError());
    }
    else
    {
        return ExportBashEventsNewOutcome(outcome.GetError());
    }
}

void CwpClient::ExportBashEventsNewAsync(const ExportBashEventsNewRequest& request, const ExportBashEventsNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportBashEventsNew(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportBashEventsNewOutcomeCallable CwpClient::ExportBashEventsNewCallable(const ExportBashEventsNewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportBashEventsNewOutcome()>>(
        [this, request]()
        {
            return this->ExportBashEventsNew(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportBashPoliciesOutcome CwpClient::ExportBashPolicies(const ExportBashPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "ExportBashPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportBashPoliciesResponse rsp = ExportBashPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportBashPoliciesOutcome(rsp);
        else
            return ExportBashPoliciesOutcome(o.GetError());
    }
    else
    {
        return ExportBashPoliciesOutcome(outcome.GetError());
    }
}

void CwpClient::ExportBashPoliciesAsync(const ExportBashPoliciesRequest& request, const ExportBashPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportBashPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportBashPoliciesOutcomeCallable CwpClient::ExportBashPoliciesCallable(const ExportBashPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportBashPoliciesOutcome()>>(
        [this, request]()
        {
            return this->ExportBashPolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportBruteAttacksOutcome CwpClient::ExportBruteAttacks(const ExportBruteAttacksRequest &request)
{
    auto outcome = MakeRequest(request, "ExportBruteAttacks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportBruteAttacksResponse rsp = ExportBruteAttacksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportBruteAttacksOutcome(rsp);
        else
            return ExportBruteAttacksOutcome(o.GetError());
    }
    else
    {
        return ExportBruteAttacksOutcome(outcome.GetError());
    }
}

void CwpClient::ExportBruteAttacksAsync(const ExportBruteAttacksRequest& request, const ExportBruteAttacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportBruteAttacks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportBruteAttacksOutcomeCallable CwpClient::ExportBruteAttacksCallable(const ExportBruteAttacksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportBruteAttacksOutcome()>>(
        [this, request]()
        {
            return this->ExportBruteAttacks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportFileTamperEventsOutcome CwpClient::ExportFileTamperEvents(const ExportFileTamperEventsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportFileTamperEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportFileTamperEventsResponse rsp = ExportFileTamperEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportFileTamperEventsOutcome(rsp);
        else
            return ExportFileTamperEventsOutcome(o.GetError());
    }
    else
    {
        return ExportFileTamperEventsOutcome(outcome.GetError());
    }
}

void CwpClient::ExportFileTamperEventsAsync(const ExportFileTamperEventsRequest& request, const ExportFileTamperEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportFileTamperEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportFileTamperEventsOutcomeCallable CwpClient::ExportFileTamperEventsCallable(const ExportFileTamperEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportFileTamperEventsOutcome()>>(
        [this, request]()
        {
            return this->ExportFileTamperEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportFileTamperRulesOutcome CwpClient::ExportFileTamperRules(const ExportFileTamperRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ExportFileTamperRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportFileTamperRulesResponse rsp = ExportFileTamperRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportFileTamperRulesOutcome(rsp);
        else
            return ExportFileTamperRulesOutcome(o.GetError());
    }
    else
    {
        return ExportFileTamperRulesOutcome(outcome.GetError());
    }
}

void CwpClient::ExportFileTamperRulesAsync(const ExportFileTamperRulesRequest& request, const ExportFileTamperRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportFileTamperRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportFileTamperRulesOutcomeCallable CwpClient::ExportFileTamperRulesCallable(const ExportFileTamperRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportFileTamperRulesOutcome()>>(
        [this, request]()
        {
            return this->ExportFileTamperRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportIgnoreBaselineRuleOutcome CwpClient::ExportIgnoreBaselineRule(const ExportIgnoreBaselineRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ExportIgnoreBaselineRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportIgnoreBaselineRuleResponse rsp = ExportIgnoreBaselineRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportIgnoreBaselineRuleOutcome(rsp);
        else
            return ExportIgnoreBaselineRuleOutcome(o.GetError());
    }
    else
    {
        return ExportIgnoreBaselineRuleOutcome(outcome.GetError());
    }
}

void CwpClient::ExportIgnoreBaselineRuleAsync(const ExportIgnoreBaselineRuleRequest& request, const ExportIgnoreBaselineRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportIgnoreBaselineRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportIgnoreBaselineRuleOutcomeCallable CwpClient::ExportIgnoreBaselineRuleCallable(const ExportIgnoreBaselineRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportIgnoreBaselineRuleOutcome()>>(
        [this, request]()
        {
            return this->ExportIgnoreBaselineRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportIgnoreRuleEffectHostListOutcome CwpClient::ExportIgnoreRuleEffectHostList(const ExportIgnoreRuleEffectHostListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportIgnoreRuleEffectHostList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportIgnoreRuleEffectHostListResponse rsp = ExportIgnoreRuleEffectHostListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportIgnoreRuleEffectHostListOutcome(rsp);
        else
            return ExportIgnoreRuleEffectHostListOutcome(o.GetError());
    }
    else
    {
        return ExportIgnoreRuleEffectHostListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportIgnoreRuleEffectHostListAsync(const ExportIgnoreRuleEffectHostListRequest& request, const ExportIgnoreRuleEffectHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportIgnoreRuleEffectHostList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportIgnoreRuleEffectHostListOutcomeCallable CwpClient::ExportIgnoreRuleEffectHostListCallable(const ExportIgnoreRuleEffectHostListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportIgnoreRuleEffectHostListOutcome()>>(
        [this, request]()
        {
            return this->ExportIgnoreRuleEffectHostList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportJavaMemShellPluginsOutcome CwpClient::ExportJavaMemShellPlugins(const ExportJavaMemShellPluginsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportJavaMemShellPlugins");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportJavaMemShellPluginsResponse rsp = ExportJavaMemShellPluginsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportJavaMemShellPluginsOutcome(rsp);
        else
            return ExportJavaMemShellPluginsOutcome(o.GetError());
    }
    else
    {
        return ExportJavaMemShellPluginsOutcome(outcome.GetError());
    }
}

void CwpClient::ExportJavaMemShellPluginsAsync(const ExportJavaMemShellPluginsRequest& request, const ExportJavaMemShellPluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportJavaMemShellPlugins(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportJavaMemShellPluginsOutcomeCallable CwpClient::ExportJavaMemShellPluginsCallable(const ExportJavaMemShellPluginsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportJavaMemShellPluginsOutcome()>>(
        [this, request]()
        {
            return this->ExportJavaMemShellPlugins(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportJavaMemShellsOutcome CwpClient::ExportJavaMemShells(const ExportJavaMemShellsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportJavaMemShells");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportJavaMemShellsResponse rsp = ExportJavaMemShellsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportJavaMemShellsOutcome(rsp);
        else
            return ExportJavaMemShellsOutcome(o.GetError());
    }
    else
    {
        return ExportJavaMemShellsOutcome(outcome.GetError());
    }
}

void CwpClient::ExportJavaMemShellsAsync(const ExportJavaMemShellsRequest& request, const ExportJavaMemShellsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportJavaMemShells(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportJavaMemShellsOutcomeCallable CwpClient::ExportJavaMemShellsCallable(const ExportJavaMemShellsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportJavaMemShellsOutcome()>>(
        [this, request]()
        {
            return this->ExportJavaMemShells(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportLicenseDetailOutcome CwpClient::ExportLicenseDetail(const ExportLicenseDetailRequest &request)
{
    auto outcome = MakeRequest(request, "ExportLicenseDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportLicenseDetailResponse rsp = ExportLicenseDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportLicenseDetailOutcome(rsp);
        else
            return ExportLicenseDetailOutcome(o.GetError());
    }
    else
    {
        return ExportLicenseDetailOutcome(outcome.GetError());
    }
}

void CwpClient::ExportLicenseDetailAsync(const ExportLicenseDetailRequest& request, const ExportLicenseDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportLicenseDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportLicenseDetailOutcomeCallable CwpClient::ExportLicenseDetailCallable(const ExportLicenseDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportLicenseDetailOutcome()>>(
        [this, request]()
        {
            return this->ExportLicenseDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportMaliciousRequestsOutcome CwpClient::ExportMaliciousRequests(const ExportMaliciousRequestsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportMaliciousRequests");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportMaliciousRequestsResponse rsp = ExportMaliciousRequestsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportMaliciousRequestsOutcome(rsp);
        else
            return ExportMaliciousRequestsOutcome(o.GetError());
    }
    else
    {
        return ExportMaliciousRequestsOutcome(outcome.GetError());
    }
}

void CwpClient::ExportMaliciousRequestsAsync(const ExportMaliciousRequestsRequest& request, const ExportMaliciousRequestsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportMaliciousRequests(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportMaliciousRequestsOutcomeCallable CwpClient::ExportMaliciousRequestsCallable(const ExportMaliciousRequestsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportMaliciousRequestsOutcome()>>(
        [this, request]()
        {
            return this->ExportMaliciousRequests(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportMalwaresOutcome CwpClient::ExportMalwares(const ExportMalwaresRequest &request)
{
    auto outcome = MakeRequest(request, "ExportMalwares");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportMalwaresResponse rsp = ExportMalwaresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportMalwaresOutcome(rsp);
        else
            return ExportMalwaresOutcome(o.GetError());
    }
    else
    {
        return ExportMalwaresOutcome(outcome.GetError());
    }
}

void CwpClient::ExportMalwaresAsync(const ExportMalwaresRequest& request, const ExportMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportMalwares(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportMalwaresOutcomeCallable CwpClient::ExportMalwaresCallable(const ExportMalwaresRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportMalwaresOutcome()>>(
        [this, request]()
        {
            return this->ExportMalwares(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportNonlocalLoginPlacesOutcome CwpClient::ExportNonlocalLoginPlaces(const ExportNonlocalLoginPlacesRequest &request)
{
    auto outcome = MakeRequest(request, "ExportNonlocalLoginPlaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportNonlocalLoginPlacesResponse rsp = ExportNonlocalLoginPlacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportNonlocalLoginPlacesOutcome(rsp);
        else
            return ExportNonlocalLoginPlacesOutcome(o.GetError());
    }
    else
    {
        return ExportNonlocalLoginPlacesOutcome(outcome.GetError());
    }
}

void CwpClient::ExportNonlocalLoginPlacesAsync(const ExportNonlocalLoginPlacesRequest& request, const ExportNonlocalLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportNonlocalLoginPlaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportNonlocalLoginPlacesOutcomeCallable CwpClient::ExportNonlocalLoginPlacesCallable(const ExportNonlocalLoginPlacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportNonlocalLoginPlacesOutcome()>>(
        [this, request]()
        {
            return this->ExportNonlocalLoginPlaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportPrivilegeEventsOutcome CwpClient::ExportPrivilegeEvents(const ExportPrivilegeEventsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportPrivilegeEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportPrivilegeEventsResponse rsp = ExportPrivilegeEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportPrivilegeEventsOutcome(rsp);
        else
            return ExportPrivilegeEventsOutcome(o.GetError());
    }
    else
    {
        return ExportPrivilegeEventsOutcome(outcome.GetError());
    }
}

void CwpClient::ExportPrivilegeEventsAsync(const ExportPrivilegeEventsRequest& request, const ExportPrivilegeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportPrivilegeEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportPrivilegeEventsOutcomeCallable CwpClient::ExportPrivilegeEventsCallable(const ExportPrivilegeEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportPrivilegeEventsOutcome()>>(
        [this, request]()
        {
            return this->ExportPrivilegeEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportProtectDirListOutcome CwpClient::ExportProtectDirList(const ExportProtectDirListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportProtectDirList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportProtectDirListResponse rsp = ExportProtectDirListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportProtectDirListOutcome(rsp);
        else
            return ExportProtectDirListOutcome(o.GetError());
    }
    else
    {
        return ExportProtectDirListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportProtectDirListAsync(const ExportProtectDirListRequest& request, const ExportProtectDirListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportProtectDirList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportProtectDirListOutcomeCallable CwpClient::ExportProtectDirListCallable(const ExportProtectDirListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportProtectDirListOutcome()>>(
        [this, request]()
        {
            return this->ExportProtectDirList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportRansomDefenseBackupListOutcome CwpClient::ExportRansomDefenseBackupList(const ExportRansomDefenseBackupListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportRansomDefenseBackupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportRansomDefenseBackupListResponse rsp = ExportRansomDefenseBackupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportRansomDefenseBackupListOutcome(rsp);
        else
            return ExportRansomDefenseBackupListOutcome(o.GetError());
    }
    else
    {
        return ExportRansomDefenseBackupListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportRansomDefenseBackupListAsync(const ExportRansomDefenseBackupListRequest& request, const ExportRansomDefenseBackupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportRansomDefenseBackupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportRansomDefenseBackupListOutcomeCallable CwpClient::ExportRansomDefenseBackupListCallable(const ExportRansomDefenseBackupListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportRansomDefenseBackupListOutcome()>>(
        [this, request]()
        {
            return this->ExportRansomDefenseBackupList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportRansomDefenseEventsListOutcome CwpClient::ExportRansomDefenseEventsList(const ExportRansomDefenseEventsListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportRansomDefenseEventsList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportRansomDefenseEventsListResponse rsp = ExportRansomDefenseEventsListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportRansomDefenseEventsListOutcome(rsp);
        else
            return ExportRansomDefenseEventsListOutcome(o.GetError());
    }
    else
    {
        return ExportRansomDefenseEventsListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportRansomDefenseEventsListAsync(const ExportRansomDefenseEventsListRequest& request, const ExportRansomDefenseEventsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportRansomDefenseEventsList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportRansomDefenseEventsListOutcomeCallable CwpClient::ExportRansomDefenseEventsListCallable(const ExportRansomDefenseEventsListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportRansomDefenseEventsListOutcome()>>(
        [this, request]()
        {
            return this->ExportRansomDefenseEventsList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportRansomDefenseMachineListOutcome CwpClient::ExportRansomDefenseMachineList(const ExportRansomDefenseMachineListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportRansomDefenseMachineList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportRansomDefenseMachineListResponse rsp = ExportRansomDefenseMachineListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportRansomDefenseMachineListOutcome(rsp);
        else
            return ExportRansomDefenseMachineListOutcome(o.GetError());
    }
    else
    {
        return ExportRansomDefenseMachineListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportRansomDefenseMachineListAsync(const ExportRansomDefenseMachineListRequest& request, const ExportRansomDefenseMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportRansomDefenseMachineList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportRansomDefenseMachineListOutcomeCallable CwpClient::ExportRansomDefenseMachineListCallable(const ExportRansomDefenseMachineListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportRansomDefenseMachineListOutcome()>>(
        [this, request]()
        {
            return this->ExportRansomDefenseMachineList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportRansomDefenseStrategyListOutcome CwpClient::ExportRansomDefenseStrategyList(const ExportRansomDefenseStrategyListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportRansomDefenseStrategyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportRansomDefenseStrategyListResponse rsp = ExportRansomDefenseStrategyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportRansomDefenseStrategyListOutcome(rsp);
        else
            return ExportRansomDefenseStrategyListOutcome(o.GetError());
    }
    else
    {
        return ExportRansomDefenseStrategyListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportRansomDefenseStrategyListAsync(const ExportRansomDefenseStrategyListRequest& request, const ExportRansomDefenseStrategyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportRansomDefenseStrategyList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportRansomDefenseStrategyListOutcomeCallable CwpClient::ExportRansomDefenseStrategyListCallable(const ExportRansomDefenseStrategyListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportRansomDefenseStrategyListOutcome()>>(
        [this, request]()
        {
            return this->ExportRansomDefenseStrategyList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportRansomDefenseStrategyMachinesOutcome CwpClient::ExportRansomDefenseStrategyMachines(const ExportRansomDefenseStrategyMachinesRequest &request)
{
    auto outcome = MakeRequest(request, "ExportRansomDefenseStrategyMachines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportRansomDefenseStrategyMachinesResponse rsp = ExportRansomDefenseStrategyMachinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportRansomDefenseStrategyMachinesOutcome(rsp);
        else
            return ExportRansomDefenseStrategyMachinesOutcome(o.GetError());
    }
    else
    {
        return ExportRansomDefenseStrategyMachinesOutcome(outcome.GetError());
    }
}

void CwpClient::ExportRansomDefenseStrategyMachinesAsync(const ExportRansomDefenseStrategyMachinesRequest& request, const ExportRansomDefenseStrategyMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportRansomDefenseStrategyMachines(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportRansomDefenseStrategyMachinesOutcomeCallable CwpClient::ExportRansomDefenseStrategyMachinesCallable(const ExportRansomDefenseStrategyMachinesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportRansomDefenseStrategyMachinesOutcome()>>(
        [this, request]()
        {
            return this->ExportRansomDefenseStrategyMachines(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportReverseShellEventsOutcome CwpClient::ExportReverseShellEvents(const ExportReverseShellEventsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportReverseShellEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportReverseShellEventsResponse rsp = ExportReverseShellEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportReverseShellEventsOutcome(rsp);
        else
            return ExportReverseShellEventsOutcome(o.GetError());
    }
    else
    {
        return ExportReverseShellEventsOutcome(outcome.GetError());
    }
}

void CwpClient::ExportReverseShellEventsAsync(const ExportReverseShellEventsRequest& request, const ExportReverseShellEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportReverseShellEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportReverseShellEventsOutcomeCallable CwpClient::ExportReverseShellEventsCallable(const ExportReverseShellEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportReverseShellEventsOutcome()>>(
        [this, request]()
        {
            return this->ExportReverseShellEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportRiskDnsEventListOutcome CwpClient::ExportRiskDnsEventList(const ExportRiskDnsEventListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportRiskDnsEventList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportRiskDnsEventListResponse rsp = ExportRiskDnsEventListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportRiskDnsEventListOutcome(rsp);
        else
            return ExportRiskDnsEventListOutcome(o.GetError());
    }
    else
    {
        return ExportRiskDnsEventListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportRiskDnsEventListAsync(const ExportRiskDnsEventListRequest& request, const ExportRiskDnsEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportRiskDnsEventList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportRiskDnsEventListOutcomeCallable CwpClient::ExportRiskDnsEventListCallable(const ExportRiskDnsEventListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportRiskDnsEventListOutcome()>>(
        [this, request]()
        {
            return this->ExportRiskDnsEventList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportRiskDnsPolicyListOutcome CwpClient::ExportRiskDnsPolicyList(const ExportRiskDnsPolicyListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportRiskDnsPolicyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportRiskDnsPolicyListResponse rsp = ExportRiskDnsPolicyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportRiskDnsPolicyListOutcome(rsp);
        else
            return ExportRiskDnsPolicyListOutcome(o.GetError());
    }
    else
    {
        return ExportRiskDnsPolicyListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportRiskDnsPolicyListAsync(const ExportRiskDnsPolicyListRequest& request, const ExportRiskDnsPolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportRiskDnsPolicyList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportRiskDnsPolicyListOutcomeCallable CwpClient::ExportRiskDnsPolicyListCallable(const ExportRiskDnsPolicyListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportRiskDnsPolicyListOutcome()>>(
        [this, request]()
        {
            return this->ExportRiskDnsPolicyList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportRiskProcessEventsOutcome CwpClient::ExportRiskProcessEvents(const ExportRiskProcessEventsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportRiskProcessEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportRiskProcessEventsResponse rsp = ExportRiskProcessEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportRiskProcessEventsOutcome(rsp);
        else
            return ExportRiskProcessEventsOutcome(o.GetError());
    }
    else
    {
        return ExportRiskProcessEventsOutcome(outcome.GetError());
    }
}

void CwpClient::ExportRiskProcessEventsAsync(const ExportRiskProcessEventsRequest& request, const ExportRiskProcessEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportRiskProcessEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportRiskProcessEventsOutcomeCallable CwpClient::ExportRiskProcessEventsCallable(const ExportRiskProcessEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportRiskProcessEventsOutcome()>>(
        [this, request]()
        {
            return this->ExportRiskProcessEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportScanTaskDetailsOutcome CwpClient::ExportScanTaskDetails(const ExportScanTaskDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportScanTaskDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportScanTaskDetailsResponse rsp = ExportScanTaskDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportScanTaskDetailsOutcome(rsp);
        else
            return ExportScanTaskDetailsOutcome(o.GetError());
    }
    else
    {
        return ExportScanTaskDetailsOutcome(outcome.GetError());
    }
}

void CwpClient::ExportScanTaskDetailsAsync(const ExportScanTaskDetailsRequest& request, const ExportScanTaskDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportScanTaskDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportScanTaskDetailsOutcomeCallable CwpClient::ExportScanTaskDetailsCallable(const ExportScanTaskDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportScanTaskDetailsOutcome()>>(
        [this, request]()
        {
            return this->ExportScanTaskDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportSecurityTrendsOutcome CwpClient::ExportSecurityTrends(const ExportSecurityTrendsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportSecurityTrends");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportSecurityTrendsResponse rsp = ExportSecurityTrendsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportSecurityTrendsOutcome(rsp);
        else
            return ExportSecurityTrendsOutcome(o.GetError());
    }
    else
    {
        return ExportSecurityTrendsOutcome(outcome.GetError());
    }
}

void CwpClient::ExportSecurityTrendsAsync(const ExportSecurityTrendsRequest& request, const ExportSecurityTrendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportSecurityTrends(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportSecurityTrendsOutcomeCallable CwpClient::ExportSecurityTrendsCallable(const ExportSecurityTrendsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportSecurityTrendsOutcome()>>(
        [this, request]()
        {
            return this->ExportSecurityTrends(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportTasksOutcome CwpClient::ExportTasks(const ExportTasksRequest &request)
{
    auto outcome = MakeRequest(request, "ExportTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportTasksResponse rsp = ExportTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportTasksOutcome(rsp);
        else
            return ExportTasksOutcome(o.GetError());
    }
    else
    {
        return ExportTasksOutcome(outcome.GetError());
    }
}

void CwpClient::ExportTasksAsync(const ExportTasksRequest& request, const ExportTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportTasksOutcomeCallable CwpClient::ExportTasksCallable(const ExportTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportTasksOutcome()>>(
        [this, request]()
        {
            return this->ExportTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportVulDefenceEventOutcome CwpClient::ExportVulDefenceEvent(const ExportVulDefenceEventRequest &request)
{
    auto outcome = MakeRequest(request, "ExportVulDefenceEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportVulDefenceEventResponse rsp = ExportVulDefenceEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportVulDefenceEventOutcome(rsp);
        else
            return ExportVulDefenceEventOutcome(o.GetError());
    }
    else
    {
        return ExportVulDefenceEventOutcome(outcome.GetError());
    }
}

void CwpClient::ExportVulDefenceEventAsync(const ExportVulDefenceEventRequest& request, const ExportVulDefenceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportVulDefenceEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportVulDefenceEventOutcomeCallable CwpClient::ExportVulDefenceEventCallable(const ExportVulDefenceEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportVulDefenceEventOutcome()>>(
        [this, request]()
        {
            return this->ExportVulDefenceEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportVulDefenceListOutcome CwpClient::ExportVulDefenceList(const ExportVulDefenceListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportVulDefenceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportVulDefenceListResponse rsp = ExportVulDefenceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportVulDefenceListOutcome(rsp);
        else
            return ExportVulDefenceListOutcome(o.GetError());
    }
    else
    {
        return ExportVulDefenceListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportVulDefenceListAsync(const ExportVulDefenceListRequest& request, const ExportVulDefenceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportVulDefenceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportVulDefenceListOutcomeCallable CwpClient::ExportVulDefenceListCallable(const ExportVulDefenceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportVulDefenceListOutcome()>>(
        [this, request]()
        {
            return this->ExportVulDefenceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportVulDefencePluginEventOutcome CwpClient::ExportVulDefencePluginEvent(const ExportVulDefencePluginEventRequest &request)
{
    auto outcome = MakeRequest(request, "ExportVulDefencePluginEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportVulDefencePluginEventResponse rsp = ExportVulDefencePluginEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportVulDefencePluginEventOutcome(rsp);
        else
            return ExportVulDefencePluginEventOutcome(o.GetError());
    }
    else
    {
        return ExportVulDefencePluginEventOutcome(outcome.GetError());
    }
}

void CwpClient::ExportVulDefencePluginEventAsync(const ExportVulDefencePluginEventRequest& request, const ExportVulDefencePluginEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportVulDefencePluginEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportVulDefencePluginEventOutcomeCallable CwpClient::ExportVulDefencePluginEventCallable(const ExportVulDefencePluginEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportVulDefencePluginEventOutcome()>>(
        [this, request]()
        {
            return this->ExportVulDefencePluginEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportVulDetectionExcelOutcome CwpClient::ExportVulDetectionExcel(const ExportVulDetectionExcelRequest &request)
{
    auto outcome = MakeRequest(request, "ExportVulDetectionExcel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportVulDetectionExcelResponse rsp = ExportVulDetectionExcelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportVulDetectionExcelOutcome(rsp);
        else
            return ExportVulDetectionExcelOutcome(o.GetError());
    }
    else
    {
        return ExportVulDetectionExcelOutcome(outcome.GetError());
    }
}

void CwpClient::ExportVulDetectionExcelAsync(const ExportVulDetectionExcelRequest& request, const ExportVulDetectionExcelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportVulDetectionExcel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportVulDetectionExcelOutcomeCallable CwpClient::ExportVulDetectionExcelCallable(const ExportVulDetectionExcelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportVulDetectionExcelOutcome()>>(
        [this, request]()
        {
            return this->ExportVulDetectionExcel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportVulDetectionReportOutcome CwpClient::ExportVulDetectionReport(const ExportVulDetectionReportRequest &request)
{
    auto outcome = MakeRequest(request, "ExportVulDetectionReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportVulDetectionReportResponse rsp = ExportVulDetectionReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportVulDetectionReportOutcome(rsp);
        else
            return ExportVulDetectionReportOutcome(o.GetError());
    }
    else
    {
        return ExportVulDetectionReportOutcome(outcome.GetError());
    }
}

void CwpClient::ExportVulDetectionReportAsync(const ExportVulDetectionReportRequest& request, const ExportVulDetectionReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportVulDetectionReport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportVulDetectionReportOutcomeCallable CwpClient::ExportVulDetectionReportCallable(const ExportVulDetectionReportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportVulDetectionReportOutcome()>>(
        [this, request]()
        {
            return this->ExportVulDetectionReport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportVulEffectHostListOutcome CwpClient::ExportVulEffectHostList(const ExportVulEffectHostListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportVulEffectHostList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportVulEffectHostListResponse rsp = ExportVulEffectHostListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportVulEffectHostListOutcome(rsp);
        else
            return ExportVulEffectHostListOutcome(o.GetError());
    }
    else
    {
        return ExportVulEffectHostListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportVulEffectHostListAsync(const ExportVulEffectHostListRequest& request, const ExportVulEffectHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportVulEffectHostList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportVulEffectHostListOutcomeCallable CwpClient::ExportVulEffectHostListCallable(const ExportVulEffectHostListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportVulEffectHostListOutcome()>>(
        [this, request]()
        {
            return this->ExportVulEffectHostList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportVulInfoOutcome CwpClient::ExportVulInfo(const ExportVulInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ExportVulInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportVulInfoResponse rsp = ExportVulInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportVulInfoOutcome(rsp);
        else
            return ExportVulInfoOutcome(o.GetError());
    }
    else
    {
        return ExportVulInfoOutcome(outcome.GetError());
    }
}

void CwpClient::ExportVulInfoAsync(const ExportVulInfoRequest& request, const ExportVulInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportVulInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportVulInfoOutcomeCallable CwpClient::ExportVulInfoCallable(const ExportVulInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportVulInfoOutcome()>>(
        [this, request]()
        {
            return this->ExportVulInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportVulListOutcome CwpClient::ExportVulList(const ExportVulListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportVulList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportVulListResponse rsp = ExportVulListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportVulListOutcome(rsp);
        else
            return ExportVulListOutcome(o.GetError());
    }
    else
    {
        return ExportVulListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportVulListAsync(const ExportVulListRequest& request, const ExportVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportVulList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportVulListOutcomeCallable CwpClient::ExportVulListCallable(const ExportVulListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportVulListOutcome()>>(
        [this, request]()
        {
            return this->ExportVulList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ExportWebPageEventListOutcome CwpClient::ExportWebPageEventList(const ExportWebPageEventListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportWebPageEventList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportWebPageEventListResponse rsp = ExportWebPageEventListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportWebPageEventListOutcome(rsp);
        else
            return ExportWebPageEventListOutcome(o.GetError());
    }
    else
    {
        return ExportWebPageEventListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportWebPageEventListAsync(const ExportWebPageEventListRequest& request, const ExportWebPageEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportWebPageEventList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportWebPageEventListOutcomeCallable CwpClient::ExportWebPageEventListCallable(const ExportWebPageEventListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportWebPageEventListOutcome()>>(
        [this, request]()
        {
            return this->ExportWebPageEventList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::FixBaselineDetectOutcome CwpClient::FixBaselineDetect(const FixBaselineDetectRequest &request)
{
    auto outcome = MakeRequest(request, "FixBaselineDetect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FixBaselineDetectResponse rsp = FixBaselineDetectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FixBaselineDetectOutcome(rsp);
        else
            return FixBaselineDetectOutcome(o.GetError());
    }
    else
    {
        return FixBaselineDetectOutcome(outcome.GetError());
    }
}

void CwpClient::FixBaselineDetectAsync(const FixBaselineDetectRequest& request, const FixBaselineDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FixBaselineDetect(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::FixBaselineDetectOutcomeCallable CwpClient::FixBaselineDetectCallable(const FixBaselineDetectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FixBaselineDetectOutcome()>>(
        [this, request]()
        {
            return this->FixBaselineDetect(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::GetLocalStorageItemOutcome CwpClient::GetLocalStorageItem(const GetLocalStorageItemRequest &request)
{
    auto outcome = MakeRequest(request, "GetLocalStorageItem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetLocalStorageItemResponse rsp = GetLocalStorageItemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetLocalStorageItemOutcome(rsp);
        else
            return GetLocalStorageItemOutcome(o.GetError());
    }
    else
    {
        return GetLocalStorageItemOutcome(outcome.GetError());
    }
}

void CwpClient::GetLocalStorageItemAsync(const GetLocalStorageItemRequest& request, const GetLocalStorageItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetLocalStorageItem(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::GetLocalStorageItemOutcomeCallable CwpClient::GetLocalStorageItemCallable(const GetLocalStorageItemRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetLocalStorageItemOutcome()>>(
        [this, request]()
        {
            return this->GetLocalStorageItem(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::IgnoreImpactedHostsOutcome CwpClient::IgnoreImpactedHosts(const IgnoreImpactedHostsRequest &request)
{
    auto outcome = MakeRequest(request, "IgnoreImpactedHosts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IgnoreImpactedHostsResponse rsp = IgnoreImpactedHostsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IgnoreImpactedHostsOutcome(rsp);
        else
            return IgnoreImpactedHostsOutcome(o.GetError());
    }
    else
    {
        return IgnoreImpactedHostsOutcome(outcome.GetError());
    }
}

void CwpClient::IgnoreImpactedHostsAsync(const IgnoreImpactedHostsRequest& request, const IgnoreImpactedHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IgnoreImpactedHosts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::IgnoreImpactedHostsOutcomeCallable CwpClient::IgnoreImpactedHostsCallable(const IgnoreImpactedHostsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IgnoreImpactedHostsOutcome()>>(
        [this, request]()
        {
            return this->IgnoreImpactedHosts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::KeysLocalStorageOutcome CwpClient::KeysLocalStorage(const KeysLocalStorageRequest &request)
{
    auto outcome = MakeRequest(request, "KeysLocalStorage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        KeysLocalStorageResponse rsp = KeysLocalStorageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return KeysLocalStorageOutcome(rsp);
        else
            return KeysLocalStorageOutcome(o.GetError());
    }
    else
    {
        return KeysLocalStorageOutcome(outcome.GetError());
    }
}

void CwpClient::KeysLocalStorageAsync(const KeysLocalStorageRequest& request, const KeysLocalStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->KeysLocalStorage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::KeysLocalStorageOutcomeCallable CwpClient::KeysLocalStorageCallable(const KeysLocalStorageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<KeysLocalStorageOutcome()>>(
        [this, request]()
        {
            return this->KeysLocalStorage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyAutoOpenProVersionConfigOutcome CwpClient::ModifyAutoOpenProVersionConfig(const ModifyAutoOpenProVersionConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAutoOpenProVersionConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAutoOpenProVersionConfigResponse rsp = ModifyAutoOpenProVersionConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAutoOpenProVersionConfigOutcome(rsp);
        else
            return ModifyAutoOpenProVersionConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyAutoOpenProVersionConfigOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyAutoOpenProVersionConfigAsync(const ModifyAutoOpenProVersionConfigRequest& request, const ModifyAutoOpenProVersionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAutoOpenProVersionConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyAutoOpenProVersionConfigOutcomeCallable CwpClient::ModifyAutoOpenProVersionConfigCallable(const ModifyAutoOpenProVersionConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAutoOpenProVersionConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyAutoOpenProVersionConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyBanModeOutcome CwpClient::ModifyBanMode(const ModifyBanModeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBanMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBanModeResponse rsp = ModifyBanModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBanModeOutcome(rsp);
        else
            return ModifyBanModeOutcome(o.GetError());
    }
    else
    {
        return ModifyBanModeOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyBanModeAsync(const ModifyBanModeRequest& request, const ModifyBanModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBanMode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyBanModeOutcomeCallable CwpClient::ModifyBanModeCallable(const ModifyBanModeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBanModeOutcome()>>(
        [this, request]()
        {
            return this->ModifyBanMode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyBanStatusOutcome CwpClient::ModifyBanStatus(const ModifyBanStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBanStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBanStatusResponse rsp = ModifyBanStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBanStatusOutcome(rsp);
        else
            return ModifyBanStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyBanStatusOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyBanStatusAsync(const ModifyBanStatusRequest& request, const ModifyBanStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBanStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyBanStatusOutcomeCallable CwpClient::ModifyBanStatusCallable(const ModifyBanStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBanStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyBanStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyBanWhiteListOutcome CwpClient::ModifyBanWhiteList(const ModifyBanWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBanWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBanWhiteListResponse rsp = ModifyBanWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBanWhiteListOutcome(rsp);
        else
            return ModifyBanWhiteListOutcome(o.GetError());
    }
    else
    {
        return ModifyBanWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyBanWhiteListAsync(const ModifyBanWhiteListRequest& request, const ModifyBanWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBanWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyBanWhiteListOutcomeCallable CwpClient::ModifyBanWhiteListCallable(const ModifyBanWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBanWhiteListOutcome()>>(
        [this, request]()
        {
            return this->ModifyBanWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyBaselinePolicyOutcome CwpClient::ModifyBaselinePolicy(const ModifyBaselinePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBaselinePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBaselinePolicyResponse rsp = ModifyBaselinePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBaselinePolicyOutcome(rsp);
        else
            return ModifyBaselinePolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyBaselinePolicyOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyBaselinePolicyAsync(const ModifyBaselinePolicyRequest& request, const ModifyBaselinePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBaselinePolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyBaselinePolicyOutcomeCallable CwpClient::ModifyBaselinePolicyCallable(const ModifyBaselinePolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBaselinePolicyOutcome()>>(
        [this, request]()
        {
            return this->ModifyBaselinePolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyBaselinePolicyStateOutcome CwpClient::ModifyBaselinePolicyState(const ModifyBaselinePolicyStateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBaselinePolicyState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBaselinePolicyStateResponse rsp = ModifyBaselinePolicyStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBaselinePolicyStateOutcome(rsp);
        else
            return ModifyBaselinePolicyStateOutcome(o.GetError());
    }
    else
    {
        return ModifyBaselinePolicyStateOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyBaselinePolicyStateAsync(const ModifyBaselinePolicyStateRequest& request, const ModifyBaselinePolicyStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBaselinePolicyState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyBaselinePolicyStateOutcomeCallable CwpClient::ModifyBaselinePolicyStateCallable(const ModifyBaselinePolicyStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBaselinePolicyStateOutcome()>>(
        [this, request]()
        {
            return this->ModifyBaselinePolicyState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyBaselineRuleOutcome CwpClient::ModifyBaselineRule(const ModifyBaselineRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBaselineRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBaselineRuleResponse rsp = ModifyBaselineRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBaselineRuleOutcome(rsp);
        else
            return ModifyBaselineRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyBaselineRuleOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyBaselineRuleAsync(const ModifyBaselineRuleRequest& request, const ModifyBaselineRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBaselineRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyBaselineRuleOutcomeCallable CwpClient::ModifyBaselineRuleCallable(const ModifyBaselineRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBaselineRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyBaselineRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyBaselineRuleIgnoreOutcome CwpClient::ModifyBaselineRuleIgnore(const ModifyBaselineRuleIgnoreRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBaselineRuleIgnore");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBaselineRuleIgnoreResponse rsp = ModifyBaselineRuleIgnoreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBaselineRuleIgnoreOutcome(rsp);
        else
            return ModifyBaselineRuleIgnoreOutcome(o.GetError());
    }
    else
    {
        return ModifyBaselineRuleIgnoreOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyBaselineRuleIgnoreAsync(const ModifyBaselineRuleIgnoreRequest& request, const ModifyBaselineRuleIgnoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBaselineRuleIgnore(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyBaselineRuleIgnoreOutcomeCallable CwpClient::ModifyBaselineRuleIgnoreCallable(const ModifyBaselineRuleIgnoreRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBaselineRuleIgnoreOutcome()>>(
        [this, request]()
        {
            return this->ModifyBaselineRuleIgnore(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyBaselineWeakPasswordOutcome CwpClient::ModifyBaselineWeakPassword(const ModifyBaselineWeakPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBaselineWeakPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBaselineWeakPasswordResponse rsp = ModifyBaselineWeakPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBaselineWeakPasswordOutcome(rsp);
        else
            return ModifyBaselineWeakPasswordOutcome(o.GetError());
    }
    else
    {
        return ModifyBaselineWeakPasswordOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyBaselineWeakPasswordAsync(const ModifyBaselineWeakPasswordRequest& request, const ModifyBaselineWeakPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBaselineWeakPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyBaselineWeakPasswordOutcomeCallable CwpClient::ModifyBaselineWeakPasswordCallable(const ModifyBaselineWeakPasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBaselineWeakPasswordOutcome()>>(
        [this, request]()
        {
            return this->ModifyBaselineWeakPassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyBashPolicyOutcome CwpClient::ModifyBashPolicy(const ModifyBashPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBashPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBashPolicyResponse rsp = ModifyBashPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBashPolicyOutcome(rsp);
        else
            return ModifyBashPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyBashPolicyOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyBashPolicyAsync(const ModifyBashPolicyRequest& request, const ModifyBashPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBashPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyBashPolicyOutcomeCallable CwpClient::ModifyBashPolicyCallable(const ModifyBashPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBashPolicyOutcome()>>(
        [this, request]()
        {
            return this->ModifyBashPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyBashPolicyStatusOutcome CwpClient::ModifyBashPolicyStatus(const ModifyBashPolicyStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBashPolicyStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBashPolicyStatusResponse rsp = ModifyBashPolicyStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBashPolicyStatusOutcome(rsp);
        else
            return ModifyBashPolicyStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyBashPolicyStatusOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyBashPolicyStatusAsync(const ModifyBashPolicyStatusRequest& request, const ModifyBashPolicyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBashPolicyStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyBashPolicyStatusOutcomeCallable CwpClient::ModifyBashPolicyStatusCallable(const ModifyBashPolicyStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBashPolicyStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyBashPolicyStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyBruteAttackRulesOutcome CwpClient::ModifyBruteAttackRules(const ModifyBruteAttackRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBruteAttackRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBruteAttackRulesResponse rsp = ModifyBruteAttackRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBruteAttackRulesOutcome(rsp);
        else
            return ModifyBruteAttackRulesOutcome(o.GetError());
    }
    else
    {
        return ModifyBruteAttackRulesOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyBruteAttackRulesAsync(const ModifyBruteAttackRulesRequest& request, const ModifyBruteAttackRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBruteAttackRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyBruteAttackRulesOutcomeCallable CwpClient::ModifyBruteAttackRulesCallable(const ModifyBruteAttackRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBruteAttackRulesOutcome()>>(
        [this, request]()
        {
            return this->ModifyBruteAttackRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyEventAttackStatusOutcome CwpClient::ModifyEventAttackStatus(const ModifyEventAttackStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEventAttackStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEventAttackStatusResponse rsp = ModifyEventAttackStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEventAttackStatusOutcome(rsp);
        else
            return ModifyEventAttackStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyEventAttackStatusOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyEventAttackStatusAsync(const ModifyEventAttackStatusRequest& request, const ModifyEventAttackStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyEventAttackStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyEventAttackStatusOutcomeCallable CwpClient::ModifyEventAttackStatusCallable(const ModifyEventAttackStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyEventAttackStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyEventAttackStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyFileTamperEventsOutcome CwpClient::ModifyFileTamperEvents(const ModifyFileTamperEventsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFileTamperEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFileTamperEventsResponse rsp = ModifyFileTamperEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFileTamperEventsOutcome(rsp);
        else
            return ModifyFileTamperEventsOutcome(o.GetError());
    }
    else
    {
        return ModifyFileTamperEventsOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyFileTamperEventsAsync(const ModifyFileTamperEventsRequest& request, const ModifyFileTamperEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyFileTamperEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyFileTamperEventsOutcomeCallable CwpClient::ModifyFileTamperEventsCallable(const ModifyFileTamperEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyFileTamperEventsOutcome()>>(
        [this, request]()
        {
            return this->ModifyFileTamperEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyFileTamperRuleOutcome CwpClient::ModifyFileTamperRule(const ModifyFileTamperRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFileTamperRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFileTamperRuleResponse rsp = ModifyFileTamperRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFileTamperRuleOutcome(rsp);
        else
            return ModifyFileTamperRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyFileTamperRuleOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyFileTamperRuleAsync(const ModifyFileTamperRuleRequest& request, const ModifyFileTamperRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyFileTamperRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyFileTamperRuleOutcomeCallable CwpClient::ModifyFileTamperRuleCallable(const ModifyFileTamperRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyFileTamperRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyFileTamperRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyFileTamperRuleStatusOutcome CwpClient::ModifyFileTamperRuleStatus(const ModifyFileTamperRuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFileTamperRuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFileTamperRuleStatusResponse rsp = ModifyFileTamperRuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFileTamperRuleStatusOutcome(rsp);
        else
            return ModifyFileTamperRuleStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyFileTamperRuleStatusOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyFileTamperRuleStatusAsync(const ModifyFileTamperRuleStatusRequest& request, const ModifyFileTamperRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyFileTamperRuleStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyFileTamperRuleStatusOutcomeCallable CwpClient::ModifyFileTamperRuleStatusCallable(const ModifyFileTamperRuleStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyFileTamperRuleStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyFileTamperRuleStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyJavaMemShellPluginSwitchOutcome CwpClient::ModifyJavaMemShellPluginSwitch(const ModifyJavaMemShellPluginSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyJavaMemShellPluginSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyJavaMemShellPluginSwitchResponse rsp = ModifyJavaMemShellPluginSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyJavaMemShellPluginSwitchOutcome(rsp);
        else
            return ModifyJavaMemShellPluginSwitchOutcome(o.GetError());
    }
    else
    {
        return ModifyJavaMemShellPluginSwitchOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyJavaMemShellPluginSwitchAsync(const ModifyJavaMemShellPluginSwitchRequest& request, const ModifyJavaMemShellPluginSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyJavaMemShellPluginSwitch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyJavaMemShellPluginSwitchOutcomeCallable CwpClient::ModifyJavaMemShellPluginSwitchCallable(const ModifyJavaMemShellPluginSwitchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyJavaMemShellPluginSwitchOutcome()>>(
        [this, request]()
        {
            return this->ModifyJavaMemShellPluginSwitch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyJavaMemShellsStatusOutcome CwpClient::ModifyJavaMemShellsStatus(const ModifyJavaMemShellsStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyJavaMemShellsStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyJavaMemShellsStatusResponse rsp = ModifyJavaMemShellsStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyJavaMemShellsStatusOutcome(rsp);
        else
            return ModifyJavaMemShellsStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyJavaMemShellsStatusOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyJavaMemShellsStatusAsync(const ModifyJavaMemShellsStatusRequest& request, const ModifyJavaMemShellsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyJavaMemShellsStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyJavaMemShellsStatusOutcomeCallable CwpClient::ModifyJavaMemShellsStatusCallable(const ModifyJavaMemShellsStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyJavaMemShellsStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyJavaMemShellsStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyLicenseBindsOutcome CwpClient::ModifyLicenseBinds(const ModifyLicenseBindsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLicenseBinds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLicenseBindsResponse rsp = ModifyLicenseBindsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLicenseBindsOutcome(rsp);
        else
            return ModifyLicenseBindsOutcome(o.GetError());
    }
    else
    {
        return ModifyLicenseBindsOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyLicenseBindsAsync(const ModifyLicenseBindsRequest& request, const ModifyLicenseBindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLicenseBinds(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyLicenseBindsOutcomeCallable CwpClient::ModifyLicenseBindsCallable(const ModifyLicenseBindsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLicenseBindsOutcome()>>(
        [this, request]()
        {
            return this->ModifyLicenseBinds(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyLicenseOrderOutcome CwpClient::ModifyLicenseOrder(const ModifyLicenseOrderRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLicenseOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLicenseOrderResponse rsp = ModifyLicenseOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLicenseOrderOutcome(rsp);
        else
            return ModifyLicenseOrderOutcome(o.GetError());
    }
    else
    {
        return ModifyLicenseOrderOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyLicenseOrderAsync(const ModifyLicenseOrderRequest& request, const ModifyLicenseOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLicenseOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyLicenseOrderOutcomeCallable CwpClient::ModifyLicenseOrderCallable(const ModifyLicenseOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLicenseOrderOutcome()>>(
        [this, request]()
        {
            return this->ModifyLicenseOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyLicenseUnBindsOutcome CwpClient::ModifyLicenseUnBinds(const ModifyLicenseUnBindsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLicenseUnBinds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLicenseUnBindsResponse rsp = ModifyLicenseUnBindsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLicenseUnBindsOutcome(rsp);
        else
            return ModifyLicenseUnBindsOutcome(o.GetError());
    }
    else
    {
        return ModifyLicenseUnBindsOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyLicenseUnBindsAsync(const ModifyLicenseUnBindsRequest& request, const ModifyLicenseUnBindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLicenseUnBinds(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyLicenseUnBindsOutcomeCallable CwpClient::ModifyLicenseUnBindsCallable(const ModifyLicenseUnBindsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLicenseUnBindsOutcome()>>(
        [this, request]()
        {
            return this->ModifyLicenseUnBinds(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyLogKafkaAccessOutcome CwpClient::ModifyLogKafkaAccess(const ModifyLogKafkaAccessRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLogKafkaAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLogKafkaAccessResponse rsp = ModifyLogKafkaAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLogKafkaAccessOutcome(rsp);
        else
            return ModifyLogKafkaAccessOutcome(o.GetError());
    }
    else
    {
        return ModifyLogKafkaAccessOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyLogKafkaAccessAsync(const ModifyLogKafkaAccessRequest& request, const ModifyLogKafkaAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLogKafkaAccess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyLogKafkaAccessOutcomeCallable CwpClient::ModifyLogKafkaAccessCallable(const ModifyLogKafkaAccessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLogKafkaAccessOutcome()>>(
        [this, request]()
        {
            return this->ModifyLogKafkaAccess(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyLogKafkaDeliverTypeOutcome CwpClient::ModifyLogKafkaDeliverType(const ModifyLogKafkaDeliverTypeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLogKafkaDeliverType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLogKafkaDeliverTypeResponse rsp = ModifyLogKafkaDeliverTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLogKafkaDeliverTypeOutcome(rsp);
        else
            return ModifyLogKafkaDeliverTypeOutcome(o.GetError());
    }
    else
    {
        return ModifyLogKafkaDeliverTypeOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyLogKafkaDeliverTypeAsync(const ModifyLogKafkaDeliverTypeRequest& request, const ModifyLogKafkaDeliverTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLogKafkaDeliverType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyLogKafkaDeliverTypeOutcomeCallable CwpClient::ModifyLogKafkaDeliverTypeCallable(const ModifyLogKafkaDeliverTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLogKafkaDeliverTypeOutcome()>>(
        [this, request]()
        {
            return this->ModifyLogKafkaDeliverType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyLogKafkaStateOutcome CwpClient::ModifyLogKafkaState(const ModifyLogKafkaStateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLogKafkaState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLogKafkaStateResponse rsp = ModifyLogKafkaStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLogKafkaStateOutcome(rsp);
        else
            return ModifyLogKafkaStateOutcome(o.GetError());
    }
    else
    {
        return ModifyLogKafkaStateOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyLogKafkaStateAsync(const ModifyLogKafkaStateRequest& request, const ModifyLogKafkaStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLogKafkaState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyLogKafkaStateOutcomeCallable CwpClient::ModifyLogKafkaStateCallable(const ModifyLogKafkaStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLogKafkaStateOutcome()>>(
        [this, request]()
        {
            return this->ModifyLogKafkaState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyLogStorageConfigOutcome CwpClient::ModifyLogStorageConfig(const ModifyLogStorageConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLogStorageConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLogStorageConfigResponse rsp = ModifyLogStorageConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLogStorageConfigOutcome(rsp);
        else
            return ModifyLogStorageConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyLogStorageConfigOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyLogStorageConfigAsync(const ModifyLogStorageConfigRequest& request, const ModifyLogStorageConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLogStorageConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyLogStorageConfigOutcomeCallable CwpClient::ModifyLogStorageConfigCallable(const ModifyLogStorageConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLogStorageConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyLogStorageConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyLoginWhiteInfoOutcome CwpClient::ModifyLoginWhiteInfo(const ModifyLoginWhiteInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoginWhiteInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoginWhiteInfoResponse rsp = ModifyLoginWhiteInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoginWhiteInfoOutcome(rsp);
        else
            return ModifyLoginWhiteInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyLoginWhiteInfoOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyLoginWhiteInfoAsync(const ModifyLoginWhiteInfoRequest& request, const ModifyLoginWhiteInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLoginWhiteInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyLoginWhiteInfoOutcomeCallable CwpClient::ModifyLoginWhiteInfoCallable(const ModifyLoginWhiteInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLoginWhiteInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyLoginWhiteInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyLoginWhiteRecordOutcome CwpClient::ModifyLoginWhiteRecord(const ModifyLoginWhiteRecordRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoginWhiteRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoginWhiteRecordResponse rsp = ModifyLoginWhiteRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoginWhiteRecordOutcome(rsp);
        else
            return ModifyLoginWhiteRecordOutcome(o.GetError());
    }
    else
    {
        return ModifyLoginWhiteRecordOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyLoginWhiteRecordAsync(const ModifyLoginWhiteRecordRequest& request, const ModifyLoginWhiteRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLoginWhiteRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyLoginWhiteRecordOutcomeCallable CwpClient::ModifyLoginWhiteRecordCallable(const ModifyLoginWhiteRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLoginWhiteRecordOutcome()>>(
        [this, request]()
        {
            return this->ModifyLoginWhiteRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyMachineAutoClearConfigOutcome CwpClient::ModifyMachineAutoClearConfig(const ModifyMachineAutoClearConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMachineAutoClearConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMachineAutoClearConfigResponse rsp = ModifyMachineAutoClearConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMachineAutoClearConfigOutcome(rsp);
        else
            return ModifyMachineAutoClearConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyMachineAutoClearConfigOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyMachineAutoClearConfigAsync(const ModifyMachineAutoClearConfigRequest& request, const ModifyMachineAutoClearConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMachineAutoClearConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyMachineAutoClearConfigOutcomeCallable CwpClient::ModifyMachineAutoClearConfigCallable(const ModifyMachineAutoClearConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMachineAutoClearConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyMachineAutoClearConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyMachineRemarkOutcome CwpClient::ModifyMachineRemark(const ModifyMachineRemarkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMachineRemark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMachineRemarkResponse rsp = ModifyMachineRemarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMachineRemarkOutcome(rsp);
        else
            return ModifyMachineRemarkOutcome(o.GetError());
    }
    else
    {
        return ModifyMachineRemarkOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyMachineRemarkAsync(const ModifyMachineRemarkRequest& request, const ModifyMachineRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMachineRemark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyMachineRemarkOutcomeCallable CwpClient::ModifyMachineRemarkCallable(const ModifyMachineRemarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMachineRemarkOutcome()>>(
        [this, request]()
        {
            return this->ModifyMachineRemark(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyMaliciousRequestWhiteListOutcome CwpClient::ModifyMaliciousRequestWhiteList(const ModifyMaliciousRequestWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMaliciousRequestWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMaliciousRequestWhiteListResponse rsp = ModifyMaliciousRequestWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMaliciousRequestWhiteListOutcome(rsp);
        else
            return ModifyMaliciousRequestWhiteListOutcome(o.GetError());
    }
    else
    {
        return ModifyMaliciousRequestWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyMaliciousRequestWhiteListAsync(const ModifyMaliciousRequestWhiteListRequest& request, const ModifyMaliciousRequestWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMaliciousRequestWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyMaliciousRequestWhiteListOutcomeCallable CwpClient::ModifyMaliciousRequestWhiteListCallable(const ModifyMaliciousRequestWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMaliciousRequestWhiteListOutcome()>>(
        [this, request]()
        {
            return this->ModifyMaliciousRequestWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyMalwareTimingScanSettingsOutcome CwpClient::ModifyMalwareTimingScanSettings(const ModifyMalwareTimingScanSettingsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMalwareTimingScanSettings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMalwareTimingScanSettingsResponse rsp = ModifyMalwareTimingScanSettingsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMalwareTimingScanSettingsOutcome(rsp);
        else
            return ModifyMalwareTimingScanSettingsOutcome(o.GetError());
    }
    else
    {
        return ModifyMalwareTimingScanSettingsOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyMalwareTimingScanSettingsAsync(const ModifyMalwareTimingScanSettingsRequest& request, const ModifyMalwareTimingScanSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMalwareTimingScanSettings(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyMalwareTimingScanSettingsOutcomeCallable CwpClient::ModifyMalwareTimingScanSettingsCallable(const ModifyMalwareTimingScanSettingsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMalwareTimingScanSettingsOutcome()>>(
        [this, request]()
        {
            return this->ModifyMalwareTimingScanSettings(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyMalwareWhiteListOutcome CwpClient::ModifyMalwareWhiteList(const ModifyMalwareWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMalwareWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMalwareWhiteListResponse rsp = ModifyMalwareWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMalwareWhiteListOutcome(rsp);
        else
            return ModifyMalwareWhiteListOutcome(o.GetError());
    }
    else
    {
        return ModifyMalwareWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyMalwareWhiteListAsync(const ModifyMalwareWhiteListRequest& request, const ModifyMalwareWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMalwareWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyMalwareWhiteListOutcomeCallable CwpClient::ModifyMalwareWhiteListCallable(const ModifyMalwareWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMalwareWhiteListOutcome()>>(
        [this, request]()
        {
            return this->ModifyMalwareWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyNetAttackSettingOutcome CwpClient::ModifyNetAttackSetting(const ModifyNetAttackSettingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNetAttackSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNetAttackSettingResponse rsp = ModifyNetAttackSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNetAttackSettingOutcome(rsp);
        else
            return ModifyNetAttackSettingOutcome(o.GetError());
    }
    else
    {
        return ModifyNetAttackSettingOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyNetAttackSettingAsync(const ModifyNetAttackSettingRequest& request, const ModifyNetAttackSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNetAttackSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyNetAttackSettingOutcomeCallable CwpClient::ModifyNetAttackSettingCallable(const ModifyNetAttackSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNetAttackSettingOutcome()>>(
        [this, request]()
        {
            return this->ModifyNetAttackSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyNetAttackWhiteListOutcome CwpClient::ModifyNetAttackWhiteList(const ModifyNetAttackWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNetAttackWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNetAttackWhiteListResponse rsp = ModifyNetAttackWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNetAttackWhiteListOutcome(rsp);
        else
            return ModifyNetAttackWhiteListOutcome(o.GetError());
    }
    else
    {
        return ModifyNetAttackWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyNetAttackWhiteListAsync(const ModifyNetAttackWhiteListRequest& request, const ModifyNetAttackWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNetAttackWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyNetAttackWhiteListOutcomeCallable CwpClient::ModifyNetAttackWhiteListCallable(const ModifyNetAttackWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNetAttackWhiteListOutcome()>>(
        [this, request]()
        {
            return this->ModifyNetAttackWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyOrderAttributeOutcome CwpClient::ModifyOrderAttribute(const ModifyOrderAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyOrderAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyOrderAttributeResponse rsp = ModifyOrderAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyOrderAttributeOutcome(rsp);
        else
            return ModifyOrderAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyOrderAttributeOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyOrderAttributeAsync(const ModifyOrderAttributeRequest& request, const ModifyOrderAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyOrderAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyOrderAttributeOutcomeCallable CwpClient::ModifyOrderAttributeCallable(const ModifyOrderAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyOrderAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyOrderAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyRansomDefenseEventsStatusOutcome CwpClient::ModifyRansomDefenseEventsStatus(const ModifyRansomDefenseEventsStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRansomDefenseEventsStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRansomDefenseEventsStatusResponse rsp = ModifyRansomDefenseEventsStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRansomDefenseEventsStatusOutcome(rsp);
        else
            return ModifyRansomDefenseEventsStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyRansomDefenseEventsStatusOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyRansomDefenseEventsStatusAsync(const ModifyRansomDefenseEventsStatusRequest& request, const ModifyRansomDefenseEventsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRansomDefenseEventsStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyRansomDefenseEventsStatusOutcomeCallable CwpClient::ModifyRansomDefenseEventsStatusCallable(const ModifyRansomDefenseEventsStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRansomDefenseEventsStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyRansomDefenseEventsStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyRansomDefenseStrategyStatusOutcome CwpClient::ModifyRansomDefenseStrategyStatus(const ModifyRansomDefenseStrategyStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRansomDefenseStrategyStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRansomDefenseStrategyStatusResponse rsp = ModifyRansomDefenseStrategyStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRansomDefenseStrategyStatusOutcome(rsp);
        else
            return ModifyRansomDefenseStrategyStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyRansomDefenseStrategyStatusOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyRansomDefenseStrategyStatusAsync(const ModifyRansomDefenseStrategyStatusRequest& request, const ModifyRansomDefenseStrategyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRansomDefenseStrategyStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyRansomDefenseStrategyStatusOutcomeCallable CwpClient::ModifyRansomDefenseStrategyStatusCallable(const ModifyRansomDefenseStrategyStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRansomDefenseStrategyStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyRansomDefenseStrategyStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyRaspMaxCpuOutcome CwpClient::ModifyRaspMaxCpu(const ModifyRaspMaxCpuRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRaspMaxCpu");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRaspMaxCpuResponse rsp = ModifyRaspMaxCpuResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRaspMaxCpuOutcome(rsp);
        else
            return ModifyRaspMaxCpuOutcome(o.GetError());
    }
    else
    {
        return ModifyRaspMaxCpuOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyRaspMaxCpuAsync(const ModifyRaspMaxCpuRequest& request, const ModifyRaspMaxCpuAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRaspMaxCpu(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyRaspMaxCpuOutcomeCallable CwpClient::ModifyRaspMaxCpuCallable(const ModifyRaspMaxCpuRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRaspMaxCpuOutcome()>>(
        [this, request]()
        {
            return this->ModifyRaspMaxCpu(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyRaspRulesOutcome CwpClient::ModifyRaspRules(const ModifyRaspRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRaspRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRaspRulesResponse rsp = ModifyRaspRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRaspRulesOutcome(rsp);
        else
            return ModifyRaspRulesOutcome(o.GetError());
    }
    else
    {
        return ModifyRaspRulesOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyRaspRulesAsync(const ModifyRaspRulesRequest& request, const ModifyRaspRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRaspRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyRaspRulesOutcomeCallable CwpClient::ModifyRaspRulesCallable(const ModifyRaspRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRaspRulesOutcome()>>(
        [this, request]()
        {
            return this->ModifyRaspRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyReverseShellRulesAggregationOutcome CwpClient::ModifyReverseShellRulesAggregation(const ModifyReverseShellRulesAggregationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyReverseShellRulesAggregation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyReverseShellRulesAggregationResponse rsp = ModifyReverseShellRulesAggregationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyReverseShellRulesAggregationOutcome(rsp);
        else
            return ModifyReverseShellRulesAggregationOutcome(o.GetError());
    }
    else
    {
        return ModifyReverseShellRulesAggregationOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyReverseShellRulesAggregationAsync(const ModifyReverseShellRulesAggregationRequest& request, const ModifyReverseShellRulesAggregationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyReverseShellRulesAggregation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyReverseShellRulesAggregationOutcomeCallable CwpClient::ModifyReverseShellRulesAggregationCallable(const ModifyReverseShellRulesAggregationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyReverseShellRulesAggregationOutcome()>>(
        [this, request]()
        {
            return this->ModifyReverseShellRulesAggregation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyRiskDnsPolicyOutcome CwpClient::ModifyRiskDnsPolicy(const ModifyRiskDnsPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRiskDnsPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRiskDnsPolicyResponse rsp = ModifyRiskDnsPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRiskDnsPolicyOutcome(rsp);
        else
            return ModifyRiskDnsPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyRiskDnsPolicyOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyRiskDnsPolicyAsync(const ModifyRiskDnsPolicyRequest& request, const ModifyRiskDnsPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRiskDnsPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyRiskDnsPolicyOutcomeCallable CwpClient::ModifyRiskDnsPolicyCallable(const ModifyRiskDnsPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRiskDnsPolicyOutcome()>>(
        [this, request]()
        {
            return this->ModifyRiskDnsPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyRiskDnsPolicyStatusOutcome CwpClient::ModifyRiskDnsPolicyStatus(const ModifyRiskDnsPolicyStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRiskDnsPolicyStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRiskDnsPolicyStatusResponse rsp = ModifyRiskDnsPolicyStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRiskDnsPolicyStatusOutcome(rsp);
        else
            return ModifyRiskDnsPolicyStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyRiskDnsPolicyStatusOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyRiskDnsPolicyStatusAsync(const ModifyRiskDnsPolicyStatusRequest& request, const ModifyRiskDnsPolicyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRiskDnsPolicyStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyRiskDnsPolicyStatusOutcomeCallable CwpClient::ModifyRiskDnsPolicyStatusCallable(const ModifyRiskDnsPolicyStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRiskDnsPolicyStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyRiskDnsPolicyStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyRiskEventsStatusOutcome CwpClient::ModifyRiskEventsStatus(const ModifyRiskEventsStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRiskEventsStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRiskEventsStatusResponse rsp = ModifyRiskEventsStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRiskEventsStatusOutcome(rsp);
        else
            return ModifyRiskEventsStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyRiskEventsStatusOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyRiskEventsStatusAsync(const ModifyRiskEventsStatusRequest& request, const ModifyRiskEventsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRiskEventsStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyRiskEventsStatusOutcomeCallable CwpClient::ModifyRiskEventsStatusCallable(const ModifyRiskEventsStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRiskEventsStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyRiskEventsStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyUsersConfigOutcome CwpClient::ModifyUsersConfig(const ModifyUsersConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUsersConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUsersConfigResponse rsp = ModifyUsersConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUsersConfigOutcome(rsp);
        else
            return ModifyUsersConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyUsersConfigOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyUsersConfigAsync(const ModifyUsersConfigRequest& request, const ModifyUsersConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUsersConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyUsersConfigOutcomeCallable CwpClient::ModifyUsersConfigCallable(const ModifyUsersConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUsersConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyUsersConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyVulDefenceEventStatusOutcome CwpClient::ModifyVulDefenceEventStatus(const ModifyVulDefenceEventStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVulDefenceEventStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVulDefenceEventStatusResponse rsp = ModifyVulDefenceEventStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVulDefenceEventStatusOutcome(rsp);
        else
            return ModifyVulDefenceEventStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyVulDefenceEventStatusOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyVulDefenceEventStatusAsync(const ModifyVulDefenceEventStatusRequest& request, const ModifyVulDefenceEventStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyVulDefenceEventStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyVulDefenceEventStatusOutcomeCallable CwpClient::ModifyVulDefenceEventStatusCallable(const ModifyVulDefenceEventStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyVulDefenceEventStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyVulDefenceEventStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyVulDefenceSettingOutcome CwpClient::ModifyVulDefenceSetting(const ModifyVulDefenceSettingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVulDefenceSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVulDefenceSettingResponse rsp = ModifyVulDefenceSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVulDefenceSettingOutcome(rsp);
        else
            return ModifyVulDefenceSettingOutcome(o.GetError());
    }
    else
    {
        return ModifyVulDefenceSettingOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyVulDefenceSettingAsync(const ModifyVulDefenceSettingRequest& request, const ModifyVulDefenceSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyVulDefenceSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyVulDefenceSettingOutcomeCallable CwpClient::ModifyVulDefenceSettingCallable(const ModifyVulDefenceSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyVulDefenceSettingOutcome()>>(
        [this, request]()
        {
            return this->ModifyVulDefenceSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyWarningHostConfigOutcome CwpClient::ModifyWarningHostConfig(const ModifyWarningHostConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWarningHostConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWarningHostConfigResponse rsp = ModifyWarningHostConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWarningHostConfigOutcome(rsp);
        else
            return ModifyWarningHostConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyWarningHostConfigOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyWarningHostConfigAsync(const ModifyWarningHostConfigRequest& request, const ModifyWarningHostConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWarningHostConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyWarningHostConfigOutcomeCallable CwpClient::ModifyWarningHostConfigCallable(const ModifyWarningHostConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWarningHostConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyWarningHostConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyWarningSettingOutcome CwpClient::ModifyWarningSetting(const ModifyWarningSettingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWarningSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWarningSettingResponse rsp = ModifyWarningSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWarningSettingOutcome(rsp);
        else
            return ModifyWarningSettingOutcome(o.GetError());
    }
    else
    {
        return ModifyWarningSettingOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyWarningSettingAsync(const ModifyWarningSettingRequest& request, const ModifyWarningSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWarningSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyWarningSettingOutcomeCallable CwpClient::ModifyWarningSettingCallable(const ModifyWarningSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWarningSettingOutcome()>>(
        [this, request]()
        {
            return this->ModifyWarningSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyWebHookPolicyOutcome CwpClient::ModifyWebHookPolicy(const ModifyWebHookPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWebHookPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWebHookPolicyResponse rsp = ModifyWebHookPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWebHookPolicyOutcome(rsp);
        else
            return ModifyWebHookPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyWebHookPolicyOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyWebHookPolicyAsync(const ModifyWebHookPolicyRequest& request, const ModifyWebHookPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWebHookPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyWebHookPolicyOutcomeCallable CwpClient::ModifyWebHookPolicyCallable(const ModifyWebHookPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWebHookPolicyOutcome()>>(
        [this, request]()
        {
            return this->ModifyWebHookPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyWebHookPolicyStatusOutcome CwpClient::ModifyWebHookPolicyStatus(const ModifyWebHookPolicyStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWebHookPolicyStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWebHookPolicyStatusResponse rsp = ModifyWebHookPolicyStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWebHookPolicyStatusOutcome(rsp);
        else
            return ModifyWebHookPolicyStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyWebHookPolicyStatusOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyWebHookPolicyStatusAsync(const ModifyWebHookPolicyStatusRequest& request, const ModifyWebHookPolicyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWebHookPolicyStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyWebHookPolicyStatusOutcomeCallable CwpClient::ModifyWebHookPolicyStatusCallable(const ModifyWebHookPolicyStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWebHookPolicyStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyWebHookPolicyStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyWebHookReceiverOutcome CwpClient::ModifyWebHookReceiver(const ModifyWebHookReceiverRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWebHookReceiver");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWebHookReceiverResponse rsp = ModifyWebHookReceiverResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWebHookReceiverOutcome(rsp);
        else
            return ModifyWebHookReceiverOutcome(o.GetError());
    }
    else
    {
        return ModifyWebHookReceiverOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyWebHookReceiverAsync(const ModifyWebHookReceiverRequest& request, const ModifyWebHookReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWebHookReceiver(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyWebHookReceiverOutcomeCallable CwpClient::ModifyWebHookReceiverCallable(const ModifyWebHookReceiverRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWebHookReceiverOutcome()>>(
        [this, request]()
        {
            return this->ModifyWebHookReceiver(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyWebHookRuleOutcome CwpClient::ModifyWebHookRule(const ModifyWebHookRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWebHookRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWebHookRuleResponse rsp = ModifyWebHookRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWebHookRuleOutcome(rsp);
        else
            return ModifyWebHookRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyWebHookRuleOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyWebHookRuleAsync(const ModifyWebHookRuleRequest& request, const ModifyWebHookRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWebHookRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyWebHookRuleOutcomeCallable CwpClient::ModifyWebHookRuleCallable(const ModifyWebHookRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWebHookRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyWebHookRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyWebHookRuleStatusOutcome CwpClient::ModifyWebHookRuleStatus(const ModifyWebHookRuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWebHookRuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWebHookRuleStatusResponse rsp = ModifyWebHookRuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWebHookRuleStatusOutcome(rsp);
        else
            return ModifyWebHookRuleStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyWebHookRuleStatusOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyWebHookRuleStatusAsync(const ModifyWebHookRuleStatusRequest& request, const ModifyWebHookRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWebHookRuleStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyWebHookRuleStatusOutcomeCallable CwpClient::ModifyWebHookRuleStatusCallable(const ModifyWebHookRuleStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWebHookRuleStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyWebHookRuleStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyWebPageProtectDirOutcome CwpClient::ModifyWebPageProtectDir(const ModifyWebPageProtectDirRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWebPageProtectDir");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWebPageProtectDirResponse rsp = ModifyWebPageProtectDirResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWebPageProtectDirOutcome(rsp);
        else
            return ModifyWebPageProtectDirOutcome(o.GetError());
    }
    else
    {
        return ModifyWebPageProtectDirOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyWebPageProtectDirAsync(const ModifyWebPageProtectDirRequest& request, const ModifyWebPageProtectDirAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWebPageProtectDir(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyWebPageProtectDirOutcomeCallable CwpClient::ModifyWebPageProtectDirCallable(const ModifyWebPageProtectDirRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWebPageProtectDirOutcome()>>(
        [this, request]()
        {
            return this->ModifyWebPageProtectDir(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyWebPageProtectSettingOutcome CwpClient::ModifyWebPageProtectSetting(const ModifyWebPageProtectSettingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWebPageProtectSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWebPageProtectSettingResponse rsp = ModifyWebPageProtectSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWebPageProtectSettingOutcome(rsp);
        else
            return ModifyWebPageProtectSettingOutcome(o.GetError());
    }
    else
    {
        return ModifyWebPageProtectSettingOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyWebPageProtectSettingAsync(const ModifyWebPageProtectSettingRequest& request, const ModifyWebPageProtectSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWebPageProtectSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyWebPageProtectSettingOutcomeCallable CwpClient::ModifyWebPageProtectSettingCallable(const ModifyWebPageProtectSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWebPageProtectSettingOutcome()>>(
        [this, request]()
        {
            return this->ModifyWebPageProtectSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ModifyWebPageProtectSwitchOutcome CwpClient::ModifyWebPageProtectSwitch(const ModifyWebPageProtectSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWebPageProtectSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWebPageProtectSwitchResponse rsp = ModifyWebPageProtectSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWebPageProtectSwitchOutcome(rsp);
        else
            return ModifyWebPageProtectSwitchOutcome(o.GetError());
    }
    else
    {
        return ModifyWebPageProtectSwitchOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyWebPageProtectSwitchAsync(const ModifyWebPageProtectSwitchRequest& request, const ModifyWebPageProtectSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWebPageProtectSwitch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyWebPageProtectSwitchOutcomeCallable CwpClient::ModifyWebPageProtectSwitchCallable(const ModifyWebPageProtectSwitchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWebPageProtectSwitchOutcome()>>(
        [this, request]()
        {
            return this->ModifyWebPageProtectSwitch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::RansomDefenseRollbackOutcome CwpClient::RansomDefenseRollback(const RansomDefenseRollbackRequest &request)
{
    auto outcome = MakeRequest(request, "RansomDefenseRollback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RansomDefenseRollbackResponse rsp = RansomDefenseRollbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RansomDefenseRollbackOutcome(rsp);
        else
            return RansomDefenseRollbackOutcome(o.GetError());
    }
    else
    {
        return RansomDefenseRollbackOutcome(outcome.GetError());
    }
}

void CwpClient::RansomDefenseRollbackAsync(const RansomDefenseRollbackRequest& request, const RansomDefenseRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RansomDefenseRollback(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::RansomDefenseRollbackOutcomeCallable CwpClient::RansomDefenseRollbackCallable(const RansomDefenseRollbackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RansomDefenseRollbackOutcome()>>(
        [this, request]()
        {
            return this->RansomDefenseRollback(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::RecoverMalwaresOutcome CwpClient::RecoverMalwares(const RecoverMalwaresRequest &request)
{
    auto outcome = MakeRequest(request, "RecoverMalwares");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecoverMalwaresResponse rsp = RecoverMalwaresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecoverMalwaresOutcome(rsp);
        else
            return RecoverMalwaresOutcome(o.GetError());
    }
    else
    {
        return RecoverMalwaresOutcome(outcome.GetError());
    }
}

void CwpClient::RecoverMalwaresAsync(const RecoverMalwaresRequest& request, const RecoverMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecoverMalwares(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::RecoverMalwaresOutcomeCallable CwpClient::RecoverMalwaresCallable(const RecoverMalwaresRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecoverMalwaresOutcome()>>(
        [this, request]()
        {
            return this->RecoverMalwares(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::RemoveLocalStorageItemOutcome CwpClient::RemoveLocalStorageItem(const RemoveLocalStorageItemRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveLocalStorageItem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveLocalStorageItemResponse rsp = RemoveLocalStorageItemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveLocalStorageItemOutcome(rsp);
        else
            return RemoveLocalStorageItemOutcome(o.GetError());
    }
    else
    {
        return RemoveLocalStorageItemOutcome(outcome.GetError());
    }
}

void CwpClient::RemoveLocalStorageItemAsync(const RemoveLocalStorageItemRequest& request, const RemoveLocalStorageItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveLocalStorageItem(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::RemoveLocalStorageItemOutcomeCallable CwpClient::RemoveLocalStorageItemCallable(const RemoveLocalStorageItemRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveLocalStorageItemOutcome()>>(
        [this, request]()
        {
            return this->RemoveLocalStorageItem(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::RemoveMachineOutcome CwpClient::RemoveMachine(const RemoveMachineRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveMachine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveMachineResponse rsp = RemoveMachineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveMachineOutcome(rsp);
        else
            return RemoveMachineOutcome(o.GetError());
    }
    else
    {
        return RemoveMachineOutcome(outcome.GetError());
    }
}

void CwpClient::RemoveMachineAsync(const RemoveMachineRequest& request, const RemoveMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveMachine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::RemoveMachineOutcomeCallable CwpClient::RemoveMachineCallable(const RemoveMachineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveMachineOutcome()>>(
        [this, request]()
        {
            return this->RemoveMachine(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::RetryCreateSnapshotOutcome CwpClient::RetryCreateSnapshot(const RetryCreateSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "RetryCreateSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RetryCreateSnapshotResponse rsp = RetryCreateSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RetryCreateSnapshotOutcome(rsp);
        else
            return RetryCreateSnapshotOutcome(o.GetError());
    }
    else
    {
        return RetryCreateSnapshotOutcome(outcome.GetError());
    }
}

void CwpClient::RetryCreateSnapshotAsync(const RetryCreateSnapshotRequest& request, const RetryCreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RetryCreateSnapshot(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::RetryCreateSnapshotOutcomeCallable CwpClient::RetryCreateSnapshotCallable(const RetryCreateSnapshotRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RetryCreateSnapshotOutcome()>>(
        [this, request]()
        {
            return this->RetryCreateSnapshot(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::RetryVulFixOutcome CwpClient::RetryVulFix(const RetryVulFixRequest &request)
{
    auto outcome = MakeRequest(request, "RetryVulFix");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RetryVulFixResponse rsp = RetryVulFixResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RetryVulFixOutcome(rsp);
        else
            return RetryVulFixOutcome(o.GetError());
    }
    else
    {
        return RetryVulFixOutcome(outcome.GetError());
    }
}

void CwpClient::RetryVulFixAsync(const RetryVulFixRequest& request, const RetryVulFixAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RetryVulFix(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::RetryVulFixOutcomeCallable CwpClient::RetryVulFixCallable(const RetryVulFixRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RetryVulFixOutcome()>>(
        [this, request]()
        {
            return this->RetryVulFix(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ScanAssetOutcome CwpClient::ScanAsset(const ScanAssetRequest &request)
{
    auto outcome = MakeRequest(request, "ScanAsset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScanAssetResponse rsp = ScanAssetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScanAssetOutcome(rsp);
        else
            return ScanAssetOutcome(o.GetError());
    }
    else
    {
        return ScanAssetOutcome(outcome.GetError());
    }
}

void CwpClient::ScanAssetAsync(const ScanAssetRequest& request, const ScanAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScanAsset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ScanAssetOutcomeCallable CwpClient::ScanAssetCallable(const ScanAssetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScanAssetOutcome()>>(
        [this, request]()
        {
            return this->ScanAsset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ScanBaselineOutcome CwpClient::ScanBaseline(const ScanBaselineRequest &request)
{
    auto outcome = MakeRequest(request, "ScanBaseline");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScanBaselineResponse rsp = ScanBaselineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScanBaselineOutcome(rsp);
        else
            return ScanBaselineOutcome(o.GetError());
    }
    else
    {
        return ScanBaselineOutcome(outcome.GetError());
    }
}

void CwpClient::ScanBaselineAsync(const ScanBaselineRequest& request, const ScanBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScanBaseline(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ScanBaselineOutcomeCallable CwpClient::ScanBaselineCallable(const ScanBaselineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScanBaselineOutcome()>>(
        [this, request]()
        {
            return this->ScanBaseline(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ScanTaskAgainOutcome CwpClient::ScanTaskAgain(const ScanTaskAgainRequest &request)
{
    auto outcome = MakeRequest(request, "ScanTaskAgain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScanTaskAgainResponse rsp = ScanTaskAgainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScanTaskAgainOutcome(rsp);
        else
            return ScanTaskAgainOutcome(o.GetError());
    }
    else
    {
        return ScanTaskAgainOutcome(outcome.GetError());
    }
}

void CwpClient::ScanTaskAgainAsync(const ScanTaskAgainRequest& request, const ScanTaskAgainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScanTaskAgain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ScanTaskAgainOutcomeCallable CwpClient::ScanTaskAgainCallable(const ScanTaskAgainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScanTaskAgainOutcome()>>(
        [this, request]()
        {
            return this->ScanTaskAgain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ScanVulOutcome CwpClient::ScanVul(const ScanVulRequest &request)
{
    auto outcome = MakeRequest(request, "ScanVul");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScanVulResponse rsp = ScanVulResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScanVulOutcome(rsp);
        else
            return ScanVulOutcome(o.GetError());
    }
    else
    {
        return ScanVulOutcome(outcome.GetError());
    }
}

void CwpClient::ScanVulAsync(const ScanVulRequest& request, const ScanVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScanVul(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ScanVulOutcomeCallable CwpClient::ScanVulCallable(const ScanVulRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScanVulOutcome()>>(
        [this, request]()
        {
            return this->ScanVul(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ScanVulAgainOutcome CwpClient::ScanVulAgain(const ScanVulAgainRequest &request)
{
    auto outcome = MakeRequest(request, "ScanVulAgain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScanVulAgainResponse rsp = ScanVulAgainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScanVulAgainOutcome(rsp);
        else
            return ScanVulAgainOutcome(o.GetError());
    }
    else
    {
        return ScanVulAgainOutcome(outcome.GetError());
    }
}

void CwpClient::ScanVulAgainAsync(const ScanVulAgainRequest& request, const ScanVulAgainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScanVulAgain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ScanVulAgainOutcomeCallable CwpClient::ScanVulAgainCallable(const ScanVulAgainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScanVulAgainOutcome()>>(
        [this, request]()
        {
            return this->ScanVulAgain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::ScanVulSettingOutcome CwpClient::ScanVulSetting(const ScanVulSettingRequest &request)
{
    auto outcome = MakeRequest(request, "ScanVulSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScanVulSettingResponse rsp = ScanVulSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScanVulSettingOutcome(rsp);
        else
            return ScanVulSettingOutcome(o.GetError());
    }
    else
    {
        return ScanVulSettingOutcome(outcome.GetError());
    }
}

void CwpClient::ScanVulSettingAsync(const ScanVulSettingRequest& request, const ScanVulSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScanVulSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ScanVulSettingOutcomeCallable CwpClient::ScanVulSettingCallable(const ScanVulSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScanVulSettingOutcome()>>(
        [this, request]()
        {
            return this->ScanVulSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::SearchLogOutcome CwpClient::SearchLog(const SearchLogRequest &request)
{
    auto outcome = MakeRequest(request, "SearchLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchLogResponse rsp = SearchLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchLogOutcome(rsp);
        else
            return SearchLogOutcome(o.GetError());
    }
    else
    {
        return SearchLogOutcome(outcome.GetError());
    }
}

void CwpClient::SearchLogAsync(const SearchLogRequest& request, const SearchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::SearchLogOutcomeCallable CwpClient::SearchLogCallable(const SearchLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchLogOutcome()>>(
        [this, request]()
        {
            return this->SearchLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::SeparateMalwaresOutcome CwpClient::SeparateMalwares(const SeparateMalwaresRequest &request)
{
    auto outcome = MakeRequest(request, "SeparateMalwares");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SeparateMalwaresResponse rsp = SeparateMalwaresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SeparateMalwaresOutcome(rsp);
        else
            return SeparateMalwaresOutcome(o.GetError());
    }
    else
    {
        return SeparateMalwaresOutcome(outcome.GetError());
    }
}

void CwpClient::SeparateMalwaresAsync(const SeparateMalwaresRequest& request, const SeparateMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SeparateMalwares(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::SeparateMalwaresOutcomeCallable CwpClient::SeparateMalwaresCallable(const SeparateMalwaresRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SeparateMalwaresOutcome()>>(
        [this, request]()
        {
            return this->SeparateMalwares(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::SetBashEventsStatusOutcome CwpClient::SetBashEventsStatus(const SetBashEventsStatusRequest &request)
{
    auto outcome = MakeRequest(request, "SetBashEventsStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetBashEventsStatusResponse rsp = SetBashEventsStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetBashEventsStatusOutcome(rsp);
        else
            return SetBashEventsStatusOutcome(o.GetError());
    }
    else
    {
        return SetBashEventsStatusOutcome(outcome.GetError());
    }
}

void CwpClient::SetBashEventsStatusAsync(const SetBashEventsStatusRequest& request, const SetBashEventsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetBashEventsStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::SetBashEventsStatusOutcomeCallable CwpClient::SetBashEventsStatusCallable(const SetBashEventsStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetBashEventsStatusOutcome()>>(
        [this, request]()
        {
            return this->SetBashEventsStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::SetLocalStorageExpireOutcome CwpClient::SetLocalStorageExpire(const SetLocalStorageExpireRequest &request)
{
    auto outcome = MakeRequest(request, "SetLocalStorageExpire");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetLocalStorageExpireResponse rsp = SetLocalStorageExpireResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetLocalStorageExpireOutcome(rsp);
        else
            return SetLocalStorageExpireOutcome(o.GetError());
    }
    else
    {
        return SetLocalStorageExpireOutcome(outcome.GetError());
    }
}

void CwpClient::SetLocalStorageExpireAsync(const SetLocalStorageExpireRequest& request, const SetLocalStorageExpireAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetLocalStorageExpire(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::SetLocalStorageExpireOutcomeCallable CwpClient::SetLocalStorageExpireCallable(const SetLocalStorageExpireRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetLocalStorageExpireOutcome()>>(
        [this, request]()
        {
            return this->SetLocalStorageExpire(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::SetLocalStorageItemOutcome CwpClient::SetLocalStorageItem(const SetLocalStorageItemRequest &request)
{
    auto outcome = MakeRequest(request, "SetLocalStorageItem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetLocalStorageItemResponse rsp = SetLocalStorageItemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetLocalStorageItemOutcome(rsp);
        else
            return SetLocalStorageItemOutcome(o.GetError());
    }
    else
    {
        return SetLocalStorageItemOutcome(outcome.GetError());
    }
}

void CwpClient::SetLocalStorageItemAsync(const SetLocalStorageItemRequest& request, const SetLocalStorageItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetLocalStorageItem(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::SetLocalStorageItemOutcomeCallable CwpClient::SetLocalStorageItemCallable(const SetLocalStorageItemRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetLocalStorageItemOutcome()>>(
        [this, request]()
        {
            return this->SetLocalStorageItem(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::StartBaselineDetectOutcome CwpClient::StartBaselineDetect(const StartBaselineDetectRequest &request)
{
    auto outcome = MakeRequest(request, "StartBaselineDetect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartBaselineDetectResponse rsp = StartBaselineDetectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartBaselineDetectOutcome(rsp);
        else
            return StartBaselineDetectOutcome(o.GetError());
    }
    else
    {
        return StartBaselineDetectOutcome(outcome.GetError());
    }
}

void CwpClient::StartBaselineDetectAsync(const StartBaselineDetectRequest& request, const StartBaselineDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartBaselineDetect(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::StartBaselineDetectOutcomeCallable CwpClient::StartBaselineDetectCallable(const StartBaselineDetectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartBaselineDetectOutcome()>>(
        [this, request]()
        {
            return this->StartBaselineDetect(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::StopAssetScanOutcome CwpClient::StopAssetScan(const StopAssetScanRequest &request)
{
    auto outcome = MakeRequest(request, "StopAssetScan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopAssetScanResponse rsp = StopAssetScanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopAssetScanOutcome(rsp);
        else
            return StopAssetScanOutcome(o.GetError());
    }
    else
    {
        return StopAssetScanOutcome(outcome.GetError());
    }
}

void CwpClient::StopAssetScanAsync(const StopAssetScanRequest& request, const StopAssetScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopAssetScan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::StopAssetScanOutcomeCallable CwpClient::StopAssetScanCallable(const StopAssetScanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopAssetScanOutcome()>>(
        [this, request]()
        {
            return this->StopAssetScan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::StopBaselineDetectOutcome CwpClient::StopBaselineDetect(const StopBaselineDetectRequest &request)
{
    auto outcome = MakeRequest(request, "StopBaselineDetect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopBaselineDetectResponse rsp = StopBaselineDetectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopBaselineDetectOutcome(rsp);
        else
            return StopBaselineDetectOutcome(o.GetError());
    }
    else
    {
        return StopBaselineDetectOutcome(outcome.GetError());
    }
}

void CwpClient::StopBaselineDetectAsync(const StopBaselineDetectRequest& request, const StopBaselineDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopBaselineDetect(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::StopBaselineDetectOutcomeCallable CwpClient::StopBaselineDetectCallable(const StopBaselineDetectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopBaselineDetectOutcome()>>(
        [this, request]()
        {
            return this->StopBaselineDetect(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::StopNoticeBanTipsOutcome CwpClient::StopNoticeBanTips(const StopNoticeBanTipsRequest &request)
{
    auto outcome = MakeRequest(request, "StopNoticeBanTips");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopNoticeBanTipsResponse rsp = StopNoticeBanTipsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopNoticeBanTipsOutcome(rsp);
        else
            return StopNoticeBanTipsOutcome(o.GetError());
    }
    else
    {
        return StopNoticeBanTipsOutcome(outcome.GetError());
    }
}

void CwpClient::StopNoticeBanTipsAsync(const StopNoticeBanTipsRequest& request, const StopNoticeBanTipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopNoticeBanTips(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::StopNoticeBanTipsOutcomeCallable CwpClient::StopNoticeBanTipsCallable(const StopNoticeBanTipsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopNoticeBanTipsOutcome()>>(
        [this, request]()
        {
            return this->StopNoticeBanTips(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::SwitchBashRulesOutcome CwpClient::SwitchBashRules(const SwitchBashRulesRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchBashRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchBashRulesResponse rsp = SwitchBashRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchBashRulesOutcome(rsp);
        else
            return SwitchBashRulesOutcome(o.GetError());
    }
    else
    {
        return SwitchBashRulesOutcome(outcome.GetError());
    }
}

void CwpClient::SwitchBashRulesAsync(const SwitchBashRulesRequest& request, const SwitchBashRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SwitchBashRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::SwitchBashRulesOutcomeCallable CwpClient::SwitchBashRulesCallable(const SwitchBashRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SwitchBashRulesOutcome()>>(
        [this, request]()
        {
            return this->SwitchBashRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::SyncAssetScanOutcome CwpClient::SyncAssetScan(const SyncAssetScanRequest &request)
{
    auto outcome = MakeRequest(request, "SyncAssetScan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncAssetScanResponse rsp = SyncAssetScanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncAssetScanOutcome(rsp);
        else
            return SyncAssetScanOutcome(o.GetError());
    }
    else
    {
        return SyncAssetScanOutcome(outcome.GetError());
    }
}

void CwpClient::SyncAssetScanAsync(const SyncAssetScanRequest& request, const SyncAssetScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SyncAssetScan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::SyncAssetScanOutcomeCallable CwpClient::SyncAssetScanCallable(const SyncAssetScanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SyncAssetScanOutcome()>>(
        [this, request]()
        {
            return this->SyncAssetScan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::SyncBaselineDetectSummaryOutcome CwpClient::SyncBaselineDetectSummary(const SyncBaselineDetectSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "SyncBaselineDetectSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncBaselineDetectSummaryResponse rsp = SyncBaselineDetectSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncBaselineDetectSummaryOutcome(rsp);
        else
            return SyncBaselineDetectSummaryOutcome(o.GetError());
    }
    else
    {
        return SyncBaselineDetectSummaryOutcome(outcome.GetError());
    }
}

void CwpClient::SyncBaselineDetectSummaryAsync(const SyncBaselineDetectSummaryRequest& request, const SyncBaselineDetectSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SyncBaselineDetectSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::SyncBaselineDetectSummaryOutcomeCallable CwpClient::SyncBaselineDetectSummaryCallable(const SyncBaselineDetectSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SyncBaselineDetectSummaryOutcome()>>(
        [this, request]()
        {
            return this->SyncBaselineDetectSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::SyncMachinesOutcome CwpClient::SyncMachines(const SyncMachinesRequest &request)
{
    auto outcome = MakeRequest(request, "SyncMachines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncMachinesResponse rsp = SyncMachinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncMachinesOutcome(rsp);
        else
            return SyncMachinesOutcome(o.GetError());
    }
    else
    {
        return SyncMachinesOutcome(outcome.GetError());
    }
}

void CwpClient::SyncMachinesAsync(const SyncMachinesRequest& request, const SyncMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SyncMachines(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::SyncMachinesOutcomeCallable CwpClient::SyncMachinesCallable(const SyncMachinesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SyncMachinesOutcome()>>(
        [this, request]()
        {
            return this->SyncMachines(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::TestWebHookRuleOutcome CwpClient::TestWebHookRule(const TestWebHookRuleRequest &request)
{
    auto outcome = MakeRequest(request, "TestWebHookRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TestWebHookRuleResponse rsp = TestWebHookRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TestWebHookRuleOutcome(rsp);
        else
            return TestWebHookRuleOutcome(o.GetError());
    }
    else
    {
        return TestWebHookRuleOutcome(outcome.GetError());
    }
}

void CwpClient::TestWebHookRuleAsync(const TestWebHookRuleRequest& request, const TestWebHookRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TestWebHookRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::TestWebHookRuleOutcomeCallable CwpClient::TestWebHookRuleCallable(const TestWebHookRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TestWebHookRuleOutcome()>>(
        [this, request]()
        {
            return this->TestWebHookRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::TrustMalwaresOutcome CwpClient::TrustMalwares(const TrustMalwaresRequest &request)
{
    auto outcome = MakeRequest(request, "TrustMalwares");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TrustMalwaresResponse rsp = TrustMalwaresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TrustMalwaresOutcome(rsp);
        else
            return TrustMalwaresOutcome(o.GetError());
    }
    else
    {
        return TrustMalwaresOutcome(outcome.GetError());
    }
}

void CwpClient::TrustMalwaresAsync(const TrustMalwaresRequest& request, const TrustMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TrustMalwares(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::TrustMalwaresOutcomeCallable CwpClient::TrustMalwaresCallable(const TrustMalwaresRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TrustMalwaresOutcome()>>(
        [this, request]()
        {
            return this->TrustMalwares(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::UntrustMalwaresOutcome CwpClient::UntrustMalwares(const UntrustMalwaresRequest &request)
{
    auto outcome = MakeRequest(request, "UntrustMalwares");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UntrustMalwaresResponse rsp = UntrustMalwaresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UntrustMalwaresOutcome(rsp);
        else
            return UntrustMalwaresOutcome(o.GetError());
    }
    else
    {
        return UntrustMalwaresOutcome(outcome.GetError());
    }
}

void CwpClient::UntrustMalwaresAsync(const UntrustMalwaresRequest& request, const UntrustMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UntrustMalwares(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::UntrustMalwaresOutcomeCallable CwpClient::UntrustMalwaresCallable(const UntrustMalwaresRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UntrustMalwaresOutcome()>>(
        [this, request]()
        {
            return this->UntrustMalwares(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::UpdateBaselineStrategyOutcome CwpClient::UpdateBaselineStrategy(const UpdateBaselineStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateBaselineStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateBaselineStrategyResponse rsp = UpdateBaselineStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateBaselineStrategyOutcome(rsp);
        else
            return UpdateBaselineStrategyOutcome(o.GetError());
    }
    else
    {
        return UpdateBaselineStrategyOutcome(outcome.GetError());
    }
}

void CwpClient::UpdateBaselineStrategyAsync(const UpdateBaselineStrategyRequest& request, const UpdateBaselineStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateBaselineStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::UpdateBaselineStrategyOutcomeCallable CwpClient::UpdateBaselineStrategyCallable(const UpdateBaselineStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateBaselineStrategyOutcome()>>(
        [this, request]()
        {
            return this->UpdateBaselineStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::UpdateMachineTagsOutcome CwpClient::UpdateMachineTags(const UpdateMachineTagsRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateMachineTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateMachineTagsResponse rsp = UpdateMachineTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateMachineTagsOutcome(rsp);
        else
            return UpdateMachineTagsOutcome(o.GetError());
    }
    else
    {
        return UpdateMachineTagsOutcome(outcome.GetError());
    }
}

void CwpClient::UpdateMachineTagsAsync(const UpdateMachineTagsRequest& request, const UpdateMachineTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateMachineTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::UpdateMachineTagsOutcomeCallable CwpClient::UpdateMachineTagsCallable(const UpdateMachineTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateMachineTagsOutcome()>>(
        [this, request]()
        {
            return this->UpdateMachineTags(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

