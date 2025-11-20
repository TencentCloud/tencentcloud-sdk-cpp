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

#include <tencentcloud/gme/v20180711/GmeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Gme::V20180711;
using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-07-11";
    const string ENDPOINT = "gme.tencentcloudapi.com";
}

GmeClient::GmeClient(const Credential &credential, const string &region) :
    GmeClient(credential, region, ClientProfile())
{
}

GmeClient::GmeClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


GmeClient::ControlAIConversationOutcome GmeClient::ControlAIConversation(const ControlAIConversationRequest &request)
{
    auto outcome = MakeRequest(request, "ControlAIConversation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ControlAIConversationResponse rsp = ControlAIConversationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ControlAIConversationOutcome(rsp);
        else
            return ControlAIConversationOutcome(o.GetError());
    }
    else
    {
        return ControlAIConversationOutcome(outcome.GetError());
    }
}

void GmeClient::ControlAIConversationAsync(const ControlAIConversationRequest& request, const ControlAIConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ControlAIConversationRequest&;
    using Resp = ControlAIConversationResponse;

    DoRequestAsync<Req, Resp>(
        "ControlAIConversation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::ControlAIConversationOutcomeCallable GmeClient::ControlAIConversationCallable(const ControlAIConversationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ControlAIConversationOutcome>>();
    ControlAIConversationAsync(
    request,
    [prom](
        const GmeClient*,
        const ControlAIConversationRequest&,
        ControlAIConversationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::CreateAgeDetectTaskOutcome GmeClient::CreateAgeDetectTask(const CreateAgeDetectTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAgeDetectTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAgeDetectTaskResponse rsp = CreateAgeDetectTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAgeDetectTaskOutcome(rsp);
        else
            return CreateAgeDetectTaskOutcome(o.GetError());
    }
    else
    {
        return CreateAgeDetectTaskOutcome(outcome.GetError());
    }
}

void GmeClient::CreateAgeDetectTaskAsync(const CreateAgeDetectTaskRequest& request, const CreateAgeDetectTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAgeDetectTaskRequest&;
    using Resp = CreateAgeDetectTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAgeDetectTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::CreateAgeDetectTaskOutcomeCallable GmeClient::CreateAgeDetectTaskCallable(const CreateAgeDetectTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAgeDetectTaskOutcome>>();
    CreateAgeDetectTaskAsync(
    request,
    [prom](
        const GmeClient*,
        const CreateAgeDetectTaskRequest&,
        CreateAgeDetectTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::CreateAppOutcome GmeClient::CreateApp(const CreateAppRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAppResponse rsp = CreateAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAppOutcome(rsp);
        else
            return CreateAppOutcome(o.GetError());
    }
    else
    {
        return CreateAppOutcome(outcome.GetError());
    }
}

void GmeClient::CreateAppAsync(const CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAppRequest&;
    using Resp = CreateAppResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::CreateAppOutcomeCallable GmeClient::CreateAppCallable(const CreateAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAppOutcome>>();
    CreateAppAsync(
    request,
    [prom](
        const GmeClient*,
        const CreateAppRequest&,
        CreateAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::CreateCustomizationOutcome GmeClient::CreateCustomization(const CreateCustomizationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomizationResponse rsp = CreateCustomizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomizationOutcome(rsp);
        else
            return CreateCustomizationOutcome(o.GetError());
    }
    else
    {
        return CreateCustomizationOutcome(outcome.GetError());
    }
}

void GmeClient::CreateCustomizationAsync(const CreateCustomizationRequest& request, const CreateCustomizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCustomizationRequest&;
    using Resp = CreateCustomizationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCustomization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::CreateCustomizationOutcomeCallable GmeClient::CreateCustomizationCallable(const CreateCustomizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCustomizationOutcome>>();
    CreateCustomizationAsync(
    request,
    [prom](
        const GmeClient*,
        const CreateCustomizationRequest&,
        CreateCustomizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::CreateScanUserOutcome GmeClient::CreateScanUser(const CreateScanUserRequest &request)
{
    auto outcome = MakeRequest(request, "CreateScanUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateScanUserResponse rsp = CreateScanUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateScanUserOutcome(rsp);
        else
            return CreateScanUserOutcome(o.GetError());
    }
    else
    {
        return CreateScanUserOutcome(outcome.GetError());
    }
}

void GmeClient::CreateScanUserAsync(const CreateScanUserRequest& request, const CreateScanUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateScanUserRequest&;
    using Resp = CreateScanUserResponse;

    DoRequestAsync<Req, Resp>(
        "CreateScanUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::CreateScanUserOutcomeCallable GmeClient::CreateScanUserCallable(const CreateScanUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateScanUserOutcome>>();
    CreateScanUserAsync(
    request,
    [prom](
        const GmeClient*,
        const CreateScanUserRequest&,
        CreateScanUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::DeleteCustomizationOutcome GmeClient::DeleteCustomization(const DeleteCustomizationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCustomization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCustomizationResponse rsp = DeleteCustomizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCustomizationOutcome(rsp);
        else
            return DeleteCustomizationOutcome(o.GetError());
    }
    else
    {
        return DeleteCustomizationOutcome(outcome.GetError());
    }
}

void GmeClient::DeleteCustomizationAsync(const DeleteCustomizationRequest& request, const DeleteCustomizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCustomizationRequest&;
    using Resp = DeleteCustomizationResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCustomization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::DeleteCustomizationOutcomeCallable GmeClient::DeleteCustomizationCallable(const DeleteCustomizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCustomizationOutcome>>();
    DeleteCustomizationAsync(
    request,
    [prom](
        const GmeClient*,
        const DeleteCustomizationRequest&,
        DeleteCustomizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::DeleteRoomMemberOutcome GmeClient::DeleteRoomMember(const DeleteRoomMemberRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRoomMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRoomMemberResponse rsp = DeleteRoomMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRoomMemberOutcome(rsp);
        else
            return DeleteRoomMemberOutcome(o.GetError());
    }
    else
    {
        return DeleteRoomMemberOutcome(outcome.GetError());
    }
}

void GmeClient::DeleteRoomMemberAsync(const DeleteRoomMemberRequest& request, const DeleteRoomMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRoomMemberRequest&;
    using Resp = DeleteRoomMemberResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRoomMember", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::DeleteRoomMemberOutcomeCallable GmeClient::DeleteRoomMemberCallable(const DeleteRoomMemberRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRoomMemberOutcome>>();
    DeleteRoomMemberAsync(
    request,
    [prom](
        const GmeClient*,
        const DeleteRoomMemberRequest&,
        DeleteRoomMemberOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::DeleteScanUserOutcome GmeClient::DeleteScanUser(const DeleteScanUserRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteScanUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteScanUserResponse rsp = DeleteScanUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteScanUserOutcome(rsp);
        else
            return DeleteScanUserOutcome(o.GetError());
    }
    else
    {
        return DeleteScanUserOutcome(outcome.GetError());
    }
}

void GmeClient::DeleteScanUserAsync(const DeleteScanUserRequest& request, const DeleteScanUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteScanUserRequest&;
    using Resp = DeleteScanUserResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteScanUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::DeleteScanUserOutcomeCallable GmeClient::DeleteScanUserCallable(const DeleteScanUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteScanUserOutcome>>();
    DeleteScanUserAsync(
    request,
    [prom](
        const GmeClient*,
        const DeleteScanUserRequest&,
        DeleteScanUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::DeleteVoicePrintOutcome GmeClient::DeleteVoicePrint(const DeleteVoicePrintRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVoicePrint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVoicePrintResponse rsp = DeleteVoicePrintResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVoicePrintOutcome(rsp);
        else
            return DeleteVoicePrintOutcome(o.GetError());
    }
    else
    {
        return DeleteVoicePrintOutcome(outcome.GetError());
    }
}

void GmeClient::DeleteVoicePrintAsync(const DeleteVoicePrintRequest& request, const DeleteVoicePrintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteVoicePrintRequest&;
    using Resp = DeleteVoicePrintResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteVoicePrint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::DeleteVoicePrintOutcomeCallable GmeClient::DeleteVoicePrintCallable(const DeleteVoicePrintRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteVoicePrintOutcome>>();
    DeleteVoicePrintAsync(
    request,
    [prom](
        const GmeClient*,
        const DeleteVoicePrintRequest&,
        DeleteVoicePrintOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::DescribeAIConversationOutcome GmeClient::DescribeAIConversation(const DescribeAIConversationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAIConversation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAIConversationResponse rsp = DescribeAIConversationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAIConversationOutcome(rsp);
        else
            return DescribeAIConversationOutcome(o.GetError());
    }
    else
    {
        return DescribeAIConversationOutcome(outcome.GetError());
    }
}

void GmeClient::DescribeAIConversationAsync(const DescribeAIConversationRequest& request, const DescribeAIConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAIConversationRequest&;
    using Resp = DescribeAIConversationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAIConversation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::DescribeAIConversationOutcomeCallable GmeClient::DescribeAIConversationCallable(const DescribeAIConversationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAIConversationOutcome>>();
    DescribeAIConversationAsync(
    request,
    [prom](
        const GmeClient*,
        const DescribeAIConversationRequest&,
        DescribeAIConversationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::DescribeAgeDetectTaskOutcome GmeClient::DescribeAgeDetectTask(const DescribeAgeDetectTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgeDetectTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgeDetectTaskResponse rsp = DescribeAgeDetectTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgeDetectTaskOutcome(rsp);
        else
            return DescribeAgeDetectTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeAgeDetectTaskOutcome(outcome.GetError());
    }
}

void GmeClient::DescribeAgeDetectTaskAsync(const DescribeAgeDetectTaskRequest& request, const DescribeAgeDetectTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgeDetectTaskRequest&;
    using Resp = DescribeAgeDetectTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgeDetectTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::DescribeAgeDetectTaskOutcomeCallable GmeClient::DescribeAgeDetectTaskCallable(const DescribeAgeDetectTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgeDetectTaskOutcome>>();
    DescribeAgeDetectTaskAsync(
    request,
    [prom](
        const GmeClient*,
        const DescribeAgeDetectTaskRequest&,
        DescribeAgeDetectTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::DescribeAppStatisticsOutcome GmeClient::DescribeAppStatistics(const DescribeAppStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAppStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAppStatisticsResponse rsp = DescribeAppStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAppStatisticsOutcome(rsp);
        else
            return DescribeAppStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeAppStatisticsOutcome(outcome.GetError());
    }
}

void GmeClient::DescribeAppStatisticsAsync(const DescribeAppStatisticsRequest& request, const DescribeAppStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAppStatisticsRequest&;
    using Resp = DescribeAppStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAppStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::DescribeAppStatisticsOutcomeCallable GmeClient::DescribeAppStatisticsCallable(const DescribeAppStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAppStatisticsOutcome>>();
    DescribeAppStatisticsAsync(
    request,
    [prom](
        const GmeClient*,
        const DescribeAppStatisticsRequest&,
        DescribeAppStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::DescribeApplicationDataOutcome GmeClient::DescribeApplicationData(const DescribeApplicationDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationDataResponse rsp = DescribeApplicationDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationDataOutcome(rsp);
        else
            return DescribeApplicationDataOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationDataOutcome(outcome.GetError());
    }
}

void GmeClient::DescribeApplicationDataAsync(const DescribeApplicationDataRequest& request, const DescribeApplicationDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApplicationDataRequest&;
    using Resp = DescribeApplicationDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::DescribeApplicationDataOutcomeCallable GmeClient::DescribeApplicationDataCallable(const DescribeApplicationDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationDataOutcome>>();
    DescribeApplicationDataAsync(
    request,
    [prom](
        const GmeClient*,
        const DescribeApplicationDataRequest&,
        DescribeApplicationDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::DescribeApplicationListOutcome GmeClient::DescribeApplicationList(const DescribeApplicationListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationListResponse rsp = DescribeApplicationListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationListOutcome(rsp);
        else
            return DescribeApplicationListOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationListOutcome(outcome.GetError());
    }
}

void GmeClient::DescribeApplicationListAsync(const DescribeApplicationListRequest& request, const DescribeApplicationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApplicationListRequest&;
    using Resp = DescribeApplicationListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::DescribeApplicationListOutcomeCallable GmeClient::DescribeApplicationListCallable(const DescribeApplicationListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationListOutcome>>();
    DescribeApplicationListAsync(
    request,
    [prom](
        const GmeClient*,
        const DescribeApplicationListRequest&,
        DescribeApplicationListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::DescribeAuditResultExternalOutcome GmeClient::DescribeAuditResultExternal(const DescribeAuditResultExternalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditResultExternal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditResultExternalResponse rsp = DescribeAuditResultExternalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditResultExternalOutcome(rsp);
        else
            return DescribeAuditResultExternalOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditResultExternalOutcome(outcome.GetError());
    }
}

void GmeClient::DescribeAuditResultExternalAsync(const DescribeAuditResultExternalRequest& request, const DescribeAuditResultExternalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAuditResultExternalRequest&;
    using Resp = DescribeAuditResultExternalResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAuditResultExternal", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::DescribeAuditResultExternalOutcomeCallable GmeClient::DescribeAuditResultExternalCallable(const DescribeAuditResultExternalRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuditResultExternalOutcome>>();
    DescribeAuditResultExternalAsync(
    request,
    [prom](
        const GmeClient*,
        const DescribeAuditResultExternalRequest&,
        DescribeAuditResultExternalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::DescribeRealtimeScanConfigOutcome GmeClient::DescribeRealtimeScanConfig(const DescribeRealtimeScanConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRealtimeScanConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRealtimeScanConfigResponse rsp = DescribeRealtimeScanConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRealtimeScanConfigOutcome(rsp);
        else
            return DescribeRealtimeScanConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeRealtimeScanConfigOutcome(outcome.GetError());
    }
}

void GmeClient::DescribeRealtimeScanConfigAsync(const DescribeRealtimeScanConfigRequest& request, const DescribeRealtimeScanConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRealtimeScanConfigRequest&;
    using Resp = DescribeRealtimeScanConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRealtimeScanConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::DescribeRealtimeScanConfigOutcomeCallable GmeClient::DescribeRealtimeScanConfigCallable(const DescribeRealtimeScanConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRealtimeScanConfigOutcome>>();
    DescribeRealtimeScanConfigAsync(
    request,
    [prom](
        const GmeClient*,
        const DescribeRealtimeScanConfigRequest&,
        DescribeRealtimeScanConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::DescribeRecordInfoOutcome GmeClient::DescribeRecordInfo(const DescribeRecordInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordInfoResponse rsp = DescribeRecordInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordInfoOutcome(rsp);
        else
            return DescribeRecordInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordInfoOutcome(outcome.GetError());
    }
}

void GmeClient::DescribeRecordInfoAsync(const DescribeRecordInfoRequest& request, const DescribeRecordInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordInfoRequest&;
    using Resp = DescribeRecordInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::DescribeRecordInfoOutcomeCallable GmeClient::DescribeRecordInfoCallable(const DescribeRecordInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordInfoOutcome>>();
    DescribeRecordInfoAsync(
    request,
    [prom](
        const GmeClient*,
        const DescribeRecordInfoRequest&,
        DescribeRecordInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::DescribeRoomInfoOutcome GmeClient::DescribeRoomInfo(const DescribeRoomInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoomInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoomInfoResponse rsp = DescribeRoomInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoomInfoOutcome(rsp);
        else
            return DescribeRoomInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeRoomInfoOutcome(outcome.GetError());
    }
}

void GmeClient::DescribeRoomInfoAsync(const DescribeRoomInfoRequest& request, const DescribeRoomInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRoomInfoRequest&;
    using Resp = DescribeRoomInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRoomInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::DescribeRoomInfoOutcomeCallable GmeClient::DescribeRoomInfoCallable(const DescribeRoomInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRoomInfoOutcome>>();
    DescribeRoomInfoAsync(
    request,
    [prom](
        const GmeClient*,
        const DescribeRoomInfoRequest&,
        DescribeRoomInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::DescribeScanResultListOutcome GmeClient::DescribeScanResultList(const DescribeScanResultListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanResultList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanResultListResponse rsp = DescribeScanResultListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanResultListOutcome(rsp);
        else
            return DescribeScanResultListOutcome(o.GetError());
    }
    else
    {
        return DescribeScanResultListOutcome(outcome.GetError());
    }
}

void GmeClient::DescribeScanResultListAsync(const DescribeScanResultListRequest& request, const DescribeScanResultListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScanResultListRequest&;
    using Resp = DescribeScanResultListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScanResultList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::DescribeScanResultListOutcomeCallable GmeClient::DescribeScanResultListCallable(const DescribeScanResultListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScanResultListOutcome>>();
    DescribeScanResultListAsync(
    request,
    [prom](
        const GmeClient*,
        const DescribeScanResultListRequest&,
        DescribeScanResultListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::DescribeTaskInfoOutcome GmeClient::DescribeTaskInfo(const DescribeTaskInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskInfoResponse rsp = DescribeTaskInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskInfoOutcome(rsp);
        else
            return DescribeTaskInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskInfoOutcome(outcome.GetError());
    }
}

void GmeClient::DescribeTaskInfoAsync(const DescribeTaskInfoRequest& request, const DescribeTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskInfoRequest&;
    using Resp = DescribeTaskInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::DescribeTaskInfoOutcomeCallable GmeClient::DescribeTaskInfoCallable(const DescribeTaskInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskInfoOutcome>>();
    DescribeTaskInfoAsync(
    request,
    [prom](
        const GmeClient*,
        const DescribeTaskInfoRequest&,
        DescribeTaskInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::DescribeUserInAndOutTimeOutcome GmeClient::DescribeUserInAndOutTime(const DescribeUserInAndOutTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserInAndOutTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserInAndOutTimeResponse rsp = DescribeUserInAndOutTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserInAndOutTimeOutcome(rsp);
        else
            return DescribeUserInAndOutTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeUserInAndOutTimeOutcome(outcome.GetError());
    }
}

void GmeClient::DescribeUserInAndOutTimeAsync(const DescribeUserInAndOutTimeRequest& request, const DescribeUserInAndOutTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserInAndOutTimeRequest&;
    using Resp = DescribeUserInAndOutTimeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserInAndOutTime", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::DescribeUserInAndOutTimeOutcomeCallable GmeClient::DescribeUserInAndOutTimeCallable(const DescribeUserInAndOutTimeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserInAndOutTimeOutcome>>();
    DescribeUserInAndOutTimeAsync(
    request,
    [prom](
        const GmeClient*,
        const DescribeUserInAndOutTimeRequest&,
        DescribeUserInAndOutTimeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::DescribeVoicePrintOutcome GmeClient::DescribeVoicePrint(const DescribeVoicePrintRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVoicePrint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVoicePrintResponse rsp = DescribeVoicePrintResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVoicePrintOutcome(rsp);
        else
            return DescribeVoicePrintOutcome(o.GetError());
    }
    else
    {
        return DescribeVoicePrintOutcome(outcome.GetError());
    }
}

void GmeClient::DescribeVoicePrintAsync(const DescribeVoicePrintRequest& request, const DescribeVoicePrintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVoicePrintRequest&;
    using Resp = DescribeVoicePrintResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVoicePrint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::DescribeVoicePrintOutcomeCallable GmeClient::DescribeVoicePrintCallable(const DescribeVoicePrintRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVoicePrintOutcome>>();
    DescribeVoicePrintAsync(
    request,
    [prom](
        const GmeClient*,
        const DescribeVoicePrintRequest&,
        DescribeVoicePrintOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::GetCustomizationListOutcome GmeClient::GetCustomizationList(const GetCustomizationListRequest &request)
{
    auto outcome = MakeRequest(request, "GetCustomizationList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCustomizationListResponse rsp = GetCustomizationListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCustomizationListOutcome(rsp);
        else
            return GetCustomizationListOutcome(o.GetError());
    }
    else
    {
        return GetCustomizationListOutcome(outcome.GetError());
    }
}

void GmeClient::GetCustomizationListAsync(const GetCustomizationListRequest& request, const GetCustomizationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetCustomizationListRequest&;
    using Resp = GetCustomizationListResponse;

    DoRequestAsync<Req, Resp>(
        "GetCustomizationList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::GetCustomizationListOutcomeCallable GmeClient::GetCustomizationListCallable(const GetCustomizationListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetCustomizationListOutcome>>();
    GetCustomizationListAsync(
    request,
    [prom](
        const GmeClient*,
        const GetCustomizationListRequest&,
        GetCustomizationListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::ModifyAppStatusOutcome GmeClient::ModifyAppStatus(const ModifyAppStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAppStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAppStatusResponse rsp = ModifyAppStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAppStatusOutcome(rsp);
        else
            return ModifyAppStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyAppStatusOutcome(outcome.GetError());
    }
}

void GmeClient::ModifyAppStatusAsync(const ModifyAppStatusRequest& request, const ModifyAppStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAppStatusRequest&;
    using Resp = ModifyAppStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAppStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::ModifyAppStatusOutcomeCallable GmeClient::ModifyAppStatusCallable(const ModifyAppStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAppStatusOutcome>>();
    ModifyAppStatusAsync(
    request,
    [prom](
        const GmeClient*,
        const ModifyAppStatusRequest&,
        ModifyAppStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::ModifyCustomizationOutcome GmeClient::ModifyCustomization(const ModifyCustomizationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCustomization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCustomizationResponse rsp = ModifyCustomizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCustomizationOutcome(rsp);
        else
            return ModifyCustomizationOutcome(o.GetError());
    }
    else
    {
        return ModifyCustomizationOutcome(outcome.GetError());
    }
}

void GmeClient::ModifyCustomizationAsync(const ModifyCustomizationRequest& request, const ModifyCustomizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCustomizationRequest&;
    using Resp = ModifyCustomizationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCustomization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::ModifyCustomizationOutcomeCallable GmeClient::ModifyCustomizationCallable(const ModifyCustomizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCustomizationOutcome>>();
    ModifyCustomizationAsync(
    request,
    [prom](
        const GmeClient*,
        const ModifyCustomizationRequest&,
        ModifyCustomizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::ModifyCustomizationStateOutcome GmeClient::ModifyCustomizationState(const ModifyCustomizationStateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCustomizationState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCustomizationStateResponse rsp = ModifyCustomizationStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCustomizationStateOutcome(rsp);
        else
            return ModifyCustomizationStateOutcome(o.GetError());
    }
    else
    {
        return ModifyCustomizationStateOutcome(outcome.GetError());
    }
}

void GmeClient::ModifyCustomizationStateAsync(const ModifyCustomizationStateRequest& request, const ModifyCustomizationStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCustomizationStateRequest&;
    using Resp = ModifyCustomizationStateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCustomizationState", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::ModifyCustomizationStateOutcomeCallable GmeClient::ModifyCustomizationStateCallable(const ModifyCustomizationStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCustomizationStateOutcome>>();
    ModifyCustomizationStateAsync(
    request,
    [prom](
        const GmeClient*,
        const ModifyCustomizationStateRequest&,
        ModifyCustomizationStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::ModifyRecordInfoOutcome GmeClient::ModifyRecordInfo(const ModifyRecordInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecordInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordInfoResponse rsp = ModifyRecordInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordInfoOutcome(rsp);
        else
            return ModifyRecordInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordInfoOutcome(outcome.GetError());
    }
}

void GmeClient::ModifyRecordInfoAsync(const ModifyRecordInfoRequest& request, const ModifyRecordInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRecordInfoRequest&;
    using Resp = ModifyRecordInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRecordInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::ModifyRecordInfoOutcomeCallable GmeClient::ModifyRecordInfoCallable(const ModifyRecordInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRecordInfoOutcome>>();
    ModifyRecordInfoAsync(
    request,
    [prom](
        const GmeClient*,
        const ModifyRecordInfoRequest&,
        ModifyRecordInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::ModifyUserMicStatusOutcome GmeClient::ModifyUserMicStatus(const ModifyUserMicStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserMicStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserMicStatusResponse rsp = ModifyUserMicStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserMicStatusOutcome(rsp);
        else
            return ModifyUserMicStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyUserMicStatusOutcome(outcome.GetError());
    }
}

void GmeClient::ModifyUserMicStatusAsync(const ModifyUserMicStatusRequest& request, const ModifyUserMicStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyUserMicStatusRequest&;
    using Resp = ModifyUserMicStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUserMicStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::ModifyUserMicStatusOutcomeCallable GmeClient::ModifyUserMicStatusCallable(const ModifyUserMicStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserMicStatusOutcome>>();
    ModifyUserMicStatusAsync(
    request,
    [prom](
        const GmeClient*,
        const ModifyUserMicStatusRequest&,
        ModifyUserMicStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::RegisterVoicePrintOutcome GmeClient::RegisterVoicePrint(const RegisterVoicePrintRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterVoicePrint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterVoicePrintResponse rsp = RegisterVoicePrintResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterVoicePrintOutcome(rsp);
        else
            return RegisterVoicePrintOutcome(o.GetError());
    }
    else
    {
        return RegisterVoicePrintOutcome(outcome.GetError());
    }
}

void GmeClient::RegisterVoicePrintAsync(const RegisterVoicePrintRequest& request, const RegisterVoicePrintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RegisterVoicePrintRequest&;
    using Resp = RegisterVoicePrintResponse;

    DoRequestAsync<Req, Resp>(
        "RegisterVoicePrint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::RegisterVoicePrintOutcomeCallable GmeClient::RegisterVoicePrintCallable(const RegisterVoicePrintRequest &request)
{
    const auto prom = std::make_shared<std::promise<RegisterVoicePrintOutcome>>();
    RegisterVoicePrintAsync(
    request,
    [prom](
        const GmeClient*,
        const RegisterVoicePrintRequest&,
        RegisterVoicePrintOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::ScanVoiceOutcome GmeClient::ScanVoice(const ScanVoiceRequest &request)
{
    auto outcome = MakeRequest(request, "ScanVoice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScanVoiceResponse rsp = ScanVoiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScanVoiceOutcome(rsp);
        else
            return ScanVoiceOutcome(o.GetError());
    }
    else
    {
        return ScanVoiceOutcome(outcome.GetError());
    }
}

void GmeClient::ScanVoiceAsync(const ScanVoiceRequest& request, const ScanVoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ScanVoiceRequest&;
    using Resp = ScanVoiceResponse;

    DoRequestAsync<Req, Resp>(
        "ScanVoice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::ScanVoiceOutcomeCallable GmeClient::ScanVoiceCallable(const ScanVoiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ScanVoiceOutcome>>();
    ScanVoiceAsync(
    request,
    [prom](
        const GmeClient*,
        const ScanVoiceRequest&,
        ScanVoiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::StartAIConversationOutcome GmeClient::StartAIConversation(const StartAIConversationRequest &request)
{
    auto outcome = MakeRequest(request, "StartAIConversation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartAIConversationResponse rsp = StartAIConversationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartAIConversationOutcome(rsp);
        else
            return StartAIConversationOutcome(o.GetError());
    }
    else
    {
        return StartAIConversationOutcome(outcome.GetError());
    }
}

void GmeClient::StartAIConversationAsync(const StartAIConversationRequest& request, const StartAIConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartAIConversationRequest&;
    using Resp = StartAIConversationResponse;

    DoRequestAsync<Req, Resp>(
        "StartAIConversation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::StartAIConversationOutcomeCallable GmeClient::StartAIConversationCallable(const StartAIConversationRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartAIConversationOutcome>>();
    StartAIConversationAsync(
    request,
    [prom](
        const GmeClient*,
        const StartAIConversationRequest&,
        StartAIConversationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::StartRecordOutcome GmeClient::StartRecord(const StartRecordRequest &request)
{
    auto outcome = MakeRequest(request, "StartRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartRecordResponse rsp = StartRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartRecordOutcome(rsp);
        else
            return StartRecordOutcome(o.GetError());
    }
    else
    {
        return StartRecordOutcome(outcome.GetError());
    }
}

void GmeClient::StartRecordAsync(const StartRecordRequest& request, const StartRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartRecordRequest&;
    using Resp = StartRecordResponse;

    DoRequestAsync<Req, Resp>(
        "StartRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::StartRecordOutcomeCallable GmeClient::StartRecordCallable(const StartRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartRecordOutcome>>();
    StartRecordAsync(
    request,
    [prom](
        const GmeClient*,
        const StartRecordRequest&,
        StartRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::StopAIConversationOutcome GmeClient::StopAIConversation(const StopAIConversationRequest &request)
{
    auto outcome = MakeRequest(request, "StopAIConversation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopAIConversationResponse rsp = StopAIConversationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopAIConversationOutcome(rsp);
        else
            return StopAIConversationOutcome(o.GetError());
    }
    else
    {
        return StopAIConversationOutcome(outcome.GetError());
    }
}

void GmeClient::StopAIConversationAsync(const StopAIConversationRequest& request, const StopAIConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopAIConversationRequest&;
    using Resp = StopAIConversationResponse;

    DoRequestAsync<Req, Resp>(
        "StopAIConversation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::StopAIConversationOutcomeCallable GmeClient::StopAIConversationCallable(const StopAIConversationRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopAIConversationOutcome>>();
    StopAIConversationAsync(
    request,
    [prom](
        const GmeClient*,
        const StopAIConversationRequest&,
        StopAIConversationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::StopRecordOutcome GmeClient::StopRecord(const StopRecordRequest &request)
{
    auto outcome = MakeRequest(request, "StopRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopRecordResponse rsp = StopRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopRecordOutcome(rsp);
        else
            return StopRecordOutcome(o.GetError());
    }
    else
    {
        return StopRecordOutcome(outcome.GetError());
    }
}

void GmeClient::StopRecordAsync(const StopRecordRequest& request, const StopRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopRecordRequest&;
    using Resp = StopRecordResponse;

    DoRequestAsync<Req, Resp>(
        "StopRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::StopRecordOutcomeCallable GmeClient::StopRecordCallable(const StopRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopRecordOutcome>>();
    StopRecordAsync(
    request,
    [prom](
        const GmeClient*,
        const StopRecordRequest&,
        StopRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::UpdateAIConversationOutcome GmeClient::UpdateAIConversation(const UpdateAIConversationRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAIConversation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAIConversationResponse rsp = UpdateAIConversationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAIConversationOutcome(rsp);
        else
            return UpdateAIConversationOutcome(o.GetError());
    }
    else
    {
        return UpdateAIConversationOutcome(outcome.GetError());
    }
}

void GmeClient::UpdateAIConversationAsync(const UpdateAIConversationRequest& request, const UpdateAIConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateAIConversationRequest&;
    using Resp = UpdateAIConversationResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAIConversation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::UpdateAIConversationOutcomeCallable GmeClient::UpdateAIConversationCallable(const UpdateAIConversationRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAIConversationOutcome>>();
    UpdateAIConversationAsync(
    request,
    [prom](
        const GmeClient*,
        const UpdateAIConversationRequest&,
        UpdateAIConversationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::UpdateScanRoomsOutcome GmeClient::UpdateScanRooms(const UpdateScanRoomsRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateScanRooms");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateScanRoomsResponse rsp = UpdateScanRoomsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateScanRoomsOutcome(rsp);
        else
            return UpdateScanRoomsOutcome(o.GetError());
    }
    else
    {
        return UpdateScanRoomsOutcome(outcome.GetError());
    }
}

void GmeClient::UpdateScanRoomsAsync(const UpdateScanRoomsRequest& request, const UpdateScanRoomsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateScanRoomsRequest&;
    using Resp = UpdateScanRoomsResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateScanRooms", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::UpdateScanRoomsOutcomeCallable GmeClient::UpdateScanRoomsCallable(const UpdateScanRoomsRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateScanRoomsOutcome>>();
    UpdateScanRoomsAsync(
    request,
    [prom](
        const GmeClient*,
        const UpdateScanRoomsRequest&,
        UpdateScanRoomsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::UpdateScanUsersOutcome GmeClient::UpdateScanUsers(const UpdateScanUsersRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateScanUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateScanUsersResponse rsp = UpdateScanUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateScanUsersOutcome(rsp);
        else
            return UpdateScanUsersOutcome(o.GetError());
    }
    else
    {
        return UpdateScanUsersOutcome(outcome.GetError());
    }
}

void GmeClient::UpdateScanUsersAsync(const UpdateScanUsersRequest& request, const UpdateScanUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateScanUsersRequest&;
    using Resp = UpdateScanUsersResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateScanUsers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::UpdateScanUsersOutcomeCallable GmeClient::UpdateScanUsersCallable(const UpdateScanUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateScanUsersOutcome>>();
    UpdateScanUsersAsync(
    request,
    [prom](
        const GmeClient*,
        const UpdateScanUsersRequest&,
        UpdateScanUsersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GmeClient::UpdateVoicePrintOutcome GmeClient::UpdateVoicePrint(const UpdateVoicePrintRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateVoicePrint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateVoicePrintResponse rsp = UpdateVoicePrintResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateVoicePrintOutcome(rsp);
        else
            return UpdateVoicePrintOutcome(o.GetError());
    }
    else
    {
        return UpdateVoicePrintOutcome(outcome.GetError());
    }
}

void GmeClient::UpdateVoicePrintAsync(const UpdateVoicePrintRequest& request, const UpdateVoicePrintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateVoicePrintRequest&;
    using Resp = UpdateVoicePrintResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateVoicePrint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GmeClient::UpdateVoicePrintOutcomeCallable GmeClient::UpdateVoicePrintCallable(const UpdateVoicePrintRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateVoicePrintOutcome>>();
    UpdateVoicePrintAsync(
    request,
    [prom](
        const GmeClient*,
        const UpdateVoicePrintRequest&,
        UpdateVoicePrintOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

