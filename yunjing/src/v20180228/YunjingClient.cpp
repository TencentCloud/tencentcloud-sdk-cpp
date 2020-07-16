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

#include <tencentcloud/yunjing/v20180228/YunjingClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Yunjing::V20180228;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-02-28";
    const string ENDPOINT = "yunjing.tencentcloudapi.com";
}

YunjingClient::YunjingClient(const Credential &credential, const string &region) :
    YunjingClient(credential, region, ClientProfile())
{
}

YunjingClient::YunjingClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


YunjingClient::AddLoginWhiteListOutcome YunjingClient::AddLoginWhiteList(const AddLoginWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "AddLoginWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddLoginWhiteListResponse rsp = AddLoginWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddLoginWhiteListOutcome(rsp);
        else
            return AddLoginWhiteListOutcome(o.GetError());
    }
    else
    {
        return AddLoginWhiteListOutcome(outcome.GetError());
    }
}

void YunjingClient::AddLoginWhiteListAsync(const AddLoginWhiteListRequest& request, const AddLoginWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddLoginWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::AddLoginWhiteListOutcomeCallable YunjingClient::AddLoginWhiteListCallable(const AddLoginWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddLoginWhiteListOutcome()>>(
        [this, request]()
        {
            return this->AddLoginWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::AddMachineTagOutcome YunjingClient::AddMachineTag(const AddMachineTagRequest &request)
{
    auto outcome = MakeRequest(request, "AddMachineTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddMachineTagResponse rsp = AddMachineTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddMachineTagOutcome(rsp);
        else
            return AddMachineTagOutcome(o.GetError());
    }
    else
    {
        return AddMachineTagOutcome(outcome.GetError());
    }
}

void YunjingClient::AddMachineTagAsync(const AddMachineTagRequest& request, const AddMachineTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddMachineTag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::AddMachineTagOutcomeCallable YunjingClient::AddMachineTagCallable(const AddMachineTagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddMachineTagOutcome()>>(
        [this, request]()
        {
            return this->AddMachineTag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::CloseProVersionOutcome YunjingClient::CloseProVersion(const CloseProVersionRequest &request)
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

void YunjingClient::CloseProVersionAsync(const CloseProVersionRequest& request, const CloseProVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloseProVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::CloseProVersionOutcomeCallable YunjingClient::CloseProVersionCallable(const CloseProVersionRequest &request)
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

YunjingClient::CreateBaselineStrategyOutcome YunjingClient::CreateBaselineStrategy(const CreateBaselineStrategyRequest &request)
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

void YunjingClient::CreateBaselineStrategyAsync(const CreateBaselineStrategyRequest& request, const CreateBaselineStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBaselineStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::CreateBaselineStrategyOutcomeCallable YunjingClient::CreateBaselineStrategyCallable(const CreateBaselineStrategyRequest &request)
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

YunjingClient::CreateOpenPortTaskOutcome YunjingClient::CreateOpenPortTask(const CreateOpenPortTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOpenPortTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOpenPortTaskResponse rsp = CreateOpenPortTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOpenPortTaskOutcome(rsp);
        else
            return CreateOpenPortTaskOutcome(o.GetError());
    }
    else
    {
        return CreateOpenPortTaskOutcome(outcome.GetError());
    }
}

void YunjingClient::CreateOpenPortTaskAsync(const CreateOpenPortTaskRequest& request, const CreateOpenPortTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOpenPortTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::CreateOpenPortTaskOutcomeCallable YunjingClient::CreateOpenPortTaskCallable(const CreateOpenPortTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOpenPortTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateOpenPortTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::CreateProcessTaskOutcome YunjingClient::CreateProcessTask(const CreateProcessTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProcessTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProcessTaskResponse rsp = CreateProcessTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProcessTaskOutcome(rsp);
        else
            return CreateProcessTaskOutcome(o.GetError());
    }
    else
    {
        return CreateProcessTaskOutcome(outcome.GetError());
    }
}

void YunjingClient::CreateProcessTaskAsync(const CreateProcessTaskRequest& request, const CreateProcessTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProcessTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::CreateProcessTaskOutcomeCallable YunjingClient::CreateProcessTaskCallable(const CreateProcessTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateProcessTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateProcessTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::CreateUsualLoginPlacesOutcome YunjingClient::CreateUsualLoginPlaces(const CreateUsualLoginPlacesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUsualLoginPlaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUsualLoginPlacesResponse rsp = CreateUsualLoginPlacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUsualLoginPlacesOutcome(rsp);
        else
            return CreateUsualLoginPlacesOutcome(o.GetError());
    }
    else
    {
        return CreateUsualLoginPlacesOutcome(outcome.GetError());
    }
}

void YunjingClient::CreateUsualLoginPlacesAsync(const CreateUsualLoginPlacesRequest& request, const CreateUsualLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUsualLoginPlaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::CreateUsualLoginPlacesOutcomeCallable YunjingClient::CreateUsualLoginPlacesCallable(const CreateUsualLoginPlacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUsualLoginPlacesOutcome()>>(
        [this, request]()
        {
            return this->CreateUsualLoginPlaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::DeleteAttackLogsOutcome YunjingClient::DeleteAttackLogs(const DeleteAttackLogsRequest &request)
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

void YunjingClient::DeleteAttackLogsAsync(const DeleteAttackLogsRequest& request, const DeleteAttackLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAttackLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DeleteAttackLogsOutcomeCallable YunjingClient::DeleteAttackLogsCallable(const DeleteAttackLogsRequest &request)
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

YunjingClient::DeleteBashEventsOutcome YunjingClient::DeleteBashEvents(const DeleteBashEventsRequest &request)
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

void YunjingClient::DeleteBashEventsAsync(const DeleteBashEventsRequest& request, const DeleteBashEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBashEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DeleteBashEventsOutcomeCallable YunjingClient::DeleteBashEventsCallable(const DeleteBashEventsRequest &request)
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

YunjingClient::DeleteBashRulesOutcome YunjingClient::DeleteBashRules(const DeleteBashRulesRequest &request)
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

void YunjingClient::DeleteBashRulesAsync(const DeleteBashRulesRequest& request, const DeleteBashRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBashRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DeleteBashRulesOutcomeCallable YunjingClient::DeleteBashRulesCallable(const DeleteBashRulesRequest &request)
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

YunjingClient::DeleteBruteAttacksOutcome YunjingClient::DeleteBruteAttacks(const DeleteBruteAttacksRequest &request)
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

void YunjingClient::DeleteBruteAttacksAsync(const DeleteBruteAttacksRequest& request, const DeleteBruteAttacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBruteAttacks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DeleteBruteAttacksOutcomeCallable YunjingClient::DeleteBruteAttacksCallable(const DeleteBruteAttacksRequest &request)
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

YunjingClient::DeleteLoginWhiteListOutcome YunjingClient::DeleteLoginWhiteList(const DeleteLoginWhiteListRequest &request)
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

void YunjingClient::DeleteLoginWhiteListAsync(const DeleteLoginWhiteListRequest& request, const DeleteLoginWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLoginWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DeleteLoginWhiteListOutcomeCallable YunjingClient::DeleteLoginWhiteListCallable(const DeleteLoginWhiteListRequest &request)
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

YunjingClient::DeleteMachineOutcome YunjingClient::DeleteMachine(const DeleteMachineRequest &request)
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

void YunjingClient::DeleteMachineAsync(const DeleteMachineRequest& request, const DeleteMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMachine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DeleteMachineOutcomeCallable YunjingClient::DeleteMachineCallable(const DeleteMachineRequest &request)
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

YunjingClient::DeleteMachineTagOutcome YunjingClient::DeleteMachineTag(const DeleteMachineTagRequest &request)
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

void YunjingClient::DeleteMachineTagAsync(const DeleteMachineTagRequest& request, const DeleteMachineTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMachineTag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DeleteMachineTagOutcomeCallable YunjingClient::DeleteMachineTagCallable(const DeleteMachineTagRequest &request)
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

YunjingClient::DeleteMaliciousRequestsOutcome YunjingClient::DeleteMaliciousRequests(const DeleteMaliciousRequestsRequest &request)
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

void YunjingClient::DeleteMaliciousRequestsAsync(const DeleteMaliciousRequestsRequest& request, const DeleteMaliciousRequestsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMaliciousRequests(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DeleteMaliciousRequestsOutcomeCallable YunjingClient::DeleteMaliciousRequestsCallable(const DeleteMaliciousRequestsRequest &request)
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

YunjingClient::DeleteMalwaresOutcome YunjingClient::DeleteMalwares(const DeleteMalwaresRequest &request)
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

void YunjingClient::DeleteMalwaresAsync(const DeleteMalwaresRequest& request, const DeleteMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMalwares(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DeleteMalwaresOutcomeCallable YunjingClient::DeleteMalwaresCallable(const DeleteMalwaresRequest &request)
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

YunjingClient::DeleteNonlocalLoginPlacesOutcome YunjingClient::DeleteNonlocalLoginPlaces(const DeleteNonlocalLoginPlacesRequest &request)
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

void YunjingClient::DeleteNonlocalLoginPlacesAsync(const DeleteNonlocalLoginPlacesRequest& request, const DeleteNonlocalLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNonlocalLoginPlaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DeleteNonlocalLoginPlacesOutcomeCallable YunjingClient::DeleteNonlocalLoginPlacesCallable(const DeleteNonlocalLoginPlacesRequest &request)
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

YunjingClient::DeletePrivilegeEventsOutcome YunjingClient::DeletePrivilegeEvents(const DeletePrivilegeEventsRequest &request)
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

void YunjingClient::DeletePrivilegeEventsAsync(const DeletePrivilegeEventsRequest& request, const DeletePrivilegeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePrivilegeEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DeletePrivilegeEventsOutcomeCallable YunjingClient::DeletePrivilegeEventsCallable(const DeletePrivilegeEventsRequest &request)
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

YunjingClient::DeletePrivilegeRulesOutcome YunjingClient::DeletePrivilegeRules(const DeletePrivilegeRulesRequest &request)
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

void YunjingClient::DeletePrivilegeRulesAsync(const DeletePrivilegeRulesRequest& request, const DeletePrivilegeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePrivilegeRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DeletePrivilegeRulesOutcomeCallable YunjingClient::DeletePrivilegeRulesCallable(const DeletePrivilegeRulesRequest &request)
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

YunjingClient::DeleteReverseShellEventsOutcome YunjingClient::DeleteReverseShellEvents(const DeleteReverseShellEventsRequest &request)
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

void YunjingClient::DeleteReverseShellEventsAsync(const DeleteReverseShellEventsRequest& request, const DeleteReverseShellEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteReverseShellEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DeleteReverseShellEventsOutcomeCallable YunjingClient::DeleteReverseShellEventsCallable(const DeleteReverseShellEventsRequest &request)
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

YunjingClient::DeleteReverseShellRulesOutcome YunjingClient::DeleteReverseShellRules(const DeleteReverseShellRulesRequest &request)
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

void YunjingClient::DeleteReverseShellRulesAsync(const DeleteReverseShellRulesRequest& request, const DeleteReverseShellRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteReverseShellRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DeleteReverseShellRulesOutcomeCallable YunjingClient::DeleteReverseShellRulesCallable(const DeleteReverseShellRulesRequest &request)
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

YunjingClient::DeleteTagsOutcome YunjingClient::DeleteTags(const DeleteTagsRequest &request)
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

void YunjingClient::DeleteTagsAsync(const DeleteTagsRequest& request, const DeleteTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DeleteTagsOutcomeCallable YunjingClient::DeleteTagsCallable(const DeleteTagsRequest &request)
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

YunjingClient::DeleteUsualLoginPlacesOutcome YunjingClient::DeleteUsualLoginPlaces(const DeleteUsualLoginPlacesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUsualLoginPlaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUsualLoginPlacesResponse rsp = DeleteUsualLoginPlacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUsualLoginPlacesOutcome(rsp);
        else
            return DeleteUsualLoginPlacesOutcome(o.GetError());
    }
    else
    {
        return DeleteUsualLoginPlacesOutcome(outcome.GetError());
    }
}

void YunjingClient::DeleteUsualLoginPlacesAsync(const DeleteUsualLoginPlacesRequest& request, const DeleteUsualLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUsualLoginPlaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DeleteUsualLoginPlacesOutcomeCallable YunjingClient::DeleteUsualLoginPlacesCallable(const DeleteUsualLoginPlacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteUsualLoginPlacesOutcome()>>(
        [this, request]()
        {
            return this->DeleteUsualLoginPlaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::DescribeAccountStatisticsOutcome YunjingClient::DescribeAccountStatistics(const DescribeAccountStatisticsRequest &request)
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

void YunjingClient::DescribeAccountStatisticsAsync(const DescribeAccountStatisticsRequest& request, const DescribeAccountStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccountStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeAccountStatisticsOutcomeCallable YunjingClient::DescribeAccountStatisticsCallable(const DescribeAccountStatisticsRequest &request)
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

YunjingClient::DescribeAccountsOutcome YunjingClient::DescribeAccounts(const DescribeAccountsRequest &request)
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

void YunjingClient::DescribeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccounts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeAccountsOutcomeCallable YunjingClient::DescribeAccountsCallable(const DescribeAccountsRequest &request)
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

YunjingClient::DescribeAgentVulsOutcome YunjingClient::DescribeAgentVuls(const DescribeAgentVulsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentVuls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentVulsResponse rsp = DescribeAgentVulsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentVulsOutcome(rsp);
        else
            return DescribeAgentVulsOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentVulsOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeAgentVulsAsync(const DescribeAgentVulsRequest& request, const DescribeAgentVulsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAgentVuls(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeAgentVulsOutcomeCallable YunjingClient::DescribeAgentVulsCallable(const DescribeAgentVulsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAgentVulsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAgentVuls(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::DescribeAlarmAttributeOutcome YunjingClient::DescribeAlarmAttribute(const DescribeAlarmAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmAttributeResponse rsp = DescribeAlarmAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmAttributeOutcome(rsp);
        else
            return DescribeAlarmAttributeOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmAttributeOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeAlarmAttributeAsync(const DescribeAlarmAttributeRequest& request, const DescribeAlarmAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlarmAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeAlarmAttributeOutcomeCallable YunjingClient::DescribeAlarmAttributeCallable(const DescribeAlarmAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlarmAttributeOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlarmAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::DescribeAttackLogInfoOutcome YunjingClient::DescribeAttackLogInfo(const DescribeAttackLogInfoRequest &request)
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

void YunjingClient::DescribeAttackLogInfoAsync(const DescribeAttackLogInfoRequest& request, const DescribeAttackLogInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAttackLogInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeAttackLogInfoOutcomeCallable YunjingClient::DescribeAttackLogInfoCallable(const DescribeAttackLogInfoRequest &request)
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

YunjingClient::DescribeAttackLogsOutcome YunjingClient::DescribeAttackLogs(const DescribeAttackLogsRequest &request)
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

void YunjingClient::DescribeAttackLogsAsync(const DescribeAttackLogsRequest& request, const DescribeAttackLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAttackLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeAttackLogsOutcomeCallable YunjingClient::DescribeAttackLogsCallable(const DescribeAttackLogsRequest &request)
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

YunjingClient::DescribeBashEventsOutcome YunjingClient::DescribeBashEvents(const DescribeBashEventsRequest &request)
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

void YunjingClient::DescribeBashEventsAsync(const DescribeBashEventsRequest& request, const DescribeBashEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBashEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeBashEventsOutcomeCallable YunjingClient::DescribeBashEventsCallable(const DescribeBashEventsRequest &request)
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

YunjingClient::DescribeBashRulesOutcome YunjingClient::DescribeBashRules(const DescribeBashRulesRequest &request)
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

void YunjingClient::DescribeBashRulesAsync(const DescribeBashRulesRequest& request, const DescribeBashRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBashRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeBashRulesOutcomeCallable YunjingClient::DescribeBashRulesCallable(const DescribeBashRulesRequest &request)
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

YunjingClient::DescribeBruteAttacksOutcome YunjingClient::DescribeBruteAttacks(const DescribeBruteAttacksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBruteAttacks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBruteAttacksResponse rsp = DescribeBruteAttacksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBruteAttacksOutcome(rsp);
        else
            return DescribeBruteAttacksOutcome(o.GetError());
    }
    else
    {
        return DescribeBruteAttacksOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeBruteAttacksAsync(const DescribeBruteAttacksRequest& request, const DescribeBruteAttacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBruteAttacks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeBruteAttacksOutcomeCallable YunjingClient::DescribeBruteAttacksCallable(const DescribeBruteAttacksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBruteAttacksOutcome()>>(
        [this, request]()
        {
            return this->DescribeBruteAttacks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::DescribeComponentInfoOutcome YunjingClient::DescribeComponentInfo(const DescribeComponentInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeComponentInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeComponentInfoResponse rsp = DescribeComponentInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeComponentInfoOutcome(rsp);
        else
            return DescribeComponentInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeComponentInfoOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeComponentInfoAsync(const DescribeComponentInfoRequest& request, const DescribeComponentInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeComponentInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeComponentInfoOutcomeCallable YunjingClient::DescribeComponentInfoCallable(const DescribeComponentInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeComponentInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeComponentInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::DescribeComponentStatisticsOutcome YunjingClient::DescribeComponentStatistics(const DescribeComponentStatisticsRequest &request)
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

void YunjingClient::DescribeComponentStatisticsAsync(const DescribeComponentStatisticsRequest& request, const DescribeComponentStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeComponentStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeComponentStatisticsOutcomeCallable YunjingClient::DescribeComponentStatisticsCallable(const DescribeComponentStatisticsRequest &request)
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

YunjingClient::DescribeComponentsOutcome YunjingClient::DescribeComponents(const DescribeComponentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeComponents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeComponentsResponse rsp = DescribeComponentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeComponentsOutcome(rsp);
        else
            return DescribeComponentsOutcome(o.GetError());
    }
    else
    {
        return DescribeComponentsOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeComponentsAsync(const DescribeComponentsRequest& request, const DescribeComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeComponents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeComponentsOutcomeCallable YunjingClient::DescribeComponentsCallable(const DescribeComponentsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeComponentsOutcome()>>(
        [this, request]()
        {
            return this->DescribeComponents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::DescribeHistoryAccountsOutcome YunjingClient::DescribeHistoryAccounts(const DescribeHistoryAccountsRequest &request)
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

void YunjingClient::DescribeHistoryAccountsAsync(const DescribeHistoryAccountsRequest& request, const DescribeHistoryAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHistoryAccounts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeHistoryAccountsOutcomeCallable YunjingClient::DescribeHistoryAccountsCallable(const DescribeHistoryAccountsRequest &request)
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

YunjingClient::DescribeImpactedHostsOutcome YunjingClient::DescribeImpactedHosts(const DescribeImpactedHostsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImpactedHosts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImpactedHostsResponse rsp = DescribeImpactedHostsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImpactedHostsOutcome(rsp);
        else
            return DescribeImpactedHostsOutcome(o.GetError());
    }
    else
    {
        return DescribeImpactedHostsOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeImpactedHostsAsync(const DescribeImpactedHostsRequest& request, const DescribeImpactedHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImpactedHosts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeImpactedHostsOutcomeCallable YunjingClient::DescribeImpactedHostsCallable(const DescribeImpactedHostsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImpactedHostsOutcome()>>(
        [this, request]()
        {
            return this->DescribeImpactedHosts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::DescribeLoginWhiteListOutcome YunjingClient::DescribeLoginWhiteList(const DescribeLoginWhiteListRequest &request)
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

void YunjingClient::DescribeLoginWhiteListAsync(const DescribeLoginWhiteListRequest& request, const DescribeLoginWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLoginWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeLoginWhiteListOutcomeCallable YunjingClient::DescribeLoginWhiteListCallable(const DescribeLoginWhiteListRequest &request)
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

YunjingClient::DescribeMachineInfoOutcome YunjingClient::DescribeMachineInfo(const DescribeMachineInfoRequest &request)
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

void YunjingClient::DescribeMachineInfoAsync(const DescribeMachineInfoRequest& request, const DescribeMachineInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMachineInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeMachineInfoOutcomeCallable YunjingClient::DescribeMachineInfoCallable(const DescribeMachineInfoRequest &request)
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

YunjingClient::DescribeMachinesOutcome YunjingClient::DescribeMachines(const DescribeMachinesRequest &request)
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

void YunjingClient::DescribeMachinesAsync(const DescribeMachinesRequest& request, const DescribeMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMachines(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeMachinesOutcomeCallable YunjingClient::DescribeMachinesCallable(const DescribeMachinesRequest &request)
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

YunjingClient::DescribeMaliciousRequestsOutcome YunjingClient::DescribeMaliciousRequests(const DescribeMaliciousRequestsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMaliciousRequests");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMaliciousRequestsResponse rsp = DescribeMaliciousRequestsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMaliciousRequestsOutcome(rsp);
        else
            return DescribeMaliciousRequestsOutcome(o.GetError());
    }
    else
    {
        return DescribeMaliciousRequestsOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeMaliciousRequestsAsync(const DescribeMaliciousRequestsRequest& request, const DescribeMaliciousRequestsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMaliciousRequests(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeMaliciousRequestsOutcomeCallable YunjingClient::DescribeMaliciousRequestsCallable(const DescribeMaliciousRequestsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMaliciousRequestsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMaliciousRequests(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::DescribeMalwaresOutcome YunjingClient::DescribeMalwares(const DescribeMalwaresRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMalwares");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMalwaresResponse rsp = DescribeMalwaresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMalwaresOutcome(rsp);
        else
            return DescribeMalwaresOutcome(o.GetError());
    }
    else
    {
        return DescribeMalwaresOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeMalwaresAsync(const DescribeMalwaresRequest& request, const DescribeMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMalwares(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeMalwaresOutcomeCallable YunjingClient::DescribeMalwaresCallable(const DescribeMalwaresRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMalwaresOutcome()>>(
        [this, request]()
        {
            return this->DescribeMalwares(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::DescribeNonlocalLoginPlacesOutcome YunjingClient::DescribeNonlocalLoginPlaces(const DescribeNonlocalLoginPlacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNonlocalLoginPlaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNonlocalLoginPlacesResponse rsp = DescribeNonlocalLoginPlacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNonlocalLoginPlacesOutcome(rsp);
        else
            return DescribeNonlocalLoginPlacesOutcome(o.GetError());
    }
    else
    {
        return DescribeNonlocalLoginPlacesOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeNonlocalLoginPlacesAsync(const DescribeNonlocalLoginPlacesRequest& request, const DescribeNonlocalLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNonlocalLoginPlaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeNonlocalLoginPlacesOutcomeCallable YunjingClient::DescribeNonlocalLoginPlacesCallable(const DescribeNonlocalLoginPlacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNonlocalLoginPlacesOutcome()>>(
        [this, request]()
        {
            return this->DescribeNonlocalLoginPlaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::DescribeOpenPortStatisticsOutcome YunjingClient::DescribeOpenPortStatistics(const DescribeOpenPortStatisticsRequest &request)
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

void YunjingClient::DescribeOpenPortStatisticsAsync(const DescribeOpenPortStatisticsRequest& request, const DescribeOpenPortStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOpenPortStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeOpenPortStatisticsOutcomeCallable YunjingClient::DescribeOpenPortStatisticsCallable(const DescribeOpenPortStatisticsRequest &request)
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

YunjingClient::DescribeOpenPortTaskStatusOutcome YunjingClient::DescribeOpenPortTaskStatus(const DescribeOpenPortTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOpenPortTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOpenPortTaskStatusResponse rsp = DescribeOpenPortTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOpenPortTaskStatusOutcome(rsp);
        else
            return DescribeOpenPortTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeOpenPortTaskStatusOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeOpenPortTaskStatusAsync(const DescribeOpenPortTaskStatusRequest& request, const DescribeOpenPortTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOpenPortTaskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeOpenPortTaskStatusOutcomeCallable YunjingClient::DescribeOpenPortTaskStatusCallable(const DescribeOpenPortTaskStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOpenPortTaskStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeOpenPortTaskStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::DescribeOpenPortsOutcome YunjingClient::DescribeOpenPorts(const DescribeOpenPortsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOpenPorts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOpenPortsResponse rsp = DescribeOpenPortsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOpenPortsOutcome(rsp);
        else
            return DescribeOpenPortsOutcome(o.GetError());
    }
    else
    {
        return DescribeOpenPortsOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeOpenPortsAsync(const DescribeOpenPortsRequest& request, const DescribeOpenPortsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOpenPorts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeOpenPortsOutcomeCallable YunjingClient::DescribeOpenPortsCallable(const DescribeOpenPortsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOpenPortsOutcome()>>(
        [this, request]()
        {
            return this->DescribeOpenPorts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::DescribeOverviewStatisticsOutcome YunjingClient::DescribeOverviewStatistics(const DescribeOverviewStatisticsRequest &request)
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

void YunjingClient::DescribeOverviewStatisticsAsync(const DescribeOverviewStatisticsRequest& request, const DescribeOverviewStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOverviewStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeOverviewStatisticsOutcomeCallable YunjingClient::DescribeOverviewStatisticsCallable(const DescribeOverviewStatisticsRequest &request)
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

YunjingClient::DescribePrivilegeEventsOutcome YunjingClient::DescribePrivilegeEvents(const DescribePrivilegeEventsRequest &request)
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

void YunjingClient::DescribePrivilegeEventsAsync(const DescribePrivilegeEventsRequest& request, const DescribePrivilegeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrivilegeEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribePrivilegeEventsOutcomeCallable YunjingClient::DescribePrivilegeEventsCallable(const DescribePrivilegeEventsRequest &request)
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

YunjingClient::DescribePrivilegeRulesOutcome YunjingClient::DescribePrivilegeRules(const DescribePrivilegeRulesRequest &request)
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

void YunjingClient::DescribePrivilegeRulesAsync(const DescribePrivilegeRulesRequest& request, const DescribePrivilegeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrivilegeRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribePrivilegeRulesOutcomeCallable YunjingClient::DescribePrivilegeRulesCallable(const DescribePrivilegeRulesRequest &request)
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

YunjingClient::DescribeProVersionInfoOutcome YunjingClient::DescribeProVersionInfo(const DescribeProVersionInfoRequest &request)
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

void YunjingClient::DescribeProVersionInfoAsync(const DescribeProVersionInfoRequest& request, const DescribeProVersionInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProVersionInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeProVersionInfoOutcomeCallable YunjingClient::DescribeProVersionInfoCallable(const DescribeProVersionInfoRequest &request)
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

YunjingClient::DescribeProcessStatisticsOutcome YunjingClient::DescribeProcessStatistics(const DescribeProcessStatisticsRequest &request)
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

void YunjingClient::DescribeProcessStatisticsAsync(const DescribeProcessStatisticsRequest& request, const DescribeProcessStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProcessStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeProcessStatisticsOutcomeCallable YunjingClient::DescribeProcessStatisticsCallable(const DescribeProcessStatisticsRequest &request)
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

YunjingClient::DescribeProcessTaskStatusOutcome YunjingClient::DescribeProcessTaskStatus(const DescribeProcessTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProcessTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProcessTaskStatusResponse rsp = DescribeProcessTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProcessTaskStatusOutcome(rsp);
        else
            return DescribeProcessTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeProcessTaskStatusOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeProcessTaskStatusAsync(const DescribeProcessTaskStatusRequest& request, const DescribeProcessTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProcessTaskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeProcessTaskStatusOutcomeCallable YunjingClient::DescribeProcessTaskStatusCallable(const DescribeProcessTaskStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProcessTaskStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeProcessTaskStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::DescribeProcessesOutcome YunjingClient::DescribeProcesses(const DescribeProcessesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProcesses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProcessesResponse rsp = DescribeProcessesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProcessesOutcome(rsp);
        else
            return DescribeProcessesOutcome(o.GetError());
    }
    else
    {
        return DescribeProcessesOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeProcessesAsync(const DescribeProcessesRequest& request, const DescribeProcessesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProcesses(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeProcessesOutcomeCallable YunjingClient::DescribeProcessesCallable(const DescribeProcessesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProcessesOutcome()>>(
        [this, request]()
        {
            return this->DescribeProcesses(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::DescribeReverseShellEventsOutcome YunjingClient::DescribeReverseShellEvents(const DescribeReverseShellEventsRequest &request)
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

void YunjingClient::DescribeReverseShellEventsAsync(const DescribeReverseShellEventsRequest& request, const DescribeReverseShellEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReverseShellEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeReverseShellEventsOutcomeCallable YunjingClient::DescribeReverseShellEventsCallable(const DescribeReverseShellEventsRequest &request)
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

YunjingClient::DescribeReverseShellRulesOutcome YunjingClient::DescribeReverseShellRules(const DescribeReverseShellRulesRequest &request)
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

void YunjingClient::DescribeReverseShellRulesAsync(const DescribeReverseShellRulesRequest& request, const DescribeReverseShellRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReverseShellRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeReverseShellRulesOutcomeCallable YunjingClient::DescribeReverseShellRulesCallable(const DescribeReverseShellRulesRequest &request)
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

YunjingClient::DescribeSecurityDynamicsOutcome YunjingClient::DescribeSecurityDynamics(const DescribeSecurityDynamicsRequest &request)
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

void YunjingClient::DescribeSecurityDynamicsAsync(const DescribeSecurityDynamicsRequest& request, const DescribeSecurityDynamicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityDynamics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeSecurityDynamicsOutcomeCallable YunjingClient::DescribeSecurityDynamicsCallable(const DescribeSecurityDynamicsRequest &request)
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

YunjingClient::DescribeSecurityTrendsOutcome YunjingClient::DescribeSecurityTrends(const DescribeSecurityTrendsRequest &request)
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

void YunjingClient::DescribeSecurityTrendsAsync(const DescribeSecurityTrendsRequest& request, const DescribeSecurityTrendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityTrends(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeSecurityTrendsOutcomeCallable YunjingClient::DescribeSecurityTrendsCallable(const DescribeSecurityTrendsRequest &request)
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

YunjingClient::DescribeTagMachinesOutcome YunjingClient::DescribeTagMachines(const DescribeTagMachinesRequest &request)
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

void YunjingClient::DescribeTagMachinesAsync(const DescribeTagMachinesRequest& request, const DescribeTagMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTagMachines(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeTagMachinesOutcomeCallable YunjingClient::DescribeTagMachinesCallable(const DescribeTagMachinesRequest &request)
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

YunjingClient::DescribeTagsOutcome YunjingClient::DescribeTags(const DescribeTagsRequest &request)
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

void YunjingClient::DescribeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeTagsOutcomeCallable YunjingClient::DescribeTagsCallable(const DescribeTagsRequest &request)
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

YunjingClient::DescribeUsualLoginPlacesOutcome YunjingClient::DescribeUsualLoginPlaces(const DescribeUsualLoginPlacesRequest &request)
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

void YunjingClient::DescribeUsualLoginPlacesAsync(const DescribeUsualLoginPlacesRequest& request, const DescribeUsualLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUsualLoginPlaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeUsualLoginPlacesOutcomeCallable YunjingClient::DescribeUsualLoginPlacesCallable(const DescribeUsualLoginPlacesRequest &request)
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

YunjingClient::DescribeVulInfoOutcome YunjingClient::DescribeVulInfo(const DescribeVulInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulInfoResponse rsp = DescribeVulInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulInfoOutcome(rsp);
        else
            return DescribeVulInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeVulInfoOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeVulInfoAsync(const DescribeVulInfoRequest& request, const DescribeVulInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeVulInfoOutcomeCallable YunjingClient::DescribeVulInfoCallable(const DescribeVulInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::DescribeVulScanResultOutcome YunjingClient::DescribeVulScanResult(const DescribeVulScanResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulScanResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulScanResultResponse rsp = DescribeVulScanResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulScanResultOutcome(rsp);
        else
            return DescribeVulScanResultOutcome(o.GetError());
    }
    else
    {
        return DescribeVulScanResultOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeVulScanResultAsync(const DescribeVulScanResultRequest& request, const DescribeVulScanResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulScanResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeVulScanResultOutcomeCallable YunjingClient::DescribeVulScanResultCallable(const DescribeVulScanResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulScanResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulScanResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::DescribeVulsOutcome YunjingClient::DescribeVuls(const DescribeVulsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVuls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulsResponse rsp = DescribeVulsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulsOutcome(rsp);
        else
            return DescribeVulsOutcome(o.GetError());
    }
    else
    {
        return DescribeVulsOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeVulsAsync(const DescribeVulsRequest& request, const DescribeVulsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVuls(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeVulsOutcomeCallable YunjingClient::DescribeVulsCallable(const DescribeVulsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulsOutcome()>>(
        [this, request]()
        {
            return this->DescribeVuls(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::DescribeWeeklyReportBruteAttacksOutcome YunjingClient::DescribeWeeklyReportBruteAttacks(const DescribeWeeklyReportBruteAttacksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWeeklyReportBruteAttacks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWeeklyReportBruteAttacksResponse rsp = DescribeWeeklyReportBruteAttacksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWeeklyReportBruteAttacksOutcome(rsp);
        else
            return DescribeWeeklyReportBruteAttacksOutcome(o.GetError());
    }
    else
    {
        return DescribeWeeklyReportBruteAttacksOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeWeeklyReportBruteAttacksAsync(const DescribeWeeklyReportBruteAttacksRequest& request, const DescribeWeeklyReportBruteAttacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWeeklyReportBruteAttacks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeWeeklyReportBruteAttacksOutcomeCallable YunjingClient::DescribeWeeklyReportBruteAttacksCallable(const DescribeWeeklyReportBruteAttacksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWeeklyReportBruteAttacksOutcome()>>(
        [this, request]()
        {
            return this->DescribeWeeklyReportBruteAttacks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::DescribeWeeklyReportInfoOutcome YunjingClient::DescribeWeeklyReportInfo(const DescribeWeeklyReportInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWeeklyReportInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWeeklyReportInfoResponse rsp = DescribeWeeklyReportInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWeeklyReportInfoOutcome(rsp);
        else
            return DescribeWeeklyReportInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeWeeklyReportInfoOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeWeeklyReportInfoAsync(const DescribeWeeklyReportInfoRequest& request, const DescribeWeeklyReportInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWeeklyReportInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeWeeklyReportInfoOutcomeCallable YunjingClient::DescribeWeeklyReportInfoCallable(const DescribeWeeklyReportInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWeeklyReportInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeWeeklyReportInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::DescribeWeeklyReportMalwaresOutcome YunjingClient::DescribeWeeklyReportMalwares(const DescribeWeeklyReportMalwaresRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWeeklyReportMalwares");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWeeklyReportMalwaresResponse rsp = DescribeWeeklyReportMalwaresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWeeklyReportMalwaresOutcome(rsp);
        else
            return DescribeWeeklyReportMalwaresOutcome(o.GetError());
    }
    else
    {
        return DescribeWeeklyReportMalwaresOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeWeeklyReportMalwaresAsync(const DescribeWeeklyReportMalwaresRequest& request, const DescribeWeeklyReportMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWeeklyReportMalwares(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeWeeklyReportMalwaresOutcomeCallable YunjingClient::DescribeWeeklyReportMalwaresCallable(const DescribeWeeklyReportMalwaresRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWeeklyReportMalwaresOutcome()>>(
        [this, request]()
        {
            return this->DescribeWeeklyReportMalwares(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::DescribeWeeklyReportNonlocalLoginPlacesOutcome YunjingClient::DescribeWeeklyReportNonlocalLoginPlaces(const DescribeWeeklyReportNonlocalLoginPlacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWeeklyReportNonlocalLoginPlaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWeeklyReportNonlocalLoginPlacesResponse rsp = DescribeWeeklyReportNonlocalLoginPlacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWeeklyReportNonlocalLoginPlacesOutcome(rsp);
        else
            return DescribeWeeklyReportNonlocalLoginPlacesOutcome(o.GetError());
    }
    else
    {
        return DescribeWeeklyReportNonlocalLoginPlacesOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeWeeklyReportNonlocalLoginPlacesAsync(const DescribeWeeklyReportNonlocalLoginPlacesRequest& request, const DescribeWeeklyReportNonlocalLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWeeklyReportNonlocalLoginPlaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeWeeklyReportNonlocalLoginPlacesOutcomeCallable YunjingClient::DescribeWeeklyReportNonlocalLoginPlacesCallable(const DescribeWeeklyReportNonlocalLoginPlacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWeeklyReportNonlocalLoginPlacesOutcome()>>(
        [this, request]()
        {
            return this->DescribeWeeklyReportNonlocalLoginPlaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::DescribeWeeklyReportVulsOutcome YunjingClient::DescribeWeeklyReportVuls(const DescribeWeeklyReportVulsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWeeklyReportVuls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWeeklyReportVulsResponse rsp = DescribeWeeklyReportVulsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWeeklyReportVulsOutcome(rsp);
        else
            return DescribeWeeklyReportVulsOutcome(o.GetError());
    }
    else
    {
        return DescribeWeeklyReportVulsOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeWeeklyReportVulsAsync(const DescribeWeeklyReportVulsRequest& request, const DescribeWeeklyReportVulsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWeeklyReportVuls(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeWeeklyReportVulsOutcomeCallable YunjingClient::DescribeWeeklyReportVulsCallable(const DescribeWeeklyReportVulsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWeeklyReportVulsOutcome()>>(
        [this, request]()
        {
            return this->DescribeWeeklyReportVuls(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::DescribeWeeklyReportsOutcome YunjingClient::DescribeWeeklyReports(const DescribeWeeklyReportsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWeeklyReports");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWeeklyReportsResponse rsp = DescribeWeeklyReportsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWeeklyReportsOutcome(rsp);
        else
            return DescribeWeeklyReportsOutcome(o.GetError());
    }
    else
    {
        return DescribeWeeklyReportsOutcome(outcome.GetError());
    }
}

void YunjingClient::DescribeWeeklyReportsAsync(const DescribeWeeklyReportsRequest& request, const DescribeWeeklyReportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWeeklyReports(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::DescribeWeeklyReportsOutcomeCallable YunjingClient::DescribeWeeklyReportsCallable(const DescribeWeeklyReportsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWeeklyReportsOutcome()>>(
        [this, request]()
        {
            return this->DescribeWeeklyReports(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::EditBashRuleOutcome YunjingClient::EditBashRule(const EditBashRuleRequest &request)
{
    auto outcome = MakeRequest(request, "EditBashRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EditBashRuleResponse rsp = EditBashRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EditBashRuleOutcome(rsp);
        else
            return EditBashRuleOutcome(o.GetError());
    }
    else
    {
        return EditBashRuleOutcome(outcome.GetError());
    }
}

void YunjingClient::EditBashRuleAsync(const EditBashRuleRequest& request, const EditBashRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EditBashRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::EditBashRuleOutcomeCallable YunjingClient::EditBashRuleCallable(const EditBashRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EditBashRuleOutcome()>>(
        [this, request]()
        {
            return this->EditBashRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::EditPrivilegeRuleOutcome YunjingClient::EditPrivilegeRule(const EditPrivilegeRuleRequest &request)
{
    auto outcome = MakeRequest(request, "EditPrivilegeRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EditPrivilegeRuleResponse rsp = EditPrivilegeRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EditPrivilegeRuleOutcome(rsp);
        else
            return EditPrivilegeRuleOutcome(o.GetError());
    }
    else
    {
        return EditPrivilegeRuleOutcome(outcome.GetError());
    }
}

void YunjingClient::EditPrivilegeRuleAsync(const EditPrivilegeRuleRequest& request, const EditPrivilegeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EditPrivilegeRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::EditPrivilegeRuleOutcomeCallable YunjingClient::EditPrivilegeRuleCallable(const EditPrivilegeRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EditPrivilegeRuleOutcome()>>(
        [this, request]()
        {
            return this->EditPrivilegeRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::EditReverseShellRuleOutcome YunjingClient::EditReverseShellRule(const EditReverseShellRuleRequest &request)
{
    auto outcome = MakeRequest(request, "EditReverseShellRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EditReverseShellRuleResponse rsp = EditReverseShellRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EditReverseShellRuleOutcome(rsp);
        else
            return EditReverseShellRuleOutcome(o.GetError());
    }
    else
    {
        return EditReverseShellRuleOutcome(outcome.GetError());
    }
}

void YunjingClient::EditReverseShellRuleAsync(const EditReverseShellRuleRequest& request, const EditReverseShellRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EditReverseShellRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::EditReverseShellRuleOutcomeCallable YunjingClient::EditReverseShellRuleCallable(const EditReverseShellRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EditReverseShellRuleOutcome()>>(
        [this, request]()
        {
            return this->EditReverseShellRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::EditTagsOutcome YunjingClient::EditTags(const EditTagsRequest &request)
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

void YunjingClient::EditTagsAsync(const EditTagsRequest& request, const EditTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EditTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::EditTagsOutcomeCallable YunjingClient::EditTagsCallable(const EditTagsRequest &request)
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

YunjingClient::ExportAttackLogsOutcome YunjingClient::ExportAttackLogs(const ExportAttackLogsRequest &request)
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

void YunjingClient::ExportAttackLogsAsync(const ExportAttackLogsRequest& request, const ExportAttackLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportAttackLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::ExportAttackLogsOutcomeCallable YunjingClient::ExportAttackLogsCallable(const ExportAttackLogsRequest &request)
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

YunjingClient::ExportBashEventsOutcome YunjingClient::ExportBashEvents(const ExportBashEventsRequest &request)
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

void YunjingClient::ExportBashEventsAsync(const ExportBashEventsRequest& request, const ExportBashEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportBashEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::ExportBashEventsOutcomeCallable YunjingClient::ExportBashEventsCallable(const ExportBashEventsRequest &request)
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

YunjingClient::ExportBruteAttacksOutcome YunjingClient::ExportBruteAttacks(const ExportBruteAttacksRequest &request)
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

void YunjingClient::ExportBruteAttacksAsync(const ExportBruteAttacksRequest& request, const ExportBruteAttacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportBruteAttacks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::ExportBruteAttacksOutcomeCallable YunjingClient::ExportBruteAttacksCallable(const ExportBruteAttacksRequest &request)
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

YunjingClient::ExportMaliciousRequestsOutcome YunjingClient::ExportMaliciousRequests(const ExportMaliciousRequestsRequest &request)
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

void YunjingClient::ExportMaliciousRequestsAsync(const ExportMaliciousRequestsRequest& request, const ExportMaliciousRequestsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportMaliciousRequests(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::ExportMaliciousRequestsOutcomeCallable YunjingClient::ExportMaliciousRequestsCallable(const ExportMaliciousRequestsRequest &request)
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

YunjingClient::ExportMalwaresOutcome YunjingClient::ExportMalwares(const ExportMalwaresRequest &request)
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

void YunjingClient::ExportMalwaresAsync(const ExportMalwaresRequest& request, const ExportMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportMalwares(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::ExportMalwaresOutcomeCallable YunjingClient::ExportMalwaresCallable(const ExportMalwaresRequest &request)
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

YunjingClient::ExportNonlocalLoginPlacesOutcome YunjingClient::ExportNonlocalLoginPlaces(const ExportNonlocalLoginPlacesRequest &request)
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

void YunjingClient::ExportNonlocalLoginPlacesAsync(const ExportNonlocalLoginPlacesRequest& request, const ExportNonlocalLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportNonlocalLoginPlaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::ExportNonlocalLoginPlacesOutcomeCallable YunjingClient::ExportNonlocalLoginPlacesCallable(const ExportNonlocalLoginPlacesRequest &request)
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

YunjingClient::ExportPrivilegeEventsOutcome YunjingClient::ExportPrivilegeEvents(const ExportPrivilegeEventsRequest &request)
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

void YunjingClient::ExportPrivilegeEventsAsync(const ExportPrivilegeEventsRequest& request, const ExportPrivilegeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportPrivilegeEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::ExportPrivilegeEventsOutcomeCallable YunjingClient::ExportPrivilegeEventsCallable(const ExportPrivilegeEventsRequest &request)
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

YunjingClient::ExportReverseShellEventsOutcome YunjingClient::ExportReverseShellEvents(const ExportReverseShellEventsRequest &request)
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

void YunjingClient::ExportReverseShellEventsAsync(const ExportReverseShellEventsRequest& request, const ExportReverseShellEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportReverseShellEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::ExportReverseShellEventsOutcomeCallable YunjingClient::ExportReverseShellEventsCallable(const ExportReverseShellEventsRequest &request)
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

YunjingClient::IgnoreImpactedHostsOutcome YunjingClient::IgnoreImpactedHosts(const IgnoreImpactedHostsRequest &request)
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

void YunjingClient::IgnoreImpactedHostsAsync(const IgnoreImpactedHostsRequest& request, const IgnoreImpactedHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IgnoreImpactedHosts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::IgnoreImpactedHostsOutcomeCallable YunjingClient::IgnoreImpactedHostsCallable(const IgnoreImpactedHostsRequest &request)
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

YunjingClient::InquiryPriceOpenProVersionPrepaidOutcome YunjingClient::InquiryPriceOpenProVersionPrepaid(const InquiryPriceOpenProVersionPrepaidRequest &request)
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

void YunjingClient::InquiryPriceOpenProVersionPrepaidAsync(const InquiryPriceOpenProVersionPrepaidRequest& request, const InquiryPriceOpenProVersionPrepaidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceOpenProVersionPrepaid(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::InquiryPriceOpenProVersionPrepaidOutcomeCallable YunjingClient::InquiryPriceOpenProVersionPrepaidCallable(const InquiryPriceOpenProVersionPrepaidRequest &request)
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

YunjingClient::MisAlarmNonlocalLoginPlacesOutcome YunjingClient::MisAlarmNonlocalLoginPlaces(const MisAlarmNonlocalLoginPlacesRequest &request)
{
    auto outcome = MakeRequest(request, "MisAlarmNonlocalLoginPlaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MisAlarmNonlocalLoginPlacesResponse rsp = MisAlarmNonlocalLoginPlacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MisAlarmNonlocalLoginPlacesOutcome(rsp);
        else
            return MisAlarmNonlocalLoginPlacesOutcome(o.GetError());
    }
    else
    {
        return MisAlarmNonlocalLoginPlacesOutcome(outcome.GetError());
    }
}

void YunjingClient::MisAlarmNonlocalLoginPlacesAsync(const MisAlarmNonlocalLoginPlacesRequest& request, const MisAlarmNonlocalLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MisAlarmNonlocalLoginPlaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::MisAlarmNonlocalLoginPlacesOutcomeCallable YunjingClient::MisAlarmNonlocalLoginPlacesCallable(const MisAlarmNonlocalLoginPlacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MisAlarmNonlocalLoginPlacesOutcome()>>(
        [this, request]()
        {
            return this->MisAlarmNonlocalLoginPlaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::ModifyAlarmAttributeOutcome YunjingClient::ModifyAlarmAttribute(const ModifyAlarmAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAlarmAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAlarmAttributeResponse rsp = ModifyAlarmAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAlarmAttributeOutcome(rsp);
        else
            return ModifyAlarmAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyAlarmAttributeOutcome(outcome.GetError());
    }
}

void YunjingClient::ModifyAlarmAttributeAsync(const ModifyAlarmAttributeRequest& request, const ModifyAlarmAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAlarmAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::ModifyAlarmAttributeOutcomeCallable YunjingClient::ModifyAlarmAttributeCallable(const ModifyAlarmAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAlarmAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyAlarmAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::ModifyAutoOpenProVersionConfigOutcome YunjingClient::ModifyAutoOpenProVersionConfig(const ModifyAutoOpenProVersionConfigRequest &request)
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

void YunjingClient::ModifyAutoOpenProVersionConfigAsync(const ModifyAutoOpenProVersionConfigRequest& request, const ModifyAutoOpenProVersionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAutoOpenProVersionConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::ModifyAutoOpenProVersionConfigOutcomeCallable YunjingClient::ModifyAutoOpenProVersionConfigCallable(const ModifyAutoOpenProVersionConfigRequest &request)
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

YunjingClient::ModifyLoginWhiteListOutcome YunjingClient::ModifyLoginWhiteList(const ModifyLoginWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoginWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoginWhiteListResponse rsp = ModifyLoginWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoginWhiteListOutcome(rsp);
        else
            return ModifyLoginWhiteListOutcome(o.GetError());
    }
    else
    {
        return ModifyLoginWhiteListOutcome(outcome.GetError());
    }
}

void YunjingClient::ModifyLoginWhiteListAsync(const ModifyLoginWhiteListRequest& request, const ModifyLoginWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLoginWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::ModifyLoginWhiteListOutcomeCallable YunjingClient::ModifyLoginWhiteListCallable(const ModifyLoginWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLoginWhiteListOutcome()>>(
        [this, request]()
        {
            return this->ModifyLoginWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::ModifyProVersionRenewFlagOutcome YunjingClient::ModifyProVersionRenewFlag(const ModifyProVersionRenewFlagRequest &request)
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

void YunjingClient::ModifyProVersionRenewFlagAsync(const ModifyProVersionRenewFlagRequest& request, const ModifyProVersionRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyProVersionRenewFlag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::ModifyProVersionRenewFlagOutcomeCallable YunjingClient::ModifyProVersionRenewFlagCallable(const ModifyProVersionRenewFlagRequest &request)
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

YunjingClient::OpenProVersionOutcome YunjingClient::OpenProVersion(const OpenProVersionRequest &request)
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

void YunjingClient::OpenProVersionAsync(const OpenProVersionRequest& request, const OpenProVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenProVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::OpenProVersionOutcomeCallable YunjingClient::OpenProVersionCallable(const OpenProVersionRequest &request)
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

YunjingClient::OpenProVersionPrepaidOutcome YunjingClient::OpenProVersionPrepaid(const OpenProVersionPrepaidRequest &request)
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

void YunjingClient::OpenProVersionPrepaidAsync(const OpenProVersionPrepaidRequest& request, const OpenProVersionPrepaidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenProVersionPrepaid(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::OpenProVersionPrepaidOutcomeCallable YunjingClient::OpenProVersionPrepaidCallable(const OpenProVersionPrepaidRequest &request)
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

YunjingClient::RecoverMalwaresOutcome YunjingClient::RecoverMalwares(const RecoverMalwaresRequest &request)
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

void YunjingClient::RecoverMalwaresAsync(const RecoverMalwaresRequest& request, const RecoverMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecoverMalwares(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::RecoverMalwaresOutcomeCallable YunjingClient::RecoverMalwaresCallable(const RecoverMalwaresRequest &request)
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

YunjingClient::RenewProVersionOutcome YunjingClient::RenewProVersion(const RenewProVersionRequest &request)
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

void YunjingClient::RenewProVersionAsync(const RenewProVersionRequest& request, const RenewProVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewProVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::RenewProVersionOutcomeCallable YunjingClient::RenewProVersionCallable(const RenewProVersionRequest &request)
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

YunjingClient::RescanImpactedHostOutcome YunjingClient::RescanImpactedHost(const RescanImpactedHostRequest &request)
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

void YunjingClient::RescanImpactedHostAsync(const RescanImpactedHostRequest& request, const RescanImpactedHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RescanImpactedHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::RescanImpactedHostOutcomeCallable YunjingClient::RescanImpactedHostCallable(const RescanImpactedHostRequest &request)
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

YunjingClient::SeparateMalwaresOutcome YunjingClient::SeparateMalwares(const SeparateMalwaresRequest &request)
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

void YunjingClient::SeparateMalwaresAsync(const SeparateMalwaresRequest& request, const SeparateMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SeparateMalwares(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::SeparateMalwaresOutcomeCallable YunjingClient::SeparateMalwaresCallable(const SeparateMalwaresRequest &request)
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

YunjingClient::SetBashEventsStatusOutcome YunjingClient::SetBashEventsStatus(const SetBashEventsStatusRequest &request)
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

void YunjingClient::SetBashEventsStatusAsync(const SetBashEventsStatusRequest& request, const SetBashEventsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetBashEventsStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::SetBashEventsStatusOutcomeCallable YunjingClient::SetBashEventsStatusCallable(const SetBashEventsStatusRequest &request)
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

YunjingClient::SwitchBashRulesOutcome YunjingClient::SwitchBashRules(const SwitchBashRulesRequest &request)
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

void YunjingClient::SwitchBashRulesAsync(const SwitchBashRulesRequest& request, const SwitchBashRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SwitchBashRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::SwitchBashRulesOutcomeCallable YunjingClient::SwitchBashRulesCallable(const SwitchBashRulesRequest &request)
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

YunjingClient::TrustMaliciousRequestOutcome YunjingClient::TrustMaliciousRequest(const TrustMaliciousRequestRequest &request)
{
    auto outcome = MakeRequest(request, "TrustMaliciousRequest");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TrustMaliciousRequestResponse rsp = TrustMaliciousRequestResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TrustMaliciousRequestOutcome(rsp);
        else
            return TrustMaliciousRequestOutcome(o.GetError());
    }
    else
    {
        return TrustMaliciousRequestOutcome(outcome.GetError());
    }
}

void YunjingClient::TrustMaliciousRequestAsync(const TrustMaliciousRequestRequest& request, const TrustMaliciousRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TrustMaliciousRequest(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::TrustMaliciousRequestOutcomeCallable YunjingClient::TrustMaliciousRequestCallable(const TrustMaliciousRequestRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TrustMaliciousRequestOutcome()>>(
        [this, request]()
        {
            return this->TrustMaliciousRequest(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::TrustMalwaresOutcome YunjingClient::TrustMalwares(const TrustMalwaresRequest &request)
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

void YunjingClient::TrustMalwaresAsync(const TrustMalwaresRequest& request, const TrustMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TrustMalwares(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::TrustMalwaresOutcomeCallable YunjingClient::TrustMalwaresCallable(const TrustMalwaresRequest &request)
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

YunjingClient::UntrustMaliciousRequestOutcome YunjingClient::UntrustMaliciousRequest(const UntrustMaliciousRequestRequest &request)
{
    auto outcome = MakeRequest(request, "UntrustMaliciousRequest");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UntrustMaliciousRequestResponse rsp = UntrustMaliciousRequestResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UntrustMaliciousRequestOutcome(rsp);
        else
            return UntrustMaliciousRequestOutcome(o.GetError());
    }
    else
    {
        return UntrustMaliciousRequestOutcome(outcome.GetError());
    }
}

void YunjingClient::UntrustMaliciousRequestAsync(const UntrustMaliciousRequestRequest& request, const UntrustMaliciousRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UntrustMaliciousRequest(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::UntrustMaliciousRequestOutcomeCallable YunjingClient::UntrustMaliciousRequestCallable(const UntrustMaliciousRequestRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UntrustMaliciousRequestOutcome()>>(
        [this, request]()
        {
            return this->UntrustMaliciousRequest(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YunjingClient::UntrustMalwaresOutcome YunjingClient::UntrustMalwares(const UntrustMalwaresRequest &request)
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

void YunjingClient::UntrustMalwaresAsync(const UntrustMalwaresRequest& request, const UntrustMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UntrustMalwares(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YunjingClient::UntrustMalwaresOutcomeCallable YunjingClient::UntrustMalwaresCallable(const UntrustMalwaresRequest &request)
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

