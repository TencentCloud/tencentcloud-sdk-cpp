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

#include <tencentcloud/tat/v20201028/TatClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tat::V20201028;
using namespace TencentCloud::Tat::V20201028::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-10-28";
    const string ENDPOINT = "tat.tencentcloudapi.com";
}

TatClient::TatClient(const Credential &credential, const string &region) :
    TatClient(credential, region, ClientProfile())
{
}

TatClient::TatClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TatClient::CancelInvocationOutcome TatClient::CancelInvocation(const CancelInvocationRequest &request)
{
    auto outcome = MakeRequest(request, "CancelInvocation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelInvocationResponse rsp = CancelInvocationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelInvocationOutcome(rsp);
        else
            return CancelInvocationOutcome(o.GetError());
    }
    else
    {
        return CancelInvocationOutcome(outcome.GetError());
    }
}

void TatClient::CancelInvocationAsync(const CancelInvocationRequest& request, const CancelInvocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelInvocation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TatClient::CancelInvocationOutcomeCallable TatClient::CancelInvocationCallable(const CancelInvocationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelInvocationOutcome()>>(
        [this, request]()
        {
            return this->CancelInvocation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TatClient::CreateCommandOutcome TatClient::CreateCommand(const CreateCommandRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCommand");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCommandResponse rsp = CreateCommandResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCommandOutcome(rsp);
        else
            return CreateCommandOutcome(o.GetError());
    }
    else
    {
        return CreateCommandOutcome(outcome.GetError());
    }
}

void TatClient::CreateCommandAsync(const CreateCommandRequest& request, const CreateCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCommand(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TatClient::CreateCommandOutcomeCallable TatClient::CreateCommandCallable(const CreateCommandRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCommandOutcome()>>(
        [this, request]()
        {
            return this->CreateCommand(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TatClient::CreateInvokerOutcome TatClient::CreateInvoker(const CreateInvokerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInvoker");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInvokerResponse rsp = CreateInvokerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInvokerOutcome(rsp);
        else
            return CreateInvokerOutcome(o.GetError());
    }
    else
    {
        return CreateInvokerOutcome(outcome.GetError());
    }
}

void TatClient::CreateInvokerAsync(const CreateInvokerRequest& request, const CreateInvokerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInvoker(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TatClient::CreateInvokerOutcomeCallable TatClient::CreateInvokerCallable(const CreateInvokerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInvokerOutcome()>>(
        [this, request]()
        {
            return this->CreateInvoker(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TatClient::CreateRegisterCodeOutcome TatClient::CreateRegisterCode(const CreateRegisterCodeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRegisterCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRegisterCodeResponse rsp = CreateRegisterCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRegisterCodeOutcome(rsp);
        else
            return CreateRegisterCodeOutcome(o.GetError());
    }
    else
    {
        return CreateRegisterCodeOutcome(outcome.GetError());
    }
}

void TatClient::CreateRegisterCodeAsync(const CreateRegisterCodeRequest& request, const CreateRegisterCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRegisterCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TatClient::CreateRegisterCodeOutcomeCallable TatClient::CreateRegisterCodeCallable(const CreateRegisterCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRegisterCodeOutcome()>>(
        [this, request]()
        {
            return this->CreateRegisterCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TatClient::DeleteCommandOutcome TatClient::DeleteCommand(const DeleteCommandRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCommand");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCommandResponse rsp = DeleteCommandResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCommandOutcome(rsp);
        else
            return DeleteCommandOutcome(o.GetError());
    }
    else
    {
        return DeleteCommandOutcome(outcome.GetError());
    }
}

void TatClient::DeleteCommandAsync(const DeleteCommandRequest& request, const DeleteCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCommand(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TatClient::DeleteCommandOutcomeCallable TatClient::DeleteCommandCallable(const DeleteCommandRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCommandOutcome()>>(
        [this, request]()
        {
            return this->DeleteCommand(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TatClient::DeleteCommandsOutcome TatClient::DeleteCommands(const DeleteCommandsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCommands");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCommandsResponse rsp = DeleteCommandsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCommandsOutcome(rsp);
        else
            return DeleteCommandsOutcome(o.GetError());
    }
    else
    {
        return DeleteCommandsOutcome(outcome.GetError());
    }
}

void TatClient::DeleteCommandsAsync(const DeleteCommandsRequest& request, const DeleteCommandsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCommands(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TatClient::DeleteCommandsOutcomeCallable TatClient::DeleteCommandsCallable(const DeleteCommandsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCommandsOutcome()>>(
        [this, request]()
        {
            return this->DeleteCommands(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TatClient::DeleteInvokerOutcome TatClient::DeleteInvoker(const DeleteInvokerRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInvoker");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInvokerResponse rsp = DeleteInvokerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInvokerOutcome(rsp);
        else
            return DeleteInvokerOutcome(o.GetError());
    }
    else
    {
        return DeleteInvokerOutcome(outcome.GetError());
    }
}

void TatClient::DeleteInvokerAsync(const DeleteInvokerRequest& request, const DeleteInvokerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteInvoker(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TatClient::DeleteInvokerOutcomeCallable TatClient::DeleteInvokerCallable(const DeleteInvokerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteInvokerOutcome()>>(
        [this, request]()
        {
            return this->DeleteInvoker(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TatClient::DeleteRegisterCodesOutcome TatClient::DeleteRegisterCodes(const DeleteRegisterCodesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRegisterCodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRegisterCodesResponse rsp = DeleteRegisterCodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRegisterCodesOutcome(rsp);
        else
            return DeleteRegisterCodesOutcome(o.GetError());
    }
    else
    {
        return DeleteRegisterCodesOutcome(outcome.GetError());
    }
}

void TatClient::DeleteRegisterCodesAsync(const DeleteRegisterCodesRequest& request, const DeleteRegisterCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRegisterCodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TatClient::DeleteRegisterCodesOutcomeCallable TatClient::DeleteRegisterCodesCallable(const DeleteRegisterCodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRegisterCodesOutcome()>>(
        [this, request]()
        {
            return this->DeleteRegisterCodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TatClient::DeleteRegisterInstanceOutcome TatClient::DeleteRegisterInstance(const DeleteRegisterInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRegisterInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRegisterInstanceResponse rsp = DeleteRegisterInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRegisterInstanceOutcome(rsp);
        else
            return DeleteRegisterInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteRegisterInstanceOutcome(outcome.GetError());
    }
}

void TatClient::DeleteRegisterInstanceAsync(const DeleteRegisterInstanceRequest& request, const DeleteRegisterInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRegisterInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TatClient::DeleteRegisterInstanceOutcomeCallable TatClient::DeleteRegisterInstanceCallable(const DeleteRegisterInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRegisterInstanceOutcome()>>(
        [this, request]()
        {
            return this->DeleteRegisterInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TatClient::DescribeAutomationAgentStatusOutcome TatClient::DescribeAutomationAgentStatus(const DescribeAutomationAgentStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutomationAgentStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutomationAgentStatusResponse rsp = DescribeAutomationAgentStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutomationAgentStatusOutcome(rsp);
        else
            return DescribeAutomationAgentStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeAutomationAgentStatusOutcome(outcome.GetError());
    }
}

void TatClient::DescribeAutomationAgentStatusAsync(const DescribeAutomationAgentStatusRequest& request, const DescribeAutomationAgentStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAutomationAgentStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TatClient::DescribeAutomationAgentStatusOutcomeCallable TatClient::DescribeAutomationAgentStatusCallable(const DescribeAutomationAgentStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAutomationAgentStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeAutomationAgentStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TatClient::DescribeCommandsOutcome TatClient::DescribeCommands(const DescribeCommandsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCommands");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCommandsResponse rsp = DescribeCommandsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCommandsOutcome(rsp);
        else
            return DescribeCommandsOutcome(o.GetError());
    }
    else
    {
        return DescribeCommandsOutcome(outcome.GetError());
    }
}

void TatClient::DescribeCommandsAsync(const DescribeCommandsRequest& request, const DescribeCommandsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCommands(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TatClient::DescribeCommandsOutcomeCallable TatClient::DescribeCommandsCallable(const DescribeCommandsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCommandsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCommands(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TatClient::DescribeInvocationTasksOutcome TatClient::DescribeInvocationTasks(const DescribeInvocationTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInvocationTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInvocationTasksResponse rsp = DescribeInvocationTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInvocationTasksOutcome(rsp);
        else
            return DescribeInvocationTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeInvocationTasksOutcome(outcome.GetError());
    }
}

void TatClient::DescribeInvocationTasksAsync(const DescribeInvocationTasksRequest& request, const DescribeInvocationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInvocationTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TatClient::DescribeInvocationTasksOutcomeCallable TatClient::DescribeInvocationTasksCallable(const DescribeInvocationTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInvocationTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeInvocationTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TatClient::DescribeInvocationsOutcome TatClient::DescribeInvocations(const DescribeInvocationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInvocations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInvocationsResponse rsp = DescribeInvocationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInvocationsOutcome(rsp);
        else
            return DescribeInvocationsOutcome(o.GetError());
    }
    else
    {
        return DescribeInvocationsOutcome(outcome.GetError());
    }
}

void TatClient::DescribeInvocationsAsync(const DescribeInvocationsRequest& request, const DescribeInvocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInvocations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TatClient::DescribeInvocationsOutcomeCallable TatClient::DescribeInvocationsCallable(const DescribeInvocationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInvocationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInvocations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TatClient::DescribeInvokerRecordsOutcome TatClient::DescribeInvokerRecords(const DescribeInvokerRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInvokerRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInvokerRecordsResponse rsp = DescribeInvokerRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInvokerRecordsOutcome(rsp);
        else
            return DescribeInvokerRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeInvokerRecordsOutcome(outcome.GetError());
    }
}

void TatClient::DescribeInvokerRecordsAsync(const DescribeInvokerRecordsRequest& request, const DescribeInvokerRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInvokerRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TatClient::DescribeInvokerRecordsOutcomeCallable TatClient::DescribeInvokerRecordsCallable(const DescribeInvokerRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInvokerRecordsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInvokerRecords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TatClient::DescribeInvokersOutcome TatClient::DescribeInvokers(const DescribeInvokersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInvokers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInvokersResponse rsp = DescribeInvokersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInvokersOutcome(rsp);
        else
            return DescribeInvokersOutcome(o.GetError());
    }
    else
    {
        return DescribeInvokersOutcome(outcome.GetError());
    }
}

void TatClient::DescribeInvokersAsync(const DescribeInvokersRequest& request, const DescribeInvokersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInvokers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TatClient::DescribeInvokersOutcomeCallable TatClient::DescribeInvokersCallable(const DescribeInvokersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInvokersOutcome()>>(
        [this, request]()
        {
            return this->DescribeInvokers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TatClient::DescribeQuotasOutcome TatClient::DescribeQuotas(const DescribeQuotasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQuotas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQuotasResponse rsp = DescribeQuotasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQuotasOutcome(rsp);
        else
            return DescribeQuotasOutcome(o.GetError());
    }
    else
    {
        return DescribeQuotasOutcome(outcome.GetError());
    }
}

void TatClient::DescribeQuotasAsync(const DescribeQuotasRequest& request, const DescribeQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeQuotas(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TatClient::DescribeQuotasOutcomeCallable TatClient::DescribeQuotasCallable(const DescribeQuotasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeQuotasOutcome()>>(
        [this, request]()
        {
            return this->DescribeQuotas(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TatClient::DescribeRegionsOutcome TatClient::DescribeRegions(const DescribeRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegionsResponse rsp = DescribeRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegionsOutcome(rsp);
        else
            return DescribeRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeRegionsOutcome(outcome.GetError());
    }
}

void TatClient::DescribeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TatClient::DescribeRegionsOutcomeCallable TatClient::DescribeRegionsCallable(const DescribeRegionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRegions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TatClient::DescribeRegisterCodesOutcome TatClient::DescribeRegisterCodes(const DescribeRegisterCodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegisterCodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegisterCodesResponse rsp = DescribeRegisterCodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegisterCodesOutcome(rsp);
        else
            return DescribeRegisterCodesOutcome(o.GetError());
    }
    else
    {
        return DescribeRegisterCodesOutcome(outcome.GetError());
    }
}

void TatClient::DescribeRegisterCodesAsync(const DescribeRegisterCodesRequest& request, const DescribeRegisterCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRegisterCodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TatClient::DescribeRegisterCodesOutcomeCallable TatClient::DescribeRegisterCodesCallable(const DescribeRegisterCodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRegisterCodesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRegisterCodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TatClient::DescribeRegisterInstancesOutcome TatClient::DescribeRegisterInstances(const DescribeRegisterInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegisterInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegisterInstancesResponse rsp = DescribeRegisterInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegisterInstancesOutcome(rsp);
        else
            return DescribeRegisterInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeRegisterInstancesOutcome(outcome.GetError());
    }
}

void TatClient::DescribeRegisterInstancesAsync(const DescribeRegisterInstancesRequest& request, const DescribeRegisterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRegisterInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TatClient::DescribeRegisterInstancesOutcomeCallable TatClient::DescribeRegisterInstancesCallable(const DescribeRegisterInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRegisterInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRegisterInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TatClient::DescribeScenesOutcome TatClient::DescribeScenes(const DescribeScenesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScenes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScenesResponse rsp = DescribeScenesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScenesOutcome(rsp);
        else
            return DescribeScenesOutcome(o.GetError());
    }
    else
    {
        return DescribeScenesOutcome(outcome.GetError());
    }
}

void TatClient::DescribeScenesAsync(const DescribeScenesRequest& request, const DescribeScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScenes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TatClient::DescribeScenesOutcomeCallable TatClient::DescribeScenesCallable(const DescribeScenesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScenesOutcome()>>(
        [this, request]()
        {
            return this->DescribeScenes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TatClient::DisableInvokerOutcome TatClient::DisableInvoker(const DisableInvokerRequest &request)
{
    auto outcome = MakeRequest(request, "DisableInvoker");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableInvokerResponse rsp = DisableInvokerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableInvokerOutcome(rsp);
        else
            return DisableInvokerOutcome(o.GetError());
    }
    else
    {
        return DisableInvokerOutcome(outcome.GetError());
    }
}

void TatClient::DisableInvokerAsync(const DisableInvokerRequest& request, const DisableInvokerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableInvoker(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TatClient::DisableInvokerOutcomeCallable TatClient::DisableInvokerCallable(const DisableInvokerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableInvokerOutcome()>>(
        [this, request]()
        {
            return this->DisableInvoker(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TatClient::DisableRegisterCodesOutcome TatClient::DisableRegisterCodes(const DisableRegisterCodesRequest &request)
{
    auto outcome = MakeRequest(request, "DisableRegisterCodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableRegisterCodesResponse rsp = DisableRegisterCodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableRegisterCodesOutcome(rsp);
        else
            return DisableRegisterCodesOutcome(o.GetError());
    }
    else
    {
        return DisableRegisterCodesOutcome(outcome.GetError());
    }
}

void TatClient::DisableRegisterCodesAsync(const DisableRegisterCodesRequest& request, const DisableRegisterCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableRegisterCodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TatClient::DisableRegisterCodesOutcomeCallable TatClient::DisableRegisterCodesCallable(const DisableRegisterCodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableRegisterCodesOutcome()>>(
        [this, request]()
        {
            return this->DisableRegisterCodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TatClient::EnableInvokerOutcome TatClient::EnableInvoker(const EnableInvokerRequest &request)
{
    auto outcome = MakeRequest(request, "EnableInvoker");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableInvokerResponse rsp = EnableInvokerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableInvokerOutcome(rsp);
        else
            return EnableInvokerOutcome(o.GetError());
    }
    else
    {
        return EnableInvokerOutcome(outcome.GetError());
    }
}

void TatClient::EnableInvokerAsync(const EnableInvokerRequest& request, const EnableInvokerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableInvoker(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TatClient::EnableInvokerOutcomeCallable TatClient::EnableInvokerCallable(const EnableInvokerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableInvokerOutcome()>>(
        [this, request]()
        {
            return this->EnableInvoker(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TatClient::InvokeCommandOutcome TatClient::InvokeCommand(const InvokeCommandRequest &request)
{
    auto outcome = MakeRequest(request, "InvokeCommand");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InvokeCommandResponse rsp = InvokeCommandResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InvokeCommandOutcome(rsp);
        else
            return InvokeCommandOutcome(o.GetError());
    }
    else
    {
        return InvokeCommandOutcome(outcome.GetError());
    }
}

void TatClient::InvokeCommandAsync(const InvokeCommandRequest& request, const InvokeCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InvokeCommand(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TatClient::InvokeCommandOutcomeCallable TatClient::InvokeCommandCallable(const InvokeCommandRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InvokeCommandOutcome()>>(
        [this, request]()
        {
            return this->InvokeCommand(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TatClient::ModifyCommandOutcome TatClient::ModifyCommand(const ModifyCommandRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCommand");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCommandResponse rsp = ModifyCommandResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCommandOutcome(rsp);
        else
            return ModifyCommandOutcome(o.GetError());
    }
    else
    {
        return ModifyCommandOutcome(outcome.GetError());
    }
}

void TatClient::ModifyCommandAsync(const ModifyCommandRequest& request, const ModifyCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCommand(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TatClient::ModifyCommandOutcomeCallable TatClient::ModifyCommandCallable(const ModifyCommandRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCommandOutcome()>>(
        [this, request]()
        {
            return this->ModifyCommand(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TatClient::ModifyInvokerOutcome TatClient::ModifyInvoker(const ModifyInvokerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInvoker");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInvokerResponse rsp = ModifyInvokerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInvokerOutcome(rsp);
        else
            return ModifyInvokerOutcome(o.GetError());
    }
    else
    {
        return ModifyInvokerOutcome(outcome.GetError());
    }
}

void TatClient::ModifyInvokerAsync(const ModifyInvokerRequest& request, const ModifyInvokerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInvoker(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TatClient::ModifyInvokerOutcomeCallable TatClient::ModifyInvokerCallable(const ModifyInvokerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInvokerOutcome()>>(
        [this, request]()
        {
            return this->ModifyInvoker(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TatClient::ModifyRegisterInstanceOutcome TatClient::ModifyRegisterInstance(const ModifyRegisterInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRegisterInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRegisterInstanceResponse rsp = ModifyRegisterInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRegisterInstanceOutcome(rsp);
        else
            return ModifyRegisterInstanceOutcome(o.GetError());
    }
    else
    {
        return ModifyRegisterInstanceOutcome(outcome.GetError());
    }
}

void TatClient::ModifyRegisterInstanceAsync(const ModifyRegisterInstanceRequest& request, const ModifyRegisterInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRegisterInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TatClient::ModifyRegisterInstanceOutcomeCallable TatClient::ModifyRegisterInstanceCallable(const ModifyRegisterInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRegisterInstanceOutcome()>>(
        [this, request]()
        {
            return this->ModifyRegisterInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TatClient::PreviewReplacedCommandContentOutcome TatClient::PreviewReplacedCommandContent(const PreviewReplacedCommandContentRequest &request)
{
    auto outcome = MakeRequest(request, "PreviewReplacedCommandContent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PreviewReplacedCommandContentResponse rsp = PreviewReplacedCommandContentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PreviewReplacedCommandContentOutcome(rsp);
        else
            return PreviewReplacedCommandContentOutcome(o.GetError());
    }
    else
    {
        return PreviewReplacedCommandContentOutcome(outcome.GetError());
    }
}

void TatClient::PreviewReplacedCommandContentAsync(const PreviewReplacedCommandContentRequest& request, const PreviewReplacedCommandContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PreviewReplacedCommandContent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TatClient::PreviewReplacedCommandContentOutcomeCallable TatClient::PreviewReplacedCommandContentCallable(const PreviewReplacedCommandContentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PreviewReplacedCommandContentOutcome()>>(
        [this, request]()
        {
            return this->PreviewReplacedCommandContent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TatClient::RunCommandOutcome TatClient::RunCommand(const RunCommandRequest &request)
{
    auto outcome = MakeRequest(request, "RunCommand");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunCommandResponse rsp = RunCommandResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunCommandOutcome(rsp);
        else
            return RunCommandOutcome(o.GetError());
    }
    else
    {
        return RunCommandOutcome(outcome.GetError());
    }
}

void TatClient::RunCommandAsync(const RunCommandRequest& request, const RunCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunCommand(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TatClient::RunCommandOutcomeCallable TatClient::RunCommandCallable(const RunCommandRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunCommandOutcome()>>(
        [this, request]()
        {
            return this->RunCommand(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

