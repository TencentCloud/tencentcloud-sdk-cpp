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

#include <tencentcloud/monitor/v20230616/MonitorClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Monitor::V20230616;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-06-16";
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


MonitorClient::CancelAIWorkbenchChatOutcome MonitorClient::CancelAIWorkbenchChat(const CancelAIWorkbenchChatRequest &request)
{
    auto outcome = MakeRequest(request, "CancelAIWorkbenchChat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelAIWorkbenchChatResponse rsp = CancelAIWorkbenchChatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelAIWorkbenchChatOutcome(rsp);
        else
            return CancelAIWorkbenchChatOutcome(o.GetError());
    }
    else
    {
        return CancelAIWorkbenchChatOutcome(outcome.GetError());
    }
}

void MonitorClient::CancelAIWorkbenchChatAsync(const CancelAIWorkbenchChatRequest& request, const CancelAIWorkbenchChatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelAIWorkbenchChatRequest&;
    using Resp = CancelAIWorkbenchChatResponse;

    DoRequestAsync<Req, Resp>(
        "CancelAIWorkbenchChat", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::CancelAIWorkbenchChatOutcomeCallable MonitorClient::CancelAIWorkbenchChatCallable(const CancelAIWorkbenchChatRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelAIWorkbenchChatOutcome>>();
    CancelAIWorkbenchChatAsync(
    request,
    [prom](
        const MonitorClient*,
        const CancelAIWorkbenchChatRequest&,
        CancelAIWorkbenchChatOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::CreateAIWorkbenchAgentOutcome MonitorClient::CreateAIWorkbenchAgent(const CreateAIWorkbenchAgentRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAIWorkbenchAgent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAIWorkbenchAgentResponse rsp = CreateAIWorkbenchAgentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAIWorkbenchAgentOutcome(rsp);
        else
            return CreateAIWorkbenchAgentOutcome(o.GetError());
    }
    else
    {
        return CreateAIWorkbenchAgentOutcome(outcome.GetError());
    }
}

void MonitorClient::CreateAIWorkbenchAgentAsync(const CreateAIWorkbenchAgentRequest& request, const CreateAIWorkbenchAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAIWorkbenchAgentRequest&;
    using Resp = CreateAIWorkbenchAgentResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAIWorkbenchAgent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::CreateAIWorkbenchAgentOutcomeCallable MonitorClient::CreateAIWorkbenchAgentCallable(const CreateAIWorkbenchAgentRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAIWorkbenchAgentOutcome>>();
    CreateAIWorkbenchAgentAsync(
    request,
    [prom](
        const MonitorClient*,
        const CreateAIWorkbenchAgentRequest&,
        CreateAIWorkbenchAgentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::CreateAIWorkbenchTaskOutcome MonitorClient::CreateAIWorkbenchTask(const CreateAIWorkbenchTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAIWorkbenchTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAIWorkbenchTaskResponse rsp = CreateAIWorkbenchTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAIWorkbenchTaskOutcome(rsp);
        else
            return CreateAIWorkbenchTaskOutcome(o.GetError());
    }
    else
    {
        return CreateAIWorkbenchTaskOutcome(outcome.GetError());
    }
}

void MonitorClient::CreateAIWorkbenchTaskAsync(const CreateAIWorkbenchTaskRequest& request, const CreateAIWorkbenchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAIWorkbenchTaskRequest&;
    using Resp = CreateAIWorkbenchTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAIWorkbenchTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::CreateAIWorkbenchTaskOutcomeCallable MonitorClient::CreateAIWorkbenchTaskCallable(const CreateAIWorkbenchTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAIWorkbenchTaskOutcome>>();
    CreateAIWorkbenchTaskAsync(
    request,
    [prom](
        const MonitorClient*,
        const CreateAIWorkbenchTaskRequest&,
        CreateAIWorkbenchTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::CreateDispenseExternalRuleOutcome MonitorClient::CreateDispenseExternalRule(const CreateDispenseExternalRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDispenseExternalRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDispenseExternalRuleResponse rsp = CreateDispenseExternalRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDispenseExternalRuleOutcome(rsp);
        else
            return CreateDispenseExternalRuleOutcome(o.GetError());
    }
    else
    {
        return CreateDispenseExternalRuleOutcome(outcome.GetError());
    }
}

void MonitorClient::CreateDispenseExternalRuleAsync(const CreateDispenseExternalRuleRequest& request, const CreateDispenseExternalRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDispenseExternalRuleRequest&;
    using Resp = CreateDispenseExternalRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDispenseExternalRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::CreateDispenseExternalRuleOutcomeCallable MonitorClient::CreateDispenseExternalRuleCallable(const CreateDispenseExternalRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDispenseExternalRuleOutcome>>();
    CreateDispenseExternalRuleAsync(
    request,
    [prom](
        const MonitorClient*,
        const CreateDispenseExternalRuleRequest&,
        CreateDispenseExternalRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::CreateNoticeContentTmplOutcome MonitorClient::CreateNoticeContentTmpl(const CreateNoticeContentTmplRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNoticeContentTmpl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNoticeContentTmplResponse rsp = CreateNoticeContentTmplResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNoticeContentTmplOutcome(rsp);
        else
            return CreateNoticeContentTmplOutcome(o.GetError());
    }
    else
    {
        return CreateNoticeContentTmplOutcome(outcome.GetError());
    }
}

void MonitorClient::CreateNoticeContentTmplAsync(const CreateNoticeContentTmplRequest& request, const CreateNoticeContentTmplAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNoticeContentTmplRequest&;
    using Resp = CreateNoticeContentTmplResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNoticeContentTmpl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::CreateNoticeContentTmplOutcomeCallable MonitorClient::CreateNoticeContentTmplCallable(const CreateNoticeContentTmplRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNoticeContentTmplOutcome>>();
    CreateNoticeContentTmplAsync(
    request,
    [prom](
        const MonitorClient*,
        const CreateNoticeContentTmplRequest&,
        CreateNoticeContentTmplOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DeleteAIWorkbenchAgentOutcome MonitorClient::DeleteAIWorkbenchAgent(const DeleteAIWorkbenchAgentRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAIWorkbenchAgent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAIWorkbenchAgentResponse rsp = DeleteAIWorkbenchAgentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAIWorkbenchAgentOutcome(rsp);
        else
            return DeleteAIWorkbenchAgentOutcome(o.GetError());
    }
    else
    {
        return DeleteAIWorkbenchAgentOutcome(outcome.GetError());
    }
}

void MonitorClient::DeleteAIWorkbenchAgentAsync(const DeleteAIWorkbenchAgentRequest& request, const DeleteAIWorkbenchAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAIWorkbenchAgentRequest&;
    using Resp = DeleteAIWorkbenchAgentResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAIWorkbenchAgent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DeleteAIWorkbenchAgentOutcomeCallable MonitorClient::DeleteAIWorkbenchAgentCallable(const DeleteAIWorkbenchAgentRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAIWorkbenchAgentOutcome>>();
    DeleteAIWorkbenchAgentAsync(
    request,
    [prom](
        const MonitorClient*,
        const DeleteAIWorkbenchAgentRequest&,
        DeleteAIWorkbenchAgentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DeleteAIWorkbenchTaskOutcome MonitorClient::DeleteAIWorkbenchTask(const DeleteAIWorkbenchTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAIWorkbenchTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAIWorkbenchTaskResponse rsp = DeleteAIWorkbenchTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAIWorkbenchTaskOutcome(rsp);
        else
            return DeleteAIWorkbenchTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteAIWorkbenchTaskOutcome(outcome.GetError());
    }
}

void MonitorClient::DeleteAIWorkbenchTaskAsync(const DeleteAIWorkbenchTaskRequest& request, const DeleteAIWorkbenchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAIWorkbenchTaskRequest&;
    using Resp = DeleteAIWorkbenchTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAIWorkbenchTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DeleteAIWorkbenchTaskOutcomeCallable MonitorClient::DeleteAIWorkbenchTaskCallable(const DeleteAIWorkbenchTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAIWorkbenchTaskOutcome>>();
    DeleteAIWorkbenchTaskAsync(
    request,
    [prom](
        const MonitorClient*,
        const DeleteAIWorkbenchTaskRequest&,
        DeleteAIWorkbenchTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DeleteDispenseExternalRuleOutcome MonitorClient::DeleteDispenseExternalRule(const DeleteDispenseExternalRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDispenseExternalRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDispenseExternalRuleResponse rsp = DeleteDispenseExternalRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDispenseExternalRuleOutcome(rsp);
        else
            return DeleteDispenseExternalRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteDispenseExternalRuleOutcome(outcome.GetError());
    }
}

void MonitorClient::DeleteDispenseExternalRuleAsync(const DeleteDispenseExternalRuleRequest& request, const DeleteDispenseExternalRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDispenseExternalRuleRequest&;
    using Resp = DeleteDispenseExternalRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDispenseExternalRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DeleteDispenseExternalRuleOutcomeCallable MonitorClient::DeleteDispenseExternalRuleCallable(const DeleteDispenseExternalRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDispenseExternalRuleOutcome>>();
    DeleteDispenseExternalRuleAsync(
    request,
    [prom](
        const MonitorClient*,
        const DeleteDispenseExternalRuleRequest&,
        DeleteDispenseExternalRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DeleteNoticeContentTmplsOutcome MonitorClient::DeleteNoticeContentTmpls(const DeleteNoticeContentTmplsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNoticeContentTmpls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNoticeContentTmplsResponse rsp = DeleteNoticeContentTmplsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNoticeContentTmplsOutcome(rsp);
        else
            return DeleteNoticeContentTmplsOutcome(o.GetError());
    }
    else
    {
        return DeleteNoticeContentTmplsOutcome(outcome.GetError());
    }
}

void MonitorClient::DeleteNoticeContentTmplsAsync(const DeleteNoticeContentTmplsRequest& request, const DeleteNoticeContentTmplsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNoticeContentTmplsRequest&;
    using Resp = DeleteNoticeContentTmplsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNoticeContentTmpls", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DeleteNoticeContentTmplsOutcomeCallable MonitorClient::DeleteNoticeContentTmplsCallable(const DeleteNoticeContentTmplsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNoticeContentTmplsOutcome>>();
    DeleteNoticeContentTmplsAsync(
    request,
    [prom](
        const MonitorClient*,
        const DeleteNoticeContentTmplsRequest&,
        DeleteNoticeContentTmplsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeAIWorkbenchAgentOutcome MonitorClient::DescribeAIWorkbenchAgent(const DescribeAIWorkbenchAgentRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAIWorkbenchAgent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAIWorkbenchAgentResponse rsp = DescribeAIWorkbenchAgentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAIWorkbenchAgentOutcome(rsp);
        else
            return DescribeAIWorkbenchAgentOutcome(o.GetError());
    }
    else
    {
        return DescribeAIWorkbenchAgentOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeAIWorkbenchAgentAsync(const DescribeAIWorkbenchAgentRequest& request, const DescribeAIWorkbenchAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAIWorkbenchAgentRequest&;
    using Resp = DescribeAIWorkbenchAgentResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAIWorkbenchAgent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeAIWorkbenchAgentOutcomeCallable MonitorClient::DescribeAIWorkbenchAgentCallable(const DescribeAIWorkbenchAgentRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAIWorkbenchAgentOutcome>>();
    DescribeAIWorkbenchAgentAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeAIWorkbenchAgentRequest&,
        DescribeAIWorkbenchAgentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeAIWorkbenchArtifactOutcome MonitorClient::DescribeAIWorkbenchArtifact(const DescribeAIWorkbenchArtifactRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAIWorkbenchArtifact");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAIWorkbenchArtifactResponse rsp = DescribeAIWorkbenchArtifactResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAIWorkbenchArtifactOutcome(rsp);
        else
            return DescribeAIWorkbenchArtifactOutcome(o.GetError());
    }
    else
    {
        return DescribeAIWorkbenchArtifactOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeAIWorkbenchArtifactAsync(const DescribeAIWorkbenchArtifactRequest& request, const DescribeAIWorkbenchArtifactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAIWorkbenchArtifactRequest&;
    using Resp = DescribeAIWorkbenchArtifactResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAIWorkbenchArtifact", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeAIWorkbenchArtifactOutcomeCallable MonitorClient::DescribeAIWorkbenchArtifactCallable(const DescribeAIWorkbenchArtifactRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAIWorkbenchArtifactOutcome>>();
    DescribeAIWorkbenchArtifactAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeAIWorkbenchArtifactRequest&,
        DescribeAIWorkbenchArtifactOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeAIWorkbenchExecutionOutcome MonitorClient::DescribeAIWorkbenchExecution(const DescribeAIWorkbenchExecutionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAIWorkbenchExecution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAIWorkbenchExecutionResponse rsp = DescribeAIWorkbenchExecutionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAIWorkbenchExecutionOutcome(rsp);
        else
            return DescribeAIWorkbenchExecutionOutcome(o.GetError());
    }
    else
    {
        return DescribeAIWorkbenchExecutionOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeAIWorkbenchExecutionAsync(const DescribeAIWorkbenchExecutionRequest& request, const DescribeAIWorkbenchExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAIWorkbenchExecutionRequest&;
    using Resp = DescribeAIWorkbenchExecutionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAIWorkbenchExecution", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeAIWorkbenchExecutionOutcomeCallable MonitorClient::DescribeAIWorkbenchExecutionCallable(const DescribeAIWorkbenchExecutionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAIWorkbenchExecutionOutcome>>();
    DescribeAIWorkbenchExecutionAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeAIWorkbenchExecutionRequest&,
        DescribeAIWorkbenchExecutionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeAIWorkbenchSREDigitalTwinTaskListOutcome MonitorClient::DescribeAIWorkbenchSREDigitalTwinTaskList(const DescribeAIWorkbenchSREDigitalTwinTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAIWorkbenchSREDigitalTwinTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAIWorkbenchSREDigitalTwinTaskListResponse rsp = DescribeAIWorkbenchSREDigitalTwinTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAIWorkbenchSREDigitalTwinTaskListOutcome(rsp);
        else
            return DescribeAIWorkbenchSREDigitalTwinTaskListOutcome(o.GetError());
    }
    else
    {
        return DescribeAIWorkbenchSREDigitalTwinTaskListOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeAIWorkbenchSREDigitalTwinTaskListAsync(const DescribeAIWorkbenchSREDigitalTwinTaskListRequest& request, const DescribeAIWorkbenchSREDigitalTwinTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAIWorkbenchSREDigitalTwinTaskListRequest&;
    using Resp = DescribeAIWorkbenchSREDigitalTwinTaskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAIWorkbenchSREDigitalTwinTaskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeAIWorkbenchSREDigitalTwinTaskListOutcomeCallable MonitorClient::DescribeAIWorkbenchSREDigitalTwinTaskListCallable(const DescribeAIWorkbenchSREDigitalTwinTaskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAIWorkbenchSREDigitalTwinTaskListOutcome>>();
    DescribeAIWorkbenchSREDigitalTwinTaskListAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeAIWorkbenchSREDigitalTwinTaskListRequest&,
        DescribeAIWorkbenchSREDigitalTwinTaskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeAIWorkbenchSREDigitalTwinWorkLogDetailOutcome MonitorClient::DescribeAIWorkbenchSREDigitalTwinWorkLogDetail(const DescribeAIWorkbenchSREDigitalTwinWorkLogDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAIWorkbenchSREDigitalTwinWorkLogDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAIWorkbenchSREDigitalTwinWorkLogDetailResponse rsp = DescribeAIWorkbenchSREDigitalTwinWorkLogDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAIWorkbenchSREDigitalTwinWorkLogDetailOutcome(rsp);
        else
            return DescribeAIWorkbenchSREDigitalTwinWorkLogDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAIWorkbenchSREDigitalTwinWorkLogDetailOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeAIWorkbenchSREDigitalTwinWorkLogDetailAsync(const DescribeAIWorkbenchSREDigitalTwinWorkLogDetailRequest& request, const DescribeAIWorkbenchSREDigitalTwinWorkLogDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAIWorkbenchSREDigitalTwinWorkLogDetailRequest&;
    using Resp = DescribeAIWorkbenchSREDigitalTwinWorkLogDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAIWorkbenchSREDigitalTwinWorkLogDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeAIWorkbenchSREDigitalTwinWorkLogDetailOutcomeCallable MonitorClient::DescribeAIWorkbenchSREDigitalTwinWorkLogDetailCallable(const DescribeAIWorkbenchSREDigitalTwinWorkLogDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAIWorkbenchSREDigitalTwinWorkLogDetailOutcome>>();
    DescribeAIWorkbenchSREDigitalTwinWorkLogDetailAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeAIWorkbenchSREDigitalTwinWorkLogDetailRequest&,
        DescribeAIWorkbenchSREDigitalTwinWorkLogDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeAIWorkbenchSREDigitalTwinWorkLogListOutcome MonitorClient::DescribeAIWorkbenchSREDigitalTwinWorkLogList(const DescribeAIWorkbenchSREDigitalTwinWorkLogListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAIWorkbenchSREDigitalTwinWorkLogList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAIWorkbenchSREDigitalTwinWorkLogListResponse rsp = DescribeAIWorkbenchSREDigitalTwinWorkLogListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAIWorkbenchSREDigitalTwinWorkLogListOutcome(rsp);
        else
            return DescribeAIWorkbenchSREDigitalTwinWorkLogListOutcome(o.GetError());
    }
    else
    {
        return DescribeAIWorkbenchSREDigitalTwinWorkLogListOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeAIWorkbenchSREDigitalTwinWorkLogListAsync(const DescribeAIWorkbenchSREDigitalTwinWorkLogListRequest& request, const DescribeAIWorkbenchSREDigitalTwinWorkLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAIWorkbenchSREDigitalTwinWorkLogListRequest&;
    using Resp = DescribeAIWorkbenchSREDigitalTwinWorkLogListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAIWorkbenchSREDigitalTwinWorkLogList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeAIWorkbenchSREDigitalTwinWorkLogListOutcomeCallable MonitorClient::DescribeAIWorkbenchSREDigitalTwinWorkLogListCallable(const DescribeAIWorkbenchSREDigitalTwinWorkLogListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAIWorkbenchSREDigitalTwinWorkLogListOutcome>>();
    DescribeAIWorkbenchSREDigitalTwinWorkLogListAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeAIWorkbenchSREDigitalTwinWorkLogListRequest&,
        DescribeAIWorkbenchSREDigitalTwinWorkLogListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeAIWorkbenchSessionOutcome MonitorClient::DescribeAIWorkbenchSession(const DescribeAIWorkbenchSessionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAIWorkbenchSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAIWorkbenchSessionResponse rsp = DescribeAIWorkbenchSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAIWorkbenchSessionOutcome(rsp);
        else
            return DescribeAIWorkbenchSessionOutcome(o.GetError());
    }
    else
    {
        return DescribeAIWorkbenchSessionOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeAIWorkbenchSessionAsync(const DescribeAIWorkbenchSessionRequest& request, const DescribeAIWorkbenchSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAIWorkbenchSessionRequest&;
    using Resp = DescribeAIWorkbenchSessionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAIWorkbenchSession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeAIWorkbenchSessionOutcomeCallable MonitorClient::DescribeAIWorkbenchSessionCallable(const DescribeAIWorkbenchSessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAIWorkbenchSessionOutcome>>();
    DescribeAIWorkbenchSessionAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeAIWorkbenchSessionRequest&,
        DescribeAIWorkbenchSessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeAIWorkbenchSkillOutcome MonitorClient::DescribeAIWorkbenchSkill(const DescribeAIWorkbenchSkillRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAIWorkbenchSkill");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAIWorkbenchSkillResponse rsp = DescribeAIWorkbenchSkillResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAIWorkbenchSkillOutcome(rsp);
        else
            return DescribeAIWorkbenchSkillOutcome(o.GetError());
    }
    else
    {
        return DescribeAIWorkbenchSkillOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeAIWorkbenchSkillAsync(const DescribeAIWorkbenchSkillRequest& request, const DescribeAIWorkbenchSkillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAIWorkbenchSkillRequest&;
    using Resp = DescribeAIWorkbenchSkillResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAIWorkbenchSkill", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeAIWorkbenchSkillOutcomeCallable MonitorClient::DescribeAIWorkbenchSkillCallable(const DescribeAIWorkbenchSkillRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAIWorkbenchSkillOutcome>>();
    DescribeAIWorkbenchSkillAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeAIWorkbenchSkillRequest&,
        DescribeAIWorkbenchSkillOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeAlarmNotifyHistoriesOutcome MonitorClient::DescribeAlarmNotifyHistories(const DescribeAlarmNotifyHistoriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmNotifyHistories");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmNotifyHistoriesResponse rsp = DescribeAlarmNotifyHistoriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmNotifyHistoriesOutcome(rsp);
        else
            return DescribeAlarmNotifyHistoriesOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmNotifyHistoriesOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeAlarmNotifyHistoriesAsync(const DescribeAlarmNotifyHistoriesRequest& request, const DescribeAlarmNotifyHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAlarmNotifyHistoriesRequest&;
    using Resp = DescribeAlarmNotifyHistoriesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAlarmNotifyHistories", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeAlarmNotifyHistoriesOutcomeCallable MonitorClient::DescribeAlarmNotifyHistoriesCallable(const DescribeAlarmNotifyHistoriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAlarmNotifyHistoriesOutcome>>();
    DescribeAlarmNotifyHistoriesAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeAlarmNotifyHistoriesRequest&,
        DescribeAlarmNotifyHistoriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeDispenseExternalRuleOutcome MonitorClient::DescribeDispenseExternalRule(const DescribeDispenseExternalRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDispenseExternalRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDispenseExternalRuleResponse rsp = DescribeDispenseExternalRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDispenseExternalRuleOutcome(rsp);
        else
            return DescribeDispenseExternalRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeDispenseExternalRuleOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeDispenseExternalRuleAsync(const DescribeDispenseExternalRuleRequest& request, const DescribeDispenseExternalRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDispenseExternalRuleRequest&;
    using Resp = DescribeDispenseExternalRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDispenseExternalRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeDispenseExternalRuleOutcomeCallable MonitorClient::DescribeDispenseExternalRuleCallable(const DescribeDispenseExternalRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDispenseExternalRuleOutcome>>();
    DescribeDispenseExternalRuleAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeDispenseExternalRuleRequest&,
        DescribeDispenseExternalRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeDispenseExternalRuleListOutcome MonitorClient::DescribeDispenseExternalRuleList(const DescribeDispenseExternalRuleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDispenseExternalRuleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDispenseExternalRuleListResponse rsp = DescribeDispenseExternalRuleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDispenseExternalRuleListOutcome(rsp);
        else
            return DescribeDispenseExternalRuleListOutcome(o.GetError());
    }
    else
    {
        return DescribeDispenseExternalRuleListOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeDispenseExternalRuleListAsync(const DescribeDispenseExternalRuleListRequest& request, const DescribeDispenseExternalRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDispenseExternalRuleListRequest&;
    using Resp = DescribeDispenseExternalRuleListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDispenseExternalRuleList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeDispenseExternalRuleListOutcomeCallable MonitorClient::DescribeDispenseExternalRuleListCallable(const DescribeDispenseExternalRuleListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDispenseExternalRuleListOutcome>>();
    DescribeDispenseExternalRuleListAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeDispenseExternalRuleListRequest&,
        DescribeDispenseExternalRuleListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeDispenseRegionOutcome MonitorClient::DescribeDispenseRegion(const DescribeDispenseRegionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDispenseRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDispenseRegionResponse rsp = DescribeDispenseRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDispenseRegionOutcome(rsp);
        else
            return DescribeDispenseRegionOutcome(o.GetError());
    }
    else
    {
        return DescribeDispenseRegionOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeDispenseRegionAsync(const DescribeDispenseRegionRequest& request, const DescribeDispenseRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDispenseRegionRequest&;
    using Resp = DescribeDispenseRegionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDispenseRegion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeDispenseRegionOutcomeCallable MonitorClient::DescribeDispenseRegionCallable(const DescribeDispenseRegionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDispenseRegionOutcome>>();
    DescribeDispenseRegionAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeDispenseRegionRequest&,
        DescribeDispenseRegionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeExtMetricOutcome MonitorClient::DescribeExtMetric(const DescribeExtMetricRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExtMetric");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExtMetricResponse rsp = DescribeExtMetricResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExtMetricOutcome(rsp);
        else
            return DescribeExtMetricOutcome(o.GetError());
    }
    else
    {
        return DescribeExtMetricOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeExtMetricAsync(const DescribeExtMetricRequest& request, const DescribeExtMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExtMetricRequest&;
    using Resp = DescribeExtMetricResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExtMetric", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeExtMetricOutcomeCallable MonitorClient::DescribeExtMetricCallable(const DescribeExtMetricRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExtMetricOutcome>>();
    DescribeExtMetricAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeExtMetricRequest&,
        DescribeExtMetricOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeExtNamespaceOutcome MonitorClient::DescribeExtNamespace(const DescribeExtNamespaceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExtNamespace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExtNamespaceResponse rsp = DescribeExtNamespaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExtNamespaceOutcome(rsp);
        else
            return DescribeExtNamespaceOutcome(o.GetError());
    }
    else
    {
        return DescribeExtNamespaceOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeExtNamespaceAsync(const DescribeExtNamespaceRequest& request, const DescribeExtNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExtNamespaceRequest&;
    using Resp = DescribeExtNamespaceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExtNamespace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeExtNamespaceOutcomeCallable MonitorClient::DescribeExtNamespaceCallable(const DescribeExtNamespaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExtNamespaceOutcome>>();
    DescribeExtNamespaceAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeExtNamespaceRequest&,
        DescribeExtNamespaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeKafkaOutcome MonitorClient::DescribeKafka(const DescribeKafkaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKafka");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKafkaResponse rsp = DescribeKafkaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKafkaOutcome(rsp);
        else
            return DescribeKafkaOutcome(o.GetError());
    }
    else
    {
        return DescribeKafkaOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeKafkaAsync(const DescribeKafkaRequest& request, const DescribeKafkaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKafkaRequest&;
    using Resp = DescribeKafkaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKafka", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeKafkaOutcomeCallable MonitorClient::DescribeKafkaCallable(const DescribeKafkaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKafkaOutcome>>();
    DescribeKafkaAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeKafkaRequest&,
        DescribeKafkaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::DescribeNoticeContentTmplOutcome MonitorClient::DescribeNoticeContentTmpl(const DescribeNoticeContentTmplRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNoticeContentTmpl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNoticeContentTmplResponse rsp = DescribeNoticeContentTmplResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNoticeContentTmplOutcome(rsp);
        else
            return DescribeNoticeContentTmplOutcome(o.GetError());
    }
    else
    {
        return DescribeNoticeContentTmplOutcome(outcome.GetError());
    }
}

void MonitorClient::DescribeNoticeContentTmplAsync(const DescribeNoticeContentTmplRequest& request, const DescribeNoticeContentTmplAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNoticeContentTmplRequest&;
    using Resp = DescribeNoticeContentTmplResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNoticeContentTmpl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::DescribeNoticeContentTmplOutcomeCallable MonitorClient::DescribeNoticeContentTmplCallable(const DescribeNoticeContentTmplRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNoticeContentTmplOutcome>>();
    DescribeNoticeContentTmplAsync(
    request,
    [prom](
        const MonitorClient*,
        const DescribeNoticeContentTmplRequest&,
        DescribeNoticeContentTmplOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::GetAIWorkbenchArtifactDownloadURLOutcome MonitorClient::GetAIWorkbenchArtifactDownloadURL(const GetAIWorkbenchArtifactDownloadURLRequest &request)
{
    auto outcome = MakeRequest(request, "GetAIWorkbenchArtifactDownloadURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAIWorkbenchArtifactDownloadURLResponse rsp = GetAIWorkbenchArtifactDownloadURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAIWorkbenchArtifactDownloadURLOutcome(rsp);
        else
            return GetAIWorkbenchArtifactDownloadURLOutcome(o.GetError());
    }
    else
    {
        return GetAIWorkbenchArtifactDownloadURLOutcome(outcome.GetError());
    }
}

void MonitorClient::GetAIWorkbenchArtifactDownloadURLAsync(const GetAIWorkbenchArtifactDownloadURLRequest& request, const GetAIWorkbenchArtifactDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetAIWorkbenchArtifactDownloadURLRequest&;
    using Resp = GetAIWorkbenchArtifactDownloadURLResponse;

    DoRequestAsync<Req, Resp>(
        "GetAIWorkbenchArtifactDownloadURL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::GetAIWorkbenchArtifactDownloadURLOutcomeCallable MonitorClient::GetAIWorkbenchArtifactDownloadURLCallable(const GetAIWorkbenchArtifactDownloadURLRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetAIWorkbenchArtifactDownloadURLOutcome>>();
    GetAIWorkbenchArtifactDownloadURLAsync(
    request,
    [prom](
        const MonitorClient*,
        const GetAIWorkbenchArtifactDownloadURLRequest&,
        GetAIWorkbenchArtifactDownloadURLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ListAIWorkbenchAgentsOutcome MonitorClient::ListAIWorkbenchAgents(const ListAIWorkbenchAgentsRequest &request)
{
    auto outcome = MakeRequest(request, "ListAIWorkbenchAgents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAIWorkbenchAgentsResponse rsp = ListAIWorkbenchAgentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAIWorkbenchAgentsOutcome(rsp);
        else
            return ListAIWorkbenchAgentsOutcome(o.GetError());
    }
    else
    {
        return ListAIWorkbenchAgentsOutcome(outcome.GetError());
    }
}

void MonitorClient::ListAIWorkbenchAgentsAsync(const ListAIWorkbenchAgentsRequest& request, const ListAIWorkbenchAgentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAIWorkbenchAgentsRequest&;
    using Resp = ListAIWorkbenchAgentsResponse;

    DoRequestAsync<Req, Resp>(
        "ListAIWorkbenchAgents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ListAIWorkbenchAgentsOutcomeCallable MonitorClient::ListAIWorkbenchAgentsCallable(const ListAIWorkbenchAgentsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAIWorkbenchAgentsOutcome>>();
    ListAIWorkbenchAgentsAsync(
    request,
    [prom](
        const MonitorClient*,
        const ListAIWorkbenchAgentsRequest&,
        ListAIWorkbenchAgentsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ListAIWorkbenchArtifactsOutcome MonitorClient::ListAIWorkbenchArtifacts(const ListAIWorkbenchArtifactsRequest &request)
{
    auto outcome = MakeRequest(request, "ListAIWorkbenchArtifacts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAIWorkbenchArtifactsResponse rsp = ListAIWorkbenchArtifactsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAIWorkbenchArtifactsOutcome(rsp);
        else
            return ListAIWorkbenchArtifactsOutcome(o.GetError());
    }
    else
    {
        return ListAIWorkbenchArtifactsOutcome(outcome.GetError());
    }
}

void MonitorClient::ListAIWorkbenchArtifactsAsync(const ListAIWorkbenchArtifactsRequest& request, const ListAIWorkbenchArtifactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAIWorkbenchArtifactsRequest&;
    using Resp = ListAIWorkbenchArtifactsResponse;

    DoRequestAsync<Req, Resp>(
        "ListAIWorkbenchArtifacts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ListAIWorkbenchArtifactsOutcomeCallable MonitorClient::ListAIWorkbenchArtifactsCallable(const ListAIWorkbenchArtifactsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAIWorkbenchArtifactsOutcome>>();
    ListAIWorkbenchArtifactsAsync(
    request,
    [prom](
        const MonitorClient*,
        const ListAIWorkbenchArtifactsRequest&,
        ListAIWorkbenchArtifactsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ListAIWorkbenchExecutionsOutcome MonitorClient::ListAIWorkbenchExecutions(const ListAIWorkbenchExecutionsRequest &request)
{
    auto outcome = MakeRequest(request, "ListAIWorkbenchExecutions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAIWorkbenchExecutionsResponse rsp = ListAIWorkbenchExecutionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAIWorkbenchExecutionsOutcome(rsp);
        else
            return ListAIWorkbenchExecutionsOutcome(o.GetError());
    }
    else
    {
        return ListAIWorkbenchExecutionsOutcome(outcome.GetError());
    }
}

void MonitorClient::ListAIWorkbenchExecutionsAsync(const ListAIWorkbenchExecutionsRequest& request, const ListAIWorkbenchExecutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAIWorkbenchExecutionsRequest&;
    using Resp = ListAIWorkbenchExecutionsResponse;

    DoRequestAsync<Req, Resp>(
        "ListAIWorkbenchExecutions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ListAIWorkbenchExecutionsOutcomeCallable MonitorClient::ListAIWorkbenchExecutionsCallable(const ListAIWorkbenchExecutionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAIWorkbenchExecutionsOutcome>>();
    ListAIWorkbenchExecutionsAsync(
    request,
    [prom](
        const MonitorClient*,
        const ListAIWorkbenchExecutionsRequest&,
        ListAIWorkbenchExecutionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ListAIWorkbenchMCPsOutcome MonitorClient::ListAIWorkbenchMCPs(const ListAIWorkbenchMCPsRequest &request)
{
    auto outcome = MakeRequest(request, "ListAIWorkbenchMCPs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAIWorkbenchMCPsResponse rsp = ListAIWorkbenchMCPsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAIWorkbenchMCPsOutcome(rsp);
        else
            return ListAIWorkbenchMCPsOutcome(o.GetError());
    }
    else
    {
        return ListAIWorkbenchMCPsOutcome(outcome.GetError());
    }
}

void MonitorClient::ListAIWorkbenchMCPsAsync(const ListAIWorkbenchMCPsRequest& request, const ListAIWorkbenchMCPsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAIWorkbenchMCPsRequest&;
    using Resp = ListAIWorkbenchMCPsResponse;

    DoRequestAsync<Req, Resp>(
        "ListAIWorkbenchMCPs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ListAIWorkbenchMCPsOutcomeCallable MonitorClient::ListAIWorkbenchMCPsCallable(const ListAIWorkbenchMCPsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAIWorkbenchMCPsOutcome>>();
    ListAIWorkbenchMCPsAsync(
    request,
    [prom](
        const MonitorClient*,
        const ListAIWorkbenchMCPsRequest&,
        ListAIWorkbenchMCPsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ListAIWorkbenchMessagesOutcome MonitorClient::ListAIWorkbenchMessages(const ListAIWorkbenchMessagesRequest &request)
{
    auto outcome = MakeRequest(request, "ListAIWorkbenchMessages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAIWorkbenchMessagesResponse rsp = ListAIWorkbenchMessagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAIWorkbenchMessagesOutcome(rsp);
        else
            return ListAIWorkbenchMessagesOutcome(o.GetError());
    }
    else
    {
        return ListAIWorkbenchMessagesOutcome(outcome.GetError());
    }
}

void MonitorClient::ListAIWorkbenchMessagesAsync(const ListAIWorkbenchMessagesRequest& request, const ListAIWorkbenchMessagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAIWorkbenchMessagesRequest&;
    using Resp = ListAIWorkbenchMessagesResponse;

    DoRequestAsync<Req, Resp>(
        "ListAIWorkbenchMessages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ListAIWorkbenchMessagesOutcomeCallable MonitorClient::ListAIWorkbenchMessagesCallable(const ListAIWorkbenchMessagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAIWorkbenchMessagesOutcome>>();
    ListAIWorkbenchMessagesAsync(
    request,
    [prom](
        const MonitorClient*,
        const ListAIWorkbenchMessagesRequest&,
        ListAIWorkbenchMessagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ListAIWorkbenchResourceInstancesOutcome MonitorClient::ListAIWorkbenchResourceInstances(const ListAIWorkbenchResourceInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ListAIWorkbenchResourceInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAIWorkbenchResourceInstancesResponse rsp = ListAIWorkbenchResourceInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAIWorkbenchResourceInstancesOutcome(rsp);
        else
            return ListAIWorkbenchResourceInstancesOutcome(o.GetError());
    }
    else
    {
        return ListAIWorkbenchResourceInstancesOutcome(outcome.GetError());
    }
}

void MonitorClient::ListAIWorkbenchResourceInstancesAsync(const ListAIWorkbenchResourceInstancesRequest& request, const ListAIWorkbenchResourceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAIWorkbenchResourceInstancesRequest&;
    using Resp = ListAIWorkbenchResourceInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "ListAIWorkbenchResourceInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ListAIWorkbenchResourceInstancesOutcomeCallable MonitorClient::ListAIWorkbenchResourceInstancesCallable(const ListAIWorkbenchResourceInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAIWorkbenchResourceInstancesOutcome>>();
    ListAIWorkbenchResourceInstancesAsync(
    request,
    [prom](
        const MonitorClient*,
        const ListAIWorkbenchResourceInstancesRequest&,
        ListAIWorkbenchResourceInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ListAIWorkbenchResourceMapsOutcome MonitorClient::ListAIWorkbenchResourceMaps(const ListAIWorkbenchResourceMapsRequest &request)
{
    auto outcome = MakeRequest(request, "ListAIWorkbenchResourceMaps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAIWorkbenchResourceMapsResponse rsp = ListAIWorkbenchResourceMapsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAIWorkbenchResourceMapsOutcome(rsp);
        else
            return ListAIWorkbenchResourceMapsOutcome(o.GetError());
    }
    else
    {
        return ListAIWorkbenchResourceMapsOutcome(outcome.GetError());
    }
}

void MonitorClient::ListAIWorkbenchResourceMapsAsync(const ListAIWorkbenchResourceMapsRequest& request, const ListAIWorkbenchResourceMapsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAIWorkbenchResourceMapsRequest&;
    using Resp = ListAIWorkbenchResourceMapsResponse;

    DoRequestAsync<Req, Resp>(
        "ListAIWorkbenchResourceMaps", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ListAIWorkbenchResourceMapsOutcomeCallable MonitorClient::ListAIWorkbenchResourceMapsCallable(const ListAIWorkbenchResourceMapsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAIWorkbenchResourceMapsOutcome>>();
    ListAIWorkbenchResourceMapsAsync(
    request,
    [prom](
        const MonitorClient*,
        const ListAIWorkbenchResourceMapsRequest&,
        ListAIWorkbenchResourceMapsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ListAIWorkbenchSessionsOutcome MonitorClient::ListAIWorkbenchSessions(const ListAIWorkbenchSessionsRequest &request)
{
    auto outcome = MakeRequest(request, "ListAIWorkbenchSessions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAIWorkbenchSessionsResponse rsp = ListAIWorkbenchSessionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAIWorkbenchSessionsOutcome(rsp);
        else
            return ListAIWorkbenchSessionsOutcome(o.GetError());
    }
    else
    {
        return ListAIWorkbenchSessionsOutcome(outcome.GetError());
    }
}

void MonitorClient::ListAIWorkbenchSessionsAsync(const ListAIWorkbenchSessionsRequest& request, const ListAIWorkbenchSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAIWorkbenchSessionsRequest&;
    using Resp = ListAIWorkbenchSessionsResponse;

    DoRequestAsync<Req, Resp>(
        "ListAIWorkbenchSessions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ListAIWorkbenchSessionsOutcomeCallable MonitorClient::ListAIWorkbenchSessionsCallable(const ListAIWorkbenchSessionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAIWorkbenchSessionsOutcome>>();
    ListAIWorkbenchSessionsAsync(
    request,
    [prom](
        const MonitorClient*,
        const ListAIWorkbenchSessionsRequest&,
        ListAIWorkbenchSessionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ListAIWorkbenchSkillsOutcome MonitorClient::ListAIWorkbenchSkills(const ListAIWorkbenchSkillsRequest &request)
{
    auto outcome = MakeRequest(request, "ListAIWorkbenchSkills");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAIWorkbenchSkillsResponse rsp = ListAIWorkbenchSkillsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAIWorkbenchSkillsOutcome(rsp);
        else
            return ListAIWorkbenchSkillsOutcome(o.GetError());
    }
    else
    {
        return ListAIWorkbenchSkillsOutcome(outcome.GetError());
    }
}

void MonitorClient::ListAIWorkbenchSkillsAsync(const ListAIWorkbenchSkillsRequest& request, const ListAIWorkbenchSkillsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAIWorkbenchSkillsRequest&;
    using Resp = ListAIWorkbenchSkillsResponse;

    DoRequestAsync<Req, Resp>(
        "ListAIWorkbenchSkills", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ListAIWorkbenchSkillsOutcomeCallable MonitorClient::ListAIWorkbenchSkillsCallable(const ListAIWorkbenchSkillsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAIWorkbenchSkillsOutcome>>();
    ListAIWorkbenchSkillsAsync(
    request,
    [prom](
        const MonitorClient*,
        const ListAIWorkbenchSkillsRequest&,
        ListAIWorkbenchSkillsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ListAIWorkbenchTasksOutcome MonitorClient::ListAIWorkbenchTasks(const ListAIWorkbenchTasksRequest &request)
{
    auto outcome = MakeRequest(request, "ListAIWorkbenchTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAIWorkbenchTasksResponse rsp = ListAIWorkbenchTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAIWorkbenchTasksOutcome(rsp);
        else
            return ListAIWorkbenchTasksOutcome(o.GetError());
    }
    else
    {
        return ListAIWorkbenchTasksOutcome(outcome.GetError());
    }
}

void MonitorClient::ListAIWorkbenchTasksAsync(const ListAIWorkbenchTasksRequest& request, const ListAIWorkbenchTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAIWorkbenchTasksRequest&;
    using Resp = ListAIWorkbenchTasksResponse;

    DoRequestAsync<Req, Resp>(
        "ListAIWorkbenchTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ListAIWorkbenchTasksOutcomeCallable MonitorClient::ListAIWorkbenchTasksCallable(const ListAIWorkbenchTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAIWorkbenchTasksOutcome>>();
    ListAIWorkbenchTasksAsync(
    request,
    [prom](
        const MonitorClient*,
        const ListAIWorkbenchTasksRequest&,
        ListAIWorkbenchTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ModifyDispenseExternalRuleOutcome MonitorClient::ModifyDispenseExternalRule(const ModifyDispenseExternalRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDispenseExternalRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDispenseExternalRuleResponse rsp = ModifyDispenseExternalRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDispenseExternalRuleOutcome(rsp);
        else
            return ModifyDispenseExternalRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyDispenseExternalRuleOutcome(outcome.GetError());
    }
}

void MonitorClient::ModifyDispenseExternalRuleAsync(const ModifyDispenseExternalRuleRequest& request, const ModifyDispenseExternalRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDispenseExternalRuleRequest&;
    using Resp = ModifyDispenseExternalRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDispenseExternalRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ModifyDispenseExternalRuleOutcomeCallable MonitorClient::ModifyDispenseExternalRuleCallable(const ModifyDispenseExternalRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDispenseExternalRuleOutcome>>();
    ModifyDispenseExternalRuleAsync(
    request,
    [prom](
        const MonitorClient*,
        const ModifyDispenseExternalRuleRequest&,
        ModifyDispenseExternalRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ModifyDispenseExternalRuleStatusOutcome MonitorClient::ModifyDispenseExternalRuleStatus(const ModifyDispenseExternalRuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDispenseExternalRuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDispenseExternalRuleStatusResponse rsp = ModifyDispenseExternalRuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDispenseExternalRuleStatusOutcome(rsp);
        else
            return ModifyDispenseExternalRuleStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyDispenseExternalRuleStatusOutcome(outcome.GetError());
    }
}

void MonitorClient::ModifyDispenseExternalRuleStatusAsync(const ModifyDispenseExternalRuleStatusRequest& request, const ModifyDispenseExternalRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDispenseExternalRuleStatusRequest&;
    using Resp = ModifyDispenseExternalRuleStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDispenseExternalRuleStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ModifyDispenseExternalRuleStatusOutcomeCallable MonitorClient::ModifyDispenseExternalRuleStatusCallable(const ModifyDispenseExternalRuleStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDispenseExternalRuleStatusOutcome>>();
    ModifyDispenseExternalRuleStatusAsync(
    request,
    [prom](
        const MonitorClient*,
        const ModifyDispenseExternalRuleStatusRequest&,
        ModifyDispenseExternalRuleStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::ModifyNoticeContentTmplOutcome MonitorClient::ModifyNoticeContentTmpl(const ModifyNoticeContentTmplRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNoticeContentTmpl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNoticeContentTmplResponse rsp = ModifyNoticeContentTmplResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNoticeContentTmplOutcome(rsp);
        else
            return ModifyNoticeContentTmplOutcome(o.GetError());
    }
    else
    {
        return ModifyNoticeContentTmplOutcome(outcome.GetError());
    }
}

void MonitorClient::ModifyNoticeContentTmplAsync(const ModifyNoticeContentTmplRequest& request, const ModifyNoticeContentTmplAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNoticeContentTmplRequest&;
    using Resp = ModifyNoticeContentTmplResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNoticeContentTmpl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::ModifyNoticeContentTmplOutcomeCallable MonitorClient::ModifyNoticeContentTmplCallable(const ModifyNoticeContentTmplRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNoticeContentTmplOutcome>>();
    ModifyNoticeContentTmplAsync(
    request,
    [prom](
        const MonitorClient*,
        const ModifyNoticeContentTmplRequest&,
        ModifyNoticeContentTmplOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::TriggerAIWorkbenchSREDigitalTwinTaskOutcome MonitorClient::TriggerAIWorkbenchSREDigitalTwinTask(const TriggerAIWorkbenchSREDigitalTwinTaskRequest &request)
{
    auto outcome = MakeRequest(request, "TriggerAIWorkbenchSREDigitalTwinTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TriggerAIWorkbenchSREDigitalTwinTaskResponse rsp = TriggerAIWorkbenchSREDigitalTwinTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TriggerAIWorkbenchSREDigitalTwinTaskOutcome(rsp);
        else
            return TriggerAIWorkbenchSREDigitalTwinTaskOutcome(o.GetError());
    }
    else
    {
        return TriggerAIWorkbenchSREDigitalTwinTaskOutcome(outcome.GetError());
    }
}

void MonitorClient::TriggerAIWorkbenchSREDigitalTwinTaskAsync(const TriggerAIWorkbenchSREDigitalTwinTaskRequest& request, const TriggerAIWorkbenchSREDigitalTwinTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TriggerAIWorkbenchSREDigitalTwinTaskRequest&;
    using Resp = TriggerAIWorkbenchSREDigitalTwinTaskResponse;

    DoRequestAsync<Req, Resp>(
        "TriggerAIWorkbenchSREDigitalTwinTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::TriggerAIWorkbenchSREDigitalTwinTaskOutcomeCallable MonitorClient::TriggerAIWorkbenchSREDigitalTwinTaskCallable(const TriggerAIWorkbenchSREDigitalTwinTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<TriggerAIWorkbenchSREDigitalTwinTaskOutcome>>();
    TriggerAIWorkbenchSREDigitalTwinTaskAsync(
    request,
    [prom](
        const MonitorClient*,
        const TriggerAIWorkbenchSREDigitalTwinTaskRequest&,
        TriggerAIWorkbenchSREDigitalTwinTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::TriggerAIWorkbenchTaskOutcome MonitorClient::TriggerAIWorkbenchTask(const TriggerAIWorkbenchTaskRequest &request)
{
    auto outcome = MakeRequest(request, "TriggerAIWorkbenchTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TriggerAIWorkbenchTaskResponse rsp = TriggerAIWorkbenchTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TriggerAIWorkbenchTaskOutcome(rsp);
        else
            return TriggerAIWorkbenchTaskOutcome(o.GetError());
    }
    else
    {
        return TriggerAIWorkbenchTaskOutcome(outcome.GetError());
    }
}

void MonitorClient::TriggerAIWorkbenchTaskAsync(const TriggerAIWorkbenchTaskRequest& request, const TriggerAIWorkbenchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TriggerAIWorkbenchTaskRequest&;
    using Resp = TriggerAIWorkbenchTaskResponse;

    DoRequestAsync<Req, Resp>(
        "TriggerAIWorkbenchTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::TriggerAIWorkbenchTaskOutcomeCallable MonitorClient::TriggerAIWorkbenchTaskCallable(const TriggerAIWorkbenchTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<TriggerAIWorkbenchTaskOutcome>>();
    TriggerAIWorkbenchTaskAsync(
    request,
    [prom](
        const MonitorClient*,
        const TriggerAIWorkbenchTaskRequest&,
        TriggerAIWorkbenchTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MonitorClient::UpdateAIWorkbenchAgentOutcome MonitorClient::UpdateAIWorkbenchAgent(const UpdateAIWorkbenchAgentRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAIWorkbenchAgent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAIWorkbenchAgentResponse rsp = UpdateAIWorkbenchAgentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAIWorkbenchAgentOutcome(rsp);
        else
            return UpdateAIWorkbenchAgentOutcome(o.GetError());
    }
    else
    {
        return UpdateAIWorkbenchAgentOutcome(outcome.GetError());
    }
}

void MonitorClient::UpdateAIWorkbenchAgentAsync(const UpdateAIWorkbenchAgentRequest& request, const UpdateAIWorkbenchAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateAIWorkbenchAgentRequest&;
    using Resp = UpdateAIWorkbenchAgentResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAIWorkbenchAgent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MonitorClient::UpdateAIWorkbenchAgentOutcomeCallable MonitorClient::UpdateAIWorkbenchAgentCallable(const UpdateAIWorkbenchAgentRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAIWorkbenchAgentOutcome>>();
    UpdateAIWorkbenchAgentAsync(
    request,
    [prom](
        const MonitorClient*,
        const UpdateAIWorkbenchAgentRequest&,
        UpdateAIWorkbenchAgentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

