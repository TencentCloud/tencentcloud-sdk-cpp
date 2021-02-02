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

