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

CwpClient::CloseProVersionOutcome CwpClient::CloseProVersion(const CloseProVersionRequest &request)
{
    auto outcome = MakeRequest(request, "CloseProVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseProVersionResponse rsp = CloseProVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseProVersionOutcome(rsp);
        else
            return CloseProVersionOutcome(o.GetError());
    }
    else
    {
        return CloseProVersionOutcome(outcome.GetError());
    }
}

void CwpClient::CloseProVersionAsync(const CloseProVersionRequest& request, const CloseProVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloseProVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::CloseProVersionOutcomeCallable CwpClient::CloseProVersionCallable(const CloseProVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloseProVersionOutcome()>>(
        [this, request]()
        {
            return this->CloseProVersion(request);
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

CwpClient::DeleteAttackLogsOutcome CwpClient::DeleteAttackLogs(const DeleteAttackLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAttackLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAttackLogsResponse rsp = DeleteAttackLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAttackLogsOutcome(rsp);
        else
            return DeleteAttackLogsOutcome(o.GetError());
    }
    else
    {
        return DeleteAttackLogsOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteAttackLogsAsync(const DeleteAttackLogsRequest& request, const DeleteAttackLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAttackLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DeleteAttackLogsOutcomeCallable CwpClient::DeleteAttackLogsCallable(const DeleteAttackLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAttackLogsOutcome()>>(
        [this, request]()
        {
            return this->DeleteAttackLogs(request);
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

CwpClient::DescribeAccountsOutcome CwpClient::DescribeAccounts(const DescribeAccountsRequest &request)
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

void CwpClient::DescribeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccounts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAccountsOutcomeCallable CwpClient::DescribeAccountsCallable(const DescribeAccountsRequest &request)
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

CwpClient::DescribeAttackLogInfoOutcome CwpClient::DescribeAttackLogInfo(const DescribeAttackLogInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAttackLogInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAttackLogInfoResponse rsp = DescribeAttackLogInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAttackLogInfoOutcome(rsp);
        else
            return DescribeAttackLogInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeAttackLogInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAttackLogInfoAsync(const DescribeAttackLogInfoRequest& request, const DescribeAttackLogInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAttackLogInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAttackLogInfoOutcomeCallable CwpClient::DescribeAttackLogInfoCallable(const DescribeAttackLogInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAttackLogInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeAttackLogInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::DescribeAttackLogsOutcome CwpClient::DescribeAttackLogs(const DescribeAttackLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAttackLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAttackLogsResponse rsp = DescribeAttackLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAttackLogsOutcome(rsp);
        else
            return DescribeAttackLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeAttackLogsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAttackLogsAsync(const DescribeAttackLogsRequest& request, const DescribeAttackLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAttackLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeAttackLogsOutcomeCallable CwpClient::DescribeAttackLogsCallable(const DescribeAttackLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAttackLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAttackLogs(request);
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

CwpClient::DescribeComponentStatisticsOutcome CwpClient::DescribeComponentStatistics(const DescribeComponentStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeComponentStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeComponentStatisticsResponse rsp = DescribeComponentStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeComponentStatisticsOutcome(rsp);
        else
            return DescribeComponentStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeComponentStatisticsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeComponentStatisticsAsync(const DescribeComponentStatisticsRequest& request, const DescribeComponentStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeComponentStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeComponentStatisticsOutcomeCallable CwpClient::DescribeComponentStatisticsCallable(const DescribeComponentStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeComponentStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeComponentStatistics(request);
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

CwpClient::DescribeESHitsOutcome CwpClient::DescribeESHits(const DescribeESHitsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeESHits");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeESHitsResponse rsp = DescribeESHitsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeESHitsOutcome(rsp);
        else
            return DescribeESHitsOutcome(o.GetError());
    }
    else
    {
        return DescribeESHitsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeESHitsAsync(const DescribeESHitsRequest& request, const DescribeESHitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeESHits(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeESHitsOutcomeCallable CwpClient::DescribeESHitsCallable(const DescribeESHitsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeESHitsOutcome()>>(
        [this, request]()
        {
            return this->DescribeESHits(request);
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

CwpClient::DescribeIndexListOutcome CwpClient::DescribeIndexList(const DescribeIndexListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIndexList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIndexListResponse rsp = DescribeIndexListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIndexListOutcome(rsp);
        else
            return DescribeIndexListOutcome(o.GetError());
    }
    else
    {
        return DescribeIndexListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeIndexListAsync(const DescribeIndexListRequest& request, const DescribeIndexListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIndexList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeIndexListOutcomeCallable CwpClient::DescribeIndexListCallable(const DescribeIndexListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIndexListOutcome()>>(
        [this, request]()
        {
            return this->DescribeIndexList(request);
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

CwpClient::DescribeSaveOrUpdateWarningsOutcome CwpClient::DescribeSaveOrUpdateWarnings(const DescribeSaveOrUpdateWarningsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSaveOrUpdateWarnings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSaveOrUpdateWarningsResponse rsp = DescribeSaveOrUpdateWarningsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSaveOrUpdateWarningsOutcome(rsp);
        else
            return DescribeSaveOrUpdateWarningsOutcome(o.GetError());
    }
    else
    {
        return DescribeSaveOrUpdateWarningsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeSaveOrUpdateWarningsAsync(const DescribeSaveOrUpdateWarningsRequest& request, const DescribeSaveOrUpdateWarningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSaveOrUpdateWarnings(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeSaveOrUpdateWarningsOutcomeCallable CwpClient::DescribeSaveOrUpdateWarningsCallable(const DescribeSaveOrUpdateWarningsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSaveOrUpdateWarningsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSaveOrUpdateWarnings(request);
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

CwpClient::DescribeSearchExportListOutcome CwpClient::DescribeSearchExportList(const DescribeSearchExportListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSearchExportList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSearchExportListResponse rsp = DescribeSearchExportListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSearchExportListOutcome(rsp);
        else
            return DescribeSearchExportListOutcome(o.GetError());
    }
    else
    {
        return DescribeSearchExportListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeSearchExportListAsync(const DescribeSearchExportListRequest& request, const DescribeSearchExportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSearchExportList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::DescribeSearchExportListOutcomeCallable CwpClient::DescribeSearchExportListCallable(const DescribeSearchExportListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSearchExportListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSearchExportList(request);
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

CwpClient::ExportAttackLogsOutcome CwpClient::ExportAttackLogs(const ExportAttackLogsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAttackLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAttackLogsResponse rsp = ExportAttackLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAttackLogsOutcome(rsp);
        else
            return ExportAttackLogsOutcome(o.GetError());
    }
    else
    {
        return ExportAttackLogsOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAttackLogsAsync(const ExportAttackLogsRequest& request, const ExportAttackLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportAttackLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ExportAttackLogsOutcomeCallable CwpClient::ExportAttackLogsCallable(const ExportAttackLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportAttackLogsOutcome()>>(
        [this, request]()
        {
            return this->ExportAttackLogs(request);
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

CwpClient::InquiryPriceOpenProVersionPrepaidOutcome CwpClient::InquiryPriceOpenProVersionPrepaid(const InquiryPriceOpenProVersionPrepaidRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceOpenProVersionPrepaid");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceOpenProVersionPrepaidResponse rsp = InquiryPriceOpenProVersionPrepaidResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceOpenProVersionPrepaidOutcome(rsp);
        else
            return InquiryPriceOpenProVersionPrepaidOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceOpenProVersionPrepaidOutcome(outcome.GetError());
    }
}

void CwpClient::InquiryPriceOpenProVersionPrepaidAsync(const InquiryPriceOpenProVersionPrepaidRequest& request, const InquiryPriceOpenProVersionPrepaidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceOpenProVersionPrepaid(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::InquiryPriceOpenProVersionPrepaidOutcomeCallable CwpClient::InquiryPriceOpenProVersionPrepaidCallable(const InquiryPriceOpenProVersionPrepaidRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceOpenProVersionPrepaidOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceOpenProVersionPrepaid(request);
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

CwpClient::ModifyProVersionRenewFlagOutcome CwpClient::ModifyProVersionRenewFlag(const ModifyProVersionRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProVersionRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProVersionRenewFlagResponse rsp = ModifyProVersionRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProVersionRenewFlagOutcome(rsp);
        else
            return ModifyProVersionRenewFlagOutcome(o.GetError());
    }
    else
    {
        return ModifyProVersionRenewFlagOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyProVersionRenewFlagAsync(const ModifyProVersionRenewFlagRequest& request, const ModifyProVersionRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyProVersionRenewFlag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::ModifyProVersionRenewFlagOutcomeCallable CwpClient::ModifyProVersionRenewFlagCallable(const ModifyProVersionRenewFlagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyProVersionRenewFlagOutcome()>>(
        [this, request]()
        {
            return this->ModifyProVersionRenewFlag(request);
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

CwpClient::OpenProVersionOutcome CwpClient::OpenProVersion(const OpenProVersionRequest &request)
{
    auto outcome = MakeRequest(request, "OpenProVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenProVersionResponse rsp = OpenProVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenProVersionOutcome(rsp);
        else
            return OpenProVersionOutcome(o.GetError());
    }
    else
    {
        return OpenProVersionOutcome(outcome.GetError());
    }
}

void CwpClient::OpenProVersionAsync(const OpenProVersionRequest& request, const OpenProVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenProVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::OpenProVersionOutcomeCallable CwpClient::OpenProVersionCallable(const OpenProVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OpenProVersionOutcome()>>(
        [this, request]()
        {
            return this->OpenProVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::OpenProVersionPrepaidOutcome CwpClient::OpenProVersionPrepaid(const OpenProVersionPrepaidRequest &request)
{
    auto outcome = MakeRequest(request, "OpenProVersionPrepaid");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenProVersionPrepaidResponse rsp = OpenProVersionPrepaidResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenProVersionPrepaidOutcome(rsp);
        else
            return OpenProVersionPrepaidOutcome(o.GetError());
    }
    else
    {
        return OpenProVersionPrepaidOutcome(outcome.GetError());
    }
}

void CwpClient::OpenProVersionPrepaidAsync(const OpenProVersionPrepaidRequest& request, const OpenProVersionPrepaidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenProVersionPrepaid(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::OpenProVersionPrepaidOutcomeCallable CwpClient::OpenProVersionPrepaidCallable(const OpenProVersionPrepaidRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OpenProVersionPrepaidOutcome()>>(
        [this, request]()
        {
            return this->OpenProVersionPrepaid(request);
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

CwpClient::RenewProVersionOutcome CwpClient::RenewProVersion(const RenewProVersionRequest &request)
{
    auto outcome = MakeRequest(request, "RenewProVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewProVersionResponse rsp = RenewProVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewProVersionOutcome(rsp);
        else
            return RenewProVersionOutcome(o.GetError());
    }
    else
    {
        return RenewProVersionOutcome(outcome.GetError());
    }
}

void CwpClient::RenewProVersionAsync(const RenewProVersionRequest& request, const RenewProVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewProVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::RenewProVersionOutcomeCallable CwpClient::RenewProVersionCallable(const RenewProVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewProVersionOutcome()>>(
        [this, request]()
        {
            return this->RenewProVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CwpClient::RescanImpactedHostOutcome CwpClient::RescanImpactedHost(const RescanImpactedHostRequest &request)
{
    auto outcome = MakeRequest(request, "RescanImpactedHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RescanImpactedHostResponse rsp = RescanImpactedHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RescanImpactedHostOutcome(rsp);
        else
            return RescanImpactedHostOutcome(o.GetError());
    }
    else
    {
        return RescanImpactedHostOutcome(outcome.GetError());
    }
}

void CwpClient::RescanImpactedHostAsync(const RescanImpactedHostRequest& request, const RescanImpactedHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RescanImpactedHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CwpClient::RescanImpactedHostOutcomeCallable CwpClient::RescanImpactedHostCallable(const RescanImpactedHostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RescanImpactedHostOutcome()>>(
        [this, request]()
        {
            return this->RescanImpactedHost(request);
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

