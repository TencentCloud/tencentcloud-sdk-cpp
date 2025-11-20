/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
    using Req = const CancelInvocationRequest&;
    using Resp = CancelInvocationResponse;

    DoRequestAsync<Req, Resp>(
        "CancelInvocation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TatClient::CancelInvocationOutcomeCallable TatClient::CancelInvocationCallable(const CancelInvocationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelInvocationOutcome>>();
    CancelInvocationAsync(
    request,
    [prom](
        const TatClient*,
        const CancelInvocationRequest&,
        CancelInvocationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateCommandRequest&;
    using Resp = CreateCommandResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCommand", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TatClient::CreateCommandOutcomeCallable TatClient::CreateCommandCallable(const CreateCommandRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCommandOutcome>>();
    CreateCommandAsync(
    request,
    [prom](
        const TatClient*,
        const CreateCommandRequest&,
        CreateCommandOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateInvokerRequest&;
    using Resp = CreateInvokerResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInvoker", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TatClient::CreateInvokerOutcomeCallable TatClient::CreateInvokerCallable(const CreateInvokerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInvokerOutcome>>();
    CreateInvokerAsync(
    request,
    [prom](
        const TatClient*,
        const CreateInvokerRequest&,
        CreateInvokerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateRegisterCodeRequest&;
    using Resp = CreateRegisterCodeResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRegisterCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TatClient::CreateRegisterCodeOutcomeCallable TatClient::CreateRegisterCodeCallable(const CreateRegisterCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRegisterCodeOutcome>>();
    CreateRegisterCodeAsync(
    request,
    [prom](
        const TatClient*,
        const CreateRegisterCodeRequest&,
        CreateRegisterCodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteCommandRequest&;
    using Resp = DeleteCommandResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCommand", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TatClient::DeleteCommandOutcomeCallable TatClient::DeleteCommandCallable(const DeleteCommandRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCommandOutcome>>();
    DeleteCommandAsync(
    request,
    [prom](
        const TatClient*,
        const DeleteCommandRequest&,
        DeleteCommandOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteCommandsRequest&;
    using Resp = DeleteCommandsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCommands", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TatClient::DeleteCommandsOutcomeCallable TatClient::DeleteCommandsCallable(const DeleteCommandsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCommandsOutcome>>();
    DeleteCommandsAsync(
    request,
    [prom](
        const TatClient*,
        const DeleteCommandsRequest&,
        DeleteCommandsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteInvokerRequest&;
    using Resp = DeleteInvokerResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteInvoker", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TatClient::DeleteInvokerOutcomeCallable TatClient::DeleteInvokerCallable(const DeleteInvokerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteInvokerOutcome>>();
    DeleteInvokerAsync(
    request,
    [prom](
        const TatClient*,
        const DeleteInvokerRequest&,
        DeleteInvokerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteRegisterCodesRequest&;
    using Resp = DeleteRegisterCodesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRegisterCodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TatClient::DeleteRegisterCodesOutcomeCallable TatClient::DeleteRegisterCodesCallable(const DeleteRegisterCodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRegisterCodesOutcome>>();
    DeleteRegisterCodesAsync(
    request,
    [prom](
        const TatClient*,
        const DeleteRegisterCodesRequest&,
        DeleteRegisterCodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteRegisterInstanceRequest&;
    using Resp = DeleteRegisterInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRegisterInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TatClient::DeleteRegisterInstanceOutcomeCallable TatClient::DeleteRegisterInstanceCallable(const DeleteRegisterInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRegisterInstanceOutcome>>();
    DeleteRegisterInstanceAsync(
    request,
    [prom](
        const TatClient*,
        const DeleteRegisterInstanceRequest&,
        DeleteRegisterInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAutomationAgentStatusRequest&;
    using Resp = DescribeAutomationAgentStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAutomationAgentStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TatClient::DescribeAutomationAgentStatusOutcomeCallable TatClient::DescribeAutomationAgentStatusCallable(const DescribeAutomationAgentStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAutomationAgentStatusOutcome>>();
    DescribeAutomationAgentStatusAsync(
    request,
    [prom](
        const TatClient*,
        const DescribeAutomationAgentStatusRequest&,
        DescribeAutomationAgentStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCommandsRequest&;
    using Resp = DescribeCommandsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCommands", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TatClient::DescribeCommandsOutcomeCallable TatClient::DescribeCommandsCallable(const DescribeCommandsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCommandsOutcome>>();
    DescribeCommandsAsync(
    request,
    [prom](
        const TatClient*,
        const DescribeCommandsRequest&,
        DescribeCommandsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeInvocationTasksRequest&;
    using Resp = DescribeInvocationTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInvocationTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TatClient::DescribeInvocationTasksOutcomeCallable TatClient::DescribeInvocationTasksCallable(const DescribeInvocationTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInvocationTasksOutcome>>();
    DescribeInvocationTasksAsync(
    request,
    [prom](
        const TatClient*,
        const DescribeInvocationTasksRequest&,
        DescribeInvocationTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeInvocationsRequest&;
    using Resp = DescribeInvocationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInvocations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TatClient::DescribeInvocationsOutcomeCallable TatClient::DescribeInvocationsCallable(const DescribeInvocationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInvocationsOutcome>>();
    DescribeInvocationsAsync(
    request,
    [prom](
        const TatClient*,
        const DescribeInvocationsRequest&,
        DescribeInvocationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeInvokerRecordsRequest&;
    using Resp = DescribeInvokerRecordsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInvokerRecords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TatClient::DescribeInvokerRecordsOutcomeCallable TatClient::DescribeInvokerRecordsCallable(const DescribeInvokerRecordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInvokerRecordsOutcome>>();
    DescribeInvokerRecordsAsync(
    request,
    [prom](
        const TatClient*,
        const DescribeInvokerRecordsRequest&,
        DescribeInvokerRecordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeInvokersRequest&;
    using Resp = DescribeInvokersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInvokers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TatClient::DescribeInvokersOutcomeCallable TatClient::DescribeInvokersCallable(const DescribeInvokersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInvokersOutcome>>();
    DescribeInvokersAsync(
    request,
    [prom](
        const TatClient*,
        const DescribeInvokersRequest&,
        DescribeInvokersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeQuotasRequest&;
    using Resp = DescribeQuotasResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeQuotas", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TatClient::DescribeQuotasOutcomeCallable TatClient::DescribeQuotasCallable(const DescribeQuotasRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeQuotasOutcome>>();
    DescribeQuotasAsync(
    request,
    [prom](
        const TatClient*,
        const DescribeQuotasRequest&,
        DescribeQuotasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRegionsRequest&;
    using Resp = DescribeRegionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRegions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TatClient::DescribeRegionsOutcomeCallable TatClient::DescribeRegionsCallable(const DescribeRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRegionsOutcome>>();
    DescribeRegionsAsync(
    request,
    [prom](
        const TatClient*,
        const DescribeRegionsRequest&,
        DescribeRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRegisterCodesRequest&;
    using Resp = DescribeRegisterCodesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRegisterCodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TatClient::DescribeRegisterCodesOutcomeCallable TatClient::DescribeRegisterCodesCallable(const DescribeRegisterCodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRegisterCodesOutcome>>();
    DescribeRegisterCodesAsync(
    request,
    [prom](
        const TatClient*,
        const DescribeRegisterCodesRequest&,
        DescribeRegisterCodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRegisterInstancesRequest&;
    using Resp = DescribeRegisterInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRegisterInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TatClient::DescribeRegisterInstancesOutcomeCallable TatClient::DescribeRegisterInstancesCallable(const DescribeRegisterInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRegisterInstancesOutcome>>();
    DescribeRegisterInstancesAsync(
    request,
    [prom](
        const TatClient*,
        const DescribeRegisterInstancesRequest&,
        DescribeRegisterInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeScenesRequest&;
    using Resp = DescribeScenesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScenes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TatClient::DescribeScenesOutcomeCallable TatClient::DescribeScenesCallable(const DescribeScenesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScenesOutcome>>();
    DescribeScenesAsync(
    request,
    [prom](
        const TatClient*,
        const DescribeScenesRequest&,
        DescribeScenesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DisableInvokerRequest&;
    using Resp = DisableInvokerResponse;

    DoRequestAsync<Req, Resp>(
        "DisableInvoker", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TatClient::DisableInvokerOutcomeCallable TatClient::DisableInvokerCallable(const DisableInvokerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableInvokerOutcome>>();
    DisableInvokerAsync(
    request,
    [prom](
        const TatClient*,
        const DisableInvokerRequest&,
        DisableInvokerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DisableRegisterCodesRequest&;
    using Resp = DisableRegisterCodesResponse;

    DoRequestAsync<Req, Resp>(
        "DisableRegisterCodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TatClient::DisableRegisterCodesOutcomeCallable TatClient::DisableRegisterCodesCallable(const DisableRegisterCodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableRegisterCodesOutcome>>();
    DisableRegisterCodesAsync(
    request,
    [prom](
        const TatClient*,
        const DisableRegisterCodesRequest&,
        DisableRegisterCodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const EnableInvokerRequest&;
    using Resp = EnableInvokerResponse;

    DoRequestAsync<Req, Resp>(
        "EnableInvoker", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TatClient::EnableInvokerOutcomeCallable TatClient::EnableInvokerCallable(const EnableInvokerRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableInvokerOutcome>>();
    EnableInvokerAsync(
    request,
    [prom](
        const TatClient*,
        const EnableInvokerRequest&,
        EnableInvokerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const InvokeCommandRequest&;
    using Resp = InvokeCommandResponse;

    DoRequestAsync<Req, Resp>(
        "InvokeCommand", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TatClient::InvokeCommandOutcomeCallable TatClient::InvokeCommandCallable(const InvokeCommandRequest &request)
{
    const auto prom = std::make_shared<std::promise<InvokeCommandOutcome>>();
    InvokeCommandAsync(
    request,
    [prom](
        const TatClient*,
        const InvokeCommandRequest&,
        InvokeCommandOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyCommandRequest&;
    using Resp = ModifyCommandResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCommand", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TatClient::ModifyCommandOutcomeCallable TatClient::ModifyCommandCallable(const ModifyCommandRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCommandOutcome>>();
    ModifyCommandAsync(
    request,
    [prom](
        const TatClient*,
        const ModifyCommandRequest&,
        ModifyCommandOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyInvokerRequest&;
    using Resp = ModifyInvokerResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInvoker", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TatClient::ModifyInvokerOutcomeCallable TatClient::ModifyInvokerCallable(const ModifyInvokerRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInvokerOutcome>>();
    ModifyInvokerAsync(
    request,
    [prom](
        const TatClient*,
        const ModifyInvokerRequest&,
        ModifyInvokerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyRegisterInstanceRequest&;
    using Resp = ModifyRegisterInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRegisterInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TatClient::ModifyRegisterInstanceOutcomeCallable TatClient::ModifyRegisterInstanceCallable(const ModifyRegisterInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRegisterInstanceOutcome>>();
    ModifyRegisterInstanceAsync(
    request,
    [prom](
        const TatClient*,
        const ModifyRegisterInstanceRequest&,
        ModifyRegisterInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const PreviewReplacedCommandContentRequest&;
    using Resp = PreviewReplacedCommandContentResponse;

    DoRequestAsync<Req, Resp>(
        "PreviewReplacedCommandContent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TatClient::PreviewReplacedCommandContentOutcomeCallable TatClient::PreviewReplacedCommandContentCallable(const PreviewReplacedCommandContentRequest &request)
{
    const auto prom = std::make_shared<std::promise<PreviewReplacedCommandContentOutcome>>();
    PreviewReplacedCommandContentAsync(
    request,
    [prom](
        const TatClient*,
        const PreviewReplacedCommandContentRequest&,
        PreviewReplacedCommandContentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RunCommandRequest&;
    using Resp = RunCommandResponse;

    DoRequestAsync<Req, Resp>(
        "RunCommand", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TatClient::RunCommandOutcomeCallable TatClient::RunCommandCallable(const RunCommandRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunCommandOutcome>>();
    RunCommandAsync(
    request,
    [prom](
        const TatClient*,
        const RunCommandRequest&,
        RunCommandOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

