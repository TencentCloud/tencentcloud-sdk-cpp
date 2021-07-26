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

