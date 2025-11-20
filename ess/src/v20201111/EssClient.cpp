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

#include <tencentcloud/ess/v20201111/EssClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ess::V20201111;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-11-11";
    const string ENDPOINT = "ess.tencentcloudapi.com";
}

EssClient::EssClient(const Credential &credential, const string &region) :
    EssClient(credential, region, ClientProfile())
{
}

EssClient::EssClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EssClient::ArchiveDynamicFlowOutcome EssClient::ArchiveDynamicFlow(const ArchiveDynamicFlowRequest &request)
{
    auto outcome = MakeRequest(request, "ArchiveDynamicFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ArchiveDynamicFlowResponse rsp = ArchiveDynamicFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ArchiveDynamicFlowOutcome(rsp);
        else
            return ArchiveDynamicFlowOutcome(o.GetError());
    }
    else
    {
        return ArchiveDynamicFlowOutcome(outcome.GetError());
    }
}

void EssClient::ArchiveDynamicFlowAsync(const ArchiveDynamicFlowRequest& request, const ArchiveDynamicFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ArchiveDynamicFlowRequest&;
    using Resp = ArchiveDynamicFlowResponse;

    DoRequestAsync<Req, Resp>(
        "ArchiveDynamicFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::ArchiveDynamicFlowOutcomeCallable EssClient::ArchiveDynamicFlowCallable(const ArchiveDynamicFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<ArchiveDynamicFlowOutcome>>();
    ArchiveDynamicFlowAsync(
    request,
    [prom](
        const EssClient*,
        const ArchiveDynamicFlowRequest&,
        ArchiveDynamicFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::BindEmployeeUserIdWithClientOpenIdOutcome EssClient::BindEmployeeUserIdWithClientOpenId(const BindEmployeeUserIdWithClientOpenIdRequest &request)
{
    auto outcome = MakeRequest(request, "BindEmployeeUserIdWithClientOpenId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindEmployeeUserIdWithClientOpenIdResponse rsp = BindEmployeeUserIdWithClientOpenIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindEmployeeUserIdWithClientOpenIdOutcome(rsp);
        else
            return BindEmployeeUserIdWithClientOpenIdOutcome(o.GetError());
    }
    else
    {
        return BindEmployeeUserIdWithClientOpenIdOutcome(outcome.GetError());
    }
}

void EssClient::BindEmployeeUserIdWithClientOpenIdAsync(const BindEmployeeUserIdWithClientOpenIdRequest& request, const BindEmployeeUserIdWithClientOpenIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindEmployeeUserIdWithClientOpenIdRequest&;
    using Resp = BindEmployeeUserIdWithClientOpenIdResponse;

    DoRequestAsync<Req, Resp>(
        "BindEmployeeUserIdWithClientOpenId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::BindEmployeeUserIdWithClientOpenIdOutcomeCallable EssClient::BindEmployeeUserIdWithClientOpenIdCallable(const BindEmployeeUserIdWithClientOpenIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindEmployeeUserIdWithClientOpenIdOutcome>>();
    BindEmployeeUserIdWithClientOpenIdAsync(
    request,
    [prom](
        const EssClient*,
        const BindEmployeeUserIdWithClientOpenIdRequest&,
        BindEmployeeUserIdWithClientOpenIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CancelFlowOutcome EssClient::CancelFlow(const CancelFlowRequest &request)
{
    auto outcome = MakeRequest(request, "CancelFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelFlowResponse rsp = CancelFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelFlowOutcome(rsp);
        else
            return CancelFlowOutcome(o.GetError());
    }
    else
    {
        return CancelFlowOutcome(outcome.GetError());
    }
}

void EssClient::CancelFlowAsync(const CancelFlowRequest& request, const CancelFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelFlowRequest&;
    using Resp = CancelFlowResponse;

    DoRequestAsync<Req, Resp>(
        "CancelFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CancelFlowOutcomeCallable EssClient::CancelFlowCallable(const CancelFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelFlowOutcome>>();
    CancelFlowAsync(
    request,
    [prom](
        const EssClient*,
        const CancelFlowRequest&,
        CancelFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CancelMultiFlowSignQRCodeOutcome EssClient::CancelMultiFlowSignQRCode(const CancelMultiFlowSignQRCodeRequest &request)
{
    auto outcome = MakeRequest(request, "CancelMultiFlowSignQRCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelMultiFlowSignQRCodeResponse rsp = CancelMultiFlowSignQRCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelMultiFlowSignQRCodeOutcome(rsp);
        else
            return CancelMultiFlowSignQRCodeOutcome(o.GetError());
    }
    else
    {
        return CancelMultiFlowSignQRCodeOutcome(outcome.GetError());
    }
}

void EssClient::CancelMultiFlowSignQRCodeAsync(const CancelMultiFlowSignQRCodeRequest& request, const CancelMultiFlowSignQRCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelMultiFlowSignQRCodeRequest&;
    using Resp = CancelMultiFlowSignQRCodeResponse;

    DoRequestAsync<Req, Resp>(
        "CancelMultiFlowSignQRCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CancelMultiFlowSignQRCodeOutcomeCallable EssClient::CancelMultiFlowSignQRCodeCallable(const CancelMultiFlowSignQRCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelMultiFlowSignQRCodeOutcome>>();
    CancelMultiFlowSignQRCodeAsync(
    request,
    [prom](
        const EssClient*,
        const CancelMultiFlowSignQRCodeRequest&,
        CancelMultiFlowSignQRCodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CancelUserAutoSignEnableUrlOutcome EssClient::CancelUserAutoSignEnableUrl(const CancelUserAutoSignEnableUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CancelUserAutoSignEnableUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelUserAutoSignEnableUrlResponse rsp = CancelUserAutoSignEnableUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelUserAutoSignEnableUrlOutcome(rsp);
        else
            return CancelUserAutoSignEnableUrlOutcome(o.GetError());
    }
    else
    {
        return CancelUserAutoSignEnableUrlOutcome(outcome.GetError());
    }
}

void EssClient::CancelUserAutoSignEnableUrlAsync(const CancelUserAutoSignEnableUrlRequest& request, const CancelUserAutoSignEnableUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelUserAutoSignEnableUrlRequest&;
    using Resp = CancelUserAutoSignEnableUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CancelUserAutoSignEnableUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CancelUserAutoSignEnableUrlOutcomeCallable EssClient::CancelUserAutoSignEnableUrlCallable(const CancelUserAutoSignEnableUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelUserAutoSignEnableUrlOutcome>>();
    CancelUserAutoSignEnableUrlAsync(
    request,
    [prom](
        const EssClient*,
        const CancelUserAutoSignEnableUrlRequest&,
        CancelUserAutoSignEnableUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateBatchAdminChangeInvitationsOutcome EssClient::CreateBatchAdminChangeInvitations(const CreateBatchAdminChangeInvitationsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBatchAdminChangeInvitations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBatchAdminChangeInvitationsResponse rsp = CreateBatchAdminChangeInvitationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBatchAdminChangeInvitationsOutcome(rsp);
        else
            return CreateBatchAdminChangeInvitationsOutcome(o.GetError());
    }
    else
    {
        return CreateBatchAdminChangeInvitationsOutcome(outcome.GetError());
    }
}

void EssClient::CreateBatchAdminChangeInvitationsAsync(const CreateBatchAdminChangeInvitationsRequest& request, const CreateBatchAdminChangeInvitationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBatchAdminChangeInvitationsRequest&;
    using Resp = CreateBatchAdminChangeInvitationsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBatchAdminChangeInvitations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateBatchAdminChangeInvitationsOutcomeCallable EssClient::CreateBatchAdminChangeInvitationsCallable(const CreateBatchAdminChangeInvitationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBatchAdminChangeInvitationsOutcome>>();
    CreateBatchAdminChangeInvitationsAsync(
    request,
    [prom](
        const EssClient*,
        const CreateBatchAdminChangeInvitationsRequest&,
        CreateBatchAdminChangeInvitationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateBatchAdminChangeInvitationsUrlOutcome EssClient::CreateBatchAdminChangeInvitationsUrl(const CreateBatchAdminChangeInvitationsUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBatchAdminChangeInvitationsUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBatchAdminChangeInvitationsUrlResponse rsp = CreateBatchAdminChangeInvitationsUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBatchAdminChangeInvitationsUrlOutcome(rsp);
        else
            return CreateBatchAdminChangeInvitationsUrlOutcome(o.GetError());
    }
    else
    {
        return CreateBatchAdminChangeInvitationsUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateBatchAdminChangeInvitationsUrlAsync(const CreateBatchAdminChangeInvitationsUrlRequest& request, const CreateBatchAdminChangeInvitationsUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBatchAdminChangeInvitationsUrlRequest&;
    using Resp = CreateBatchAdminChangeInvitationsUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBatchAdminChangeInvitationsUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateBatchAdminChangeInvitationsUrlOutcomeCallable EssClient::CreateBatchAdminChangeInvitationsUrlCallable(const CreateBatchAdminChangeInvitationsUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBatchAdminChangeInvitationsUrlOutcome>>();
    CreateBatchAdminChangeInvitationsUrlAsync(
    request,
    [prom](
        const EssClient*,
        const CreateBatchAdminChangeInvitationsUrlRequest&,
        CreateBatchAdminChangeInvitationsUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateBatchCancelFlowUrlOutcome EssClient::CreateBatchCancelFlowUrl(const CreateBatchCancelFlowUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBatchCancelFlowUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBatchCancelFlowUrlResponse rsp = CreateBatchCancelFlowUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBatchCancelFlowUrlOutcome(rsp);
        else
            return CreateBatchCancelFlowUrlOutcome(o.GetError());
    }
    else
    {
        return CreateBatchCancelFlowUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateBatchCancelFlowUrlAsync(const CreateBatchCancelFlowUrlRequest& request, const CreateBatchCancelFlowUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBatchCancelFlowUrlRequest&;
    using Resp = CreateBatchCancelFlowUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBatchCancelFlowUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateBatchCancelFlowUrlOutcomeCallable EssClient::CreateBatchCancelFlowUrlCallable(const CreateBatchCancelFlowUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBatchCancelFlowUrlOutcome>>();
    CreateBatchCancelFlowUrlAsync(
    request,
    [prom](
        const EssClient*,
        const CreateBatchCancelFlowUrlRequest&,
        CreateBatchCancelFlowUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateBatchContractReviewTaskOutcome EssClient::CreateBatchContractReviewTask(const CreateBatchContractReviewTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBatchContractReviewTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBatchContractReviewTaskResponse rsp = CreateBatchContractReviewTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBatchContractReviewTaskOutcome(rsp);
        else
            return CreateBatchContractReviewTaskOutcome(o.GetError());
    }
    else
    {
        return CreateBatchContractReviewTaskOutcome(outcome.GetError());
    }
}

void EssClient::CreateBatchContractReviewTaskAsync(const CreateBatchContractReviewTaskRequest& request, const CreateBatchContractReviewTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBatchContractReviewTaskRequest&;
    using Resp = CreateBatchContractReviewTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBatchContractReviewTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateBatchContractReviewTaskOutcomeCallable EssClient::CreateBatchContractReviewTaskCallable(const CreateBatchContractReviewTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBatchContractReviewTaskOutcome>>();
    CreateBatchContractReviewTaskAsync(
    request,
    [prom](
        const EssClient*,
        const CreateBatchContractReviewTaskRequest&,
        CreateBatchContractReviewTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateBatchInformationExtractionTaskOutcome EssClient::CreateBatchInformationExtractionTask(const CreateBatchInformationExtractionTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBatchInformationExtractionTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBatchInformationExtractionTaskResponse rsp = CreateBatchInformationExtractionTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBatchInformationExtractionTaskOutcome(rsp);
        else
            return CreateBatchInformationExtractionTaskOutcome(o.GetError());
    }
    else
    {
        return CreateBatchInformationExtractionTaskOutcome(outcome.GetError());
    }
}

void EssClient::CreateBatchInformationExtractionTaskAsync(const CreateBatchInformationExtractionTaskRequest& request, const CreateBatchInformationExtractionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBatchInformationExtractionTaskRequest&;
    using Resp = CreateBatchInformationExtractionTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBatchInformationExtractionTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateBatchInformationExtractionTaskOutcomeCallable EssClient::CreateBatchInformationExtractionTaskCallable(const CreateBatchInformationExtractionTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBatchInformationExtractionTaskOutcome>>();
    CreateBatchInformationExtractionTaskAsync(
    request,
    [prom](
        const EssClient*,
        const CreateBatchInformationExtractionTaskRequest&,
        CreateBatchInformationExtractionTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateBatchInitOrganizationUrlOutcome EssClient::CreateBatchInitOrganizationUrl(const CreateBatchInitOrganizationUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBatchInitOrganizationUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBatchInitOrganizationUrlResponse rsp = CreateBatchInitOrganizationUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBatchInitOrganizationUrlOutcome(rsp);
        else
            return CreateBatchInitOrganizationUrlOutcome(o.GetError());
    }
    else
    {
        return CreateBatchInitOrganizationUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateBatchInitOrganizationUrlAsync(const CreateBatchInitOrganizationUrlRequest& request, const CreateBatchInitOrganizationUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBatchInitOrganizationUrlRequest&;
    using Resp = CreateBatchInitOrganizationUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBatchInitOrganizationUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateBatchInitOrganizationUrlOutcomeCallable EssClient::CreateBatchInitOrganizationUrlCallable(const CreateBatchInitOrganizationUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBatchInitOrganizationUrlOutcome>>();
    CreateBatchInitOrganizationUrlAsync(
    request,
    [prom](
        const EssClient*,
        const CreateBatchInitOrganizationUrlRequest&,
        CreateBatchInitOrganizationUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateBatchOrganizationAuthorizationUrlOutcome EssClient::CreateBatchOrganizationAuthorizationUrl(const CreateBatchOrganizationAuthorizationUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBatchOrganizationAuthorizationUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBatchOrganizationAuthorizationUrlResponse rsp = CreateBatchOrganizationAuthorizationUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBatchOrganizationAuthorizationUrlOutcome(rsp);
        else
            return CreateBatchOrganizationAuthorizationUrlOutcome(o.GetError());
    }
    else
    {
        return CreateBatchOrganizationAuthorizationUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateBatchOrganizationAuthorizationUrlAsync(const CreateBatchOrganizationAuthorizationUrlRequest& request, const CreateBatchOrganizationAuthorizationUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBatchOrganizationAuthorizationUrlRequest&;
    using Resp = CreateBatchOrganizationAuthorizationUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBatchOrganizationAuthorizationUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateBatchOrganizationAuthorizationUrlOutcomeCallable EssClient::CreateBatchOrganizationAuthorizationUrlCallable(const CreateBatchOrganizationAuthorizationUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBatchOrganizationAuthorizationUrlOutcome>>();
    CreateBatchOrganizationAuthorizationUrlAsync(
    request,
    [prom](
        const EssClient*,
        const CreateBatchOrganizationAuthorizationUrlRequest&,
        CreateBatchOrganizationAuthorizationUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateBatchOrganizationRegistrationTasksOutcome EssClient::CreateBatchOrganizationRegistrationTasks(const CreateBatchOrganizationRegistrationTasksRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBatchOrganizationRegistrationTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBatchOrganizationRegistrationTasksResponse rsp = CreateBatchOrganizationRegistrationTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBatchOrganizationRegistrationTasksOutcome(rsp);
        else
            return CreateBatchOrganizationRegistrationTasksOutcome(o.GetError());
    }
    else
    {
        return CreateBatchOrganizationRegistrationTasksOutcome(outcome.GetError());
    }
}

void EssClient::CreateBatchOrganizationRegistrationTasksAsync(const CreateBatchOrganizationRegistrationTasksRequest& request, const CreateBatchOrganizationRegistrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBatchOrganizationRegistrationTasksRequest&;
    using Resp = CreateBatchOrganizationRegistrationTasksResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBatchOrganizationRegistrationTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateBatchOrganizationRegistrationTasksOutcomeCallable EssClient::CreateBatchOrganizationRegistrationTasksCallable(const CreateBatchOrganizationRegistrationTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBatchOrganizationRegistrationTasksOutcome>>();
    CreateBatchOrganizationRegistrationTasksAsync(
    request,
    [prom](
        const EssClient*,
        const CreateBatchOrganizationRegistrationTasksRequest&,
        CreateBatchOrganizationRegistrationTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateBatchQuickSignUrlOutcome EssClient::CreateBatchQuickSignUrl(const CreateBatchQuickSignUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBatchQuickSignUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBatchQuickSignUrlResponse rsp = CreateBatchQuickSignUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBatchQuickSignUrlOutcome(rsp);
        else
            return CreateBatchQuickSignUrlOutcome(o.GetError());
    }
    else
    {
        return CreateBatchQuickSignUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateBatchQuickSignUrlAsync(const CreateBatchQuickSignUrlRequest& request, const CreateBatchQuickSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBatchQuickSignUrlRequest&;
    using Resp = CreateBatchQuickSignUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBatchQuickSignUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateBatchQuickSignUrlOutcomeCallable EssClient::CreateBatchQuickSignUrlCallable(const CreateBatchQuickSignUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBatchQuickSignUrlOutcome>>();
    CreateBatchQuickSignUrlAsync(
    request,
    [prom](
        const EssClient*,
        const CreateBatchQuickSignUrlRequest&,
        CreateBatchQuickSignUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateBatchSignUrlOutcome EssClient::CreateBatchSignUrl(const CreateBatchSignUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBatchSignUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBatchSignUrlResponse rsp = CreateBatchSignUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBatchSignUrlOutcome(rsp);
        else
            return CreateBatchSignUrlOutcome(o.GetError());
    }
    else
    {
        return CreateBatchSignUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateBatchSignUrlAsync(const CreateBatchSignUrlRequest& request, const CreateBatchSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBatchSignUrlRequest&;
    using Resp = CreateBatchSignUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBatchSignUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateBatchSignUrlOutcomeCallable EssClient::CreateBatchSignUrlCallable(const CreateBatchSignUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBatchSignUrlOutcome>>();
    CreateBatchSignUrlAsync(
    request,
    [prom](
        const EssClient*,
        const CreateBatchSignUrlRequest&,
        CreateBatchSignUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateContractComparisonTaskOutcome EssClient::CreateContractComparisonTask(const CreateContractComparisonTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateContractComparisonTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateContractComparisonTaskResponse rsp = CreateContractComparisonTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateContractComparisonTaskOutcome(rsp);
        else
            return CreateContractComparisonTaskOutcome(o.GetError());
    }
    else
    {
        return CreateContractComparisonTaskOutcome(outcome.GetError());
    }
}

void EssClient::CreateContractComparisonTaskAsync(const CreateContractComparisonTaskRequest& request, const CreateContractComparisonTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateContractComparisonTaskRequest&;
    using Resp = CreateContractComparisonTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateContractComparisonTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateContractComparisonTaskOutcomeCallable EssClient::CreateContractComparisonTaskCallable(const CreateContractComparisonTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateContractComparisonTaskOutcome>>();
    CreateContractComparisonTaskAsync(
    request,
    [prom](
        const EssClient*,
        const CreateContractComparisonTaskRequest&,
        CreateContractComparisonTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateContractDiffTaskWebUrlOutcome EssClient::CreateContractDiffTaskWebUrl(const CreateContractDiffTaskWebUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateContractDiffTaskWebUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateContractDiffTaskWebUrlResponse rsp = CreateContractDiffTaskWebUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateContractDiffTaskWebUrlOutcome(rsp);
        else
            return CreateContractDiffTaskWebUrlOutcome(o.GetError());
    }
    else
    {
        return CreateContractDiffTaskWebUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateContractDiffTaskWebUrlAsync(const CreateContractDiffTaskWebUrlRequest& request, const CreateContractDiffTaskWebUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateContractDiffTaskWebUrlRequest&;
    using Resp = CreateContractDiffTaskWebUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateContractDiffTaskWebUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateContractDiffTaskWebUrlOutcomeCallable EssClient::CreateContractDiffTaskWebUrlCallable(const CreateContractDiffTaskWebUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateContractDiffTaskWebUrlOutcome>>();
    CreateContractDiffTaskWebUrlAsync(
    request,
    [prom](
        const EssClient*,
        const CreateContractDiffTaskWebUrlRequest&,
        CreateContractDiffTaskWebUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateContractReviewWebUrlOutcome EssClient::CreateContractReviewWebUrl(const CreateContractReviewWebUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateContractReviewWebUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateContractReviewWebUrlResponse rsp = CreateContractReviewWebUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateContractReviewWebUrlOutcome(rsp);
        else
            return CreateContractReviewWebUrlOutcome(o.GetError());
    }
    else
    {
        return CreateContractReviewWebUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateContractReviewWebUrlAsync(const CreateContractReviewWebUrlRequest& request, const CreateContractReviewWebUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateContractReviewWebUrlRequest&;
    using Resp = CreateContractReviewWebUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateContractReviewWebUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateContractReviewWebUrlOutcomeCallable EssClient::CreateContractReviewWebUrlCallable(const CreateContractReviewWebUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateContractReviewWebUrlOutcome>>();
    CreateContractReviewWebUrlAsync(
    request,
    [prom](
        const EssClient*,
        const CreateContractReviewWebUrlRequest&,
        CreateContractReviewWebUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateConvertTaskApiOutcome EssClient::CreateConvertTaskApi(const CreateConvertTaskApiRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConvertTaskApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConvertTaskApiResponse rsp = CreateConvertTaskApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConvertTaskApiOutcome(rsp);
        else
            return CreateConvertTaskApiOutcome(o.GetError());
    }
    else
    {
        return CreateConvertTaskApiOutcome(outcome.GetError());
    }
}

void EssClient::CreateConvertTaskApiAsync(const CreateConvertTaskApiRequest& request, const CreateConvertTaskApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateConvertTaskApiRequest&;
    using Resp = CreateConvertTaskApiResponse;

    DoRequestAsync<Req, Resp>(
        "CreateConvertTaskApi", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateConvertTaskApiOutcomeCallable EssClient::CreateConvertTaskApiCallable(const CreateConvertTaskApiRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateConvertTaskApiOutcome>>();
    CreateConvertTaskApiAsync(
    request,
    [prom](
        const EssClient*,
        const CreateConvertTaskApiRequest&,
        CreateConvertTaskApiOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateDocumentOutcome EssClient::CreateDocument(const CreateDocumentRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDocument");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDocumentResponse rsp = CreateDocumentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDocumentOutcome(rsp);
        else
            return CreateDocumentOutcome(o.GetError());
    }
    else
    {
        return CreateDocumentOutcome(outcome.GetError());
    }
}

void EssClient::CreateDocumentAsync(const CreateDocumentRequest& request, const CreateDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDocumentRequest&;
    using Resp = CreateDocumentResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDocument", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateDocumentOutcomeCallable EssClient::CreateDocumentCallable(const CreateDocumentRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDocumentOutcome>>();
    CreateDocumentAsync(
    request,
    [prom](
        const EssClient*,
        const CreateDocumentRequest&,
        CreateDocumentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateDynamicFlowApproverOutcome EssClient::CreateDynamicFlowApprover(const CreateDynamicFlowApproverRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDynamicFlowApprover");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDynamicFlowApproverResponse rsp = CreateDynamicFlowApproverResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDynamicFlowApproverOutcome(rsp);
        else
            return CreateDynamicFlowApproverOutcome(o.GetError());
    }
    else
    {
        return CreateDynamicFlowApproverOutcome(outcome.GetError());
    }
}

void EssClient::CreateDynamicFlowApproverAsync(const CreateDynamicFlowApproverRequest& request, const CreateDynamicFlowApproverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDynamicFlowApproverRequest&;
    using Resp = CreateDynamicFlowApproverResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDynamicFlowApprover", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateDynamicFlowApproverOutcomeCallable EssClient::CreateDynamicFlowApproverCallable(const CreateDynamicFlowApproverRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDynamicFlowApproverOutcome>>();
    CreateDynamicFlowApproverAsync(
    request,
    [prom](
        const EssClient*,
        const CreateDynamicFlowApproverRequest&,
        CreateDynamicFlowApproverOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateEmbedWebUrlOutcome EssClient::CreateEmbedWebUrl(const CreateEmbedWebUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEmbedWebUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEmbedWebUrlResponse rsp = CreateEmbedWebUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEmbedWebUrlOutcome(rsp);
        else
            return CreateEmbedWebUrlOutcome(o.GetError());
    }
    else
    {
        return CreateEmbedWebUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateEmbedWebUrlAsync(const CreateEmbedWebUrlRequest& request, const CreateEmbedWebUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEmbedWebUrlRequest&;
    using Resp = CreateEmbedWebUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEmbedWebUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateEmbedWebUrlOutcomeCallable EssClient::CreateEmbedWebUrlCallable(const CreateEmbedWebUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEmbedWebUrlOutcome>>();
    CreateEmbedWebUrlAsync(
    request,
    [prom](
        const EssClient*,
        const CreateEmbedWebUrlRequest&,
        CreateEmbedWebUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateEmployeeChangeUrlOutcome EssClient::CreateEmployeeChangeUrl(const CreateEmployeeChangeUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEmployeeChangeUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEmployeeChangeUrlResponse rsp = CreateEmployeeChangeUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEmployeeChangeUrlOutcome(rsp);
        else
            return CreateEmployeeChangeUrlOutcome(o.GetError());
    }
    else
    {
        return CreateEmployeeChangeUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateEmployeeChangeUrlAsync(const CreateEmployeeChangeUrlRequest& request, const CreateEmployeeChangeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEmployeeChangeUrlRequest&;
    using Resp = CreateEmployeeChangeUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEmployeeChangeUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateEmployeeChangeUrlOutcomeCallable EssClient::CreateEmployeeChangeUrlCallable(const CreateEmployeeChangeUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEmployeeChangeUrlOutcome>>();
    CreateEmployeeChangeUrlAsync(
    request,
    [prom](
        const EssClient*,
        const CreateEmployeeChangeUrlRequest&,
        CreateEmployeeChangeUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateEmployeeQualificationSealQrCodeOutcome EssClient::CreateEmployeeQualificationSealQrCode(const CreateEmployeeQualificationSealQrCodeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEmployeeQualificationSealQrCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEmployeeQualificationSealQrCodeResponse rsp = CreateEmployeeQualificationSealQrCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEmployeeQualificationSealQrCodeOutcome(rsp);
        else
            return CreateEmployeeQualificationSealQrCodeOutcome(o.GetError());
    }
    else
    {
        return CreateEmployeeQualificationSealQrCodeOutcome(outcome.GetError());
    }
}

void EssClient::CreateEmployeeQualificationSealQrCodeAsync(const CreateEmployeeQualificationSealQrCodeRequest& request, const CreateEmployeeQualificationSealQrCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEmployeeQualificationSealQrCodeRequest&;
    using Resp = CreateEmployeeQualificationSealQrCodeResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEmployeeQualificationSealQrCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateEmployeeQualificationSealQrCodeOutcomeCallable EssClient::CreateEmployeeQualificationSealQrCodeCallable(const CreateEmployeeQualificationSealQrCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEmployeeQualificationSealQrCodeOutcome>>();
    CreateEmployeeQualificationSealQrCodeAsync(
    request,
    [prom](
        const EssClient*,
        const CreateEmployeeQualificationSealQrCodeRequest&,
        CreateEmployeeQualificationSealQrCodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateExtendedServiceAuthInfosOutcome EssClient::CreateExtendedServiceAuthInfos(const CreateExtendedServiceAuthInfosRequest &request)
{
    auto outcome = MakeRequest(request, "CreateExtendedServiceAuthInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateExtendedServiceAuthInfosResponse rsp = CreateExtendedServiceAuthInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateExtendedServiceAuthInfosOutcome(rsp);
        else
            return CreateExtendedServiceAuthInfosOutcome(o.GetError());
    }
    else
    {
        return CreateExtendedServiceAuthInfosOutcome(outcome.GetError());
    }
}

void EssClient::CreateExtendedServiceAuthInfosAsync(const CreateExtendedServiceAuthInfosRequest& request, const CreateExtendedServiceAuthInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateExtendedServiceAuthInfosRequest&;
    using Resp = CreateExtendedServiceAuthInfosResponse;

    DoRequestAsync<Req, Resp>(
        "CreateExtendedServiceAuthInfos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateExtendedServiceAuthInfosOutcomeCallable EssClient::CreateExtendedServiceAuthInfosCallable(const CreateExtendedServiceAuthInfosRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateExtendedServiceAuthInfosOutcome>>();
    CreateExtendedServiceAuthInfosAsync(
    request,
    [prom](
        const EssClient*,
        const CreateExtendedServiceAuthInfosRequest&,
        CreateExtendedServiceAuthInfosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateFileCounterSignOutcome EssClient::CreateFileCounterSign(const CreateFileCounterSignRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFileCounterSign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFileCounterSignResponse rsp = CreateFileCounterSignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFileCounterSignOutcome(rsp);
        else
            return CreateFileCounterSignOutcome(o.GetError());
    }
    else
    {
        return CreateFileCounterSignOutcome(outcome.GetError());
    }
}

void EssClient::CreateFileCounterSignAsync(const CreateFileCounterSignRequest& request, const CreateFileCounterSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFileCounterSignRequest&;
    using Resp = CreateFileCounterSignResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFileCounterSign", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateFileCounterSignOutcomeCallable EssClient::CreateFileCounterSignCallable(const CreateFileCounterSignRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFileCounterSignOutcome>>();
    CreateFileCounterSignAsync(
    request,
    [prom](
        const EssClient*,
        const CreateFileCounterSignRequest&,
        CreateFileCounterSignOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateFlowOutcome EssClient::CreateFlow(const CreateFlowRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowResponse rsp = CreateFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowOutcome(rsp);
        else
            return CreateFlowOutcome(o.GetError());
    }
    else
    {
        return CreateFlowOutcome(outcome.GetError());
    }
}

void EssClient::CreateFlowAsync(const CreateFlowRequest& request, const CreateFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFlowRequest&;
    using Resp = CreateFlowResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateFlowOutcomeCallable EssClient::CreateFlowCallable(const CreateFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFlowOutcome>>();
    CreateFlowAsync(
    request,
    [prom](
        const EssClient*,
        const CreateFlowRequest&,
        CreateFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateFlowApproversOutcome EssClient::CreateFlowApprovers(const CreateFlowApproversRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowApprovers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowApproversResponse rsp = CreateFlowApproversResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowApproversOutcome(rsp);
        else
            return CreateFlowApproversOutcome(o.GetError());
    }
    else
    {
        return CreateFlowApproversOutcome(outcome.GetError());
    }
}

void EssClient::CreateFlowApproversAsync(const CreateFlowApproversRequest& request, const CreateFlowApproversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFlowApproversRequest&;
    using Resp = CreateFlowApproversResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFlowApprovers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateFlowApproversOutcomeCallable EssClient::CreateFlowApproversCallable(const CreateFlowApproversRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFlowApproversOutcome>>();
    CreateFlowApproversAsync(
    request,
    [prom](
        const EssClient*,
        const CreateFlowApproversRequest&,
        CreateFlowApproversOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateFlowBlockchainEvidenceUrlOutcome EssClient::CreateFlowBlockchainEvidenceUrl(const CreateFlowBlockchainEvidenceUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowBlockchainEvidenceUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowBlockchainEvidenceUrlResponse rsp = CreateFlowBlockchainEvidenceUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowBlockchainEvidenceUrlOutcome(rsp);
        else
            return CreateFlowBlockchainEvidenceUrlOutcome(o.GetError());
    }
    else
    {
        return CreateFlowBlockchainEvidenceUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateFlowBlockchainEvidenceUrlAsync(const CreateFlowBlockchainEvidenceUrlRequest& request, const CreateFlowBlockchainEvidenceUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFlowBlockchainEvidenceUrlRequest&;
    using Resp = CreateFlowBlockchainEvidenceUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFlowBlockchainEvidenceUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateFlowBlockchainEvidenceUrlOutcomeCallable EssClient::CreateFlowBlockchainEvidenceUrlCallable(const CreateFlowBlockchainEvidenceUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFlowBlockchainEvidenceUrlOutcome>>();
    CreateFlowBlockchainEvidenceUrlAsync(
    request,
    [prom](
        const EssClient*,
        const CreateFlowBlockchainEvidenceUrlRequest&,
        CreateFlowBlockchainEvidenceUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateFlowByFilesOutcome EssClient::CreateFlowByFiles(const CreateFlowByFilesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowByFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowByFilesResponse rsp = CreateFlowByFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowByFilesOutcome(rsp);
        else
            return CreateFlowByFilesOutcome(o.GetError());
    }
    else
    {
        return CreateFlowByFilesOutcome(outcome.GetError());
    }
}

void EssClient::CreateFlowByFilesAsync(const CreateFlowByFilesRequest& request, const CreateFlowByFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFlowByFilesRequest&;
    using Resp = CreateFlowByFilesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFlowByFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateFlowByFilesOutcomeCallable EssClient::CreateFlowByFilesCallable(const CreateFlowByFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFlowByFilesOutcome>>();
    CreateFlowByFilesAsync(
    request,
    [prom](
        const EssClient*,
        const CreateFlowByFilesRequest&,
        CreateFlowByFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateFlowEvidenceReportOutcome EssClient::CreateFlowEvidenceReport(const CreateFlowEvidenceReportRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowEvidenceReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowEvidenceReportResponse rsp = CreateFlowEvidenceReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowEvidenceReportOutcome(rsp);
        else
            return CreateFlowEvidenceReportOutcome(o.GetError());
    }
    else
    {
        return CreateFlowEvidenceReportOutcome(outcome.GetError());
    }
}

void EssClient::CreateFlowEvidenceReportAsync(const CreateFlowEvidenceReportRequest& request, const CreateFlowEvidenceReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFlowEvidenceReportRequest&;
    using Resp = CreateFlowEvidenceReportResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFlowEvidenceReport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateFlowEvidenceReportOutcomeCallable EssClient::CreateFlowEvidenceReportCallable(const CreateFlowEvidenceReportRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFlowEvidenceReportOutcome>>();
    CreateFlowEvidenceReportAsync(
    request,
    [prom](
        const EssClient*,
        const CreateFlowEvidenceReportRequest&,
        CreateFlowEvidenceReportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateFlowForwardsOutcome EssClient::CreateFlowForwards(const CreateFlowForwardsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowForwards");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowForwardsResponse rsp = CreateFlowForwardsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowForwardsOutcome(rsp);
        else
            return CreateFlowForwardsOutcome(o.GetError());
    }
    else
    {
        return CreateFlowForwardsOutcome(outcome.GetError());
    }
}

void EssClient::CreateFlowForwardsAsync(const CreateFlowForwardsRequest& request, const CreateFlowForwardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFlowForwardsRequest&;
    using Resp = CreateFlowForwardsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFlowForwards", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateFlowForwardsOutcomeCallable EssClient::CreateFlowForwardsCallable(const CreateFlowForwardsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFlowForwardsOutcome>>();
    CreateFlowForwardsAsync(
    request,
    [prom](
        const EssClient*,
        const CreateFlowForwardsRequest&,
        CreateFlowForwardsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateFlowGroupByFilesOutcome EssClient::CreateFlowGroupByFiles(const CreateFlowGroupByFilesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowGroupByFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowGroupByFilesResponse rsp = CreateFlowGroupByFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowGroupByFilesOutcome(rsp);
        else
            return CreateFlowGroupByFilesOutcome(o.GetError());
    }
    else
    {
        return CreateFlowGroupByFilesOutcome(outcome.GetError());
    }
}

void EssClient::CreateFlowGroupByFilesAsync(const CreateFlowGroupByFilesRequest& request, const CreateFlowGroupByFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFlowGroupByFilesRequest&;
    using Resp = CreateFlowGroupByFilesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFlowGroupByFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateFlowGroupByFilesOutcomeCallable EssClient::CreateFlowGroupByFilesCallable(const CreateFlowGroupByFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFlowGroupByFilesOutcome>>();
    CreateFlowGroupByFilesAsync(
    request,
    [prom](
        const EssClient*,
        const CreateFlowGroupByFilesRequest&,
        CreateFlowGroupByFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateFlowGroupByTemplatesOutcome EssClient::CreateFlowGroupByTemplates(const CreateFlowGroupByTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowGroupByTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowGroupByTemplatesResponse rsp = CreateFlowGroupByTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowGroupByTemplatesOutcome(rsp);
        else
            return CreateFlowGroupByTemplatesOutcome(o.GetError());
    }
    else
    {
        return CreateFlowGroupByTemplatesOutcome(outcome.GetError());
    }
}

void EssClient::CreateFlowGroupByTemplatesAsync(const CreateFlowGroupByTemplatesRequest& request, const CreateFlowGroupByTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFlowGroupByTemplatesRequest&;
    using Resp = CreateFlowGroupByTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFlowGroupByTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateFlowGroupByTemplatesOutcomeCallable EssClient::CreateFlowGroupByTemplatesCallable(const CreateFlowGroupByTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFlowGroupByTemplatesOutcome>>();
    CreateFlowGroupByTemplatesAsync(
    request,
    [prom](
        const EssClient*,
        const CreateFlowGroupByTemplatesRequest&,
        CreateFlowGroupByTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateFlowGroupSignReviewOutcome EssClient::CreateFlowGroupSignReview(const CreateFlowGroupSignReviewRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowGroupSignReview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowGroupSignReviewResponse rsp = CreateFlowGroupSignReviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowGroupSignReviewOutcome(rsp);
        else
            return CreateFlowGroupSignReviewOutcome(o.GetError());
    }
    else
    {
        return CreateFlowGroupSignReviewOutcome(outcome.GetError());
    }
}

void EssClient::CreateFlowGroupSignReviewAsync(const CreateFlowGroupSignReviewRequest& request, const CreateFlowGroupSignReviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFlowGroupSignReviewRequest&;
    using Resp = CreateFlowGroupSignReviewResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFlowGroupSignReview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateFlowGroupSignReviewOutcomeCallable EssClient::CreateFlowGroupSignReviewCallable(const CreateFlowGroupSignReviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFlowGroupSignReviewOutcome>>();
    CreateFlowGroupSignReviewAsync(
    request,
    [prom](
        const EssClient*,
        const CreateFlowGroupSignReviewRequest&,
        CreateFlowGroupSignReviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateFlowRemindsOutcome EssClient::CreateFlowReminds(const CreateFlowRemindsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowReminds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowRemindsResponse rsp = CreateFlowRemindsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowRemindsOutcome(rsp);
        else
            return CreateFlowRemindsOutcome(o.GetError());
    }
    else
    {
        return CreateFlowRemindsOutcome(outcome.GetError());
    }
}

void EssClient::CreateFlowRemindsAsync(const CreateFlowRemindsRequest& request, const CreateFlowRemindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFlowRemindsRequest&;
    using Resp = CreateFlowRemindsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFlowReminds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateFlowRemindsOutcomeCallable EssClient::CreateFlowRemindsCallable(const CreateFlowRemindsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFlowRemindsOutcome>>();
    CreateFlowRemindsAsync(
    request,
    [prom](
        const EssClient*,
        const CreateFlowRemindsRequest&,
        CreateFlowRemindsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateFlowSignReviewOutcome EssClient::CreateFlowSignReview(const CreateFlowSignReviewRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowSignReview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowSignReviewResponse rsp = CreateFlowSignReviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowSignReviewOutcome(rsp);
        else
            return CreateFlowSignReviewOutcome(o.GetError());
    }
    else
    {
        return CreateFlowSignReviewOutcome(outcome.GetError());
    }
}

void EssClient::CreateFlowSignReviewAsync(const CreateFlowSignReviewRequest& request, const CreateFlowSignReviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFlowSignReviewRequest&;
    using Resp = CreateFlowSignReviewResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFlowSignReview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateFlowSignReviewOutcomeCallable EssClient::CreateFlowSignReviewCallable(const CreateFlowSignReviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFlowSignReviewOutcome>>();
    CreateFlowSignReviewAsync(
    request,
    [prom](
        const EssClient*,
        const CreateFlowSignReviewRequest&,
        CreateFlowSignReviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateFlowSignUrlOutcome EssClient::CreateFlowSignUrl(const CreateFlowSignUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowSignUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowSignUrlResponse rsp = CreateFlowSignUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowSignUrlOutcome(rsp);
        else
            return CreateFlowSignUrlOutcome(o.GetError());
    }
    else
    {
        return CreateFlowSignUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateFlowSignUrlAsync(const CreateFlowSignUrlRequest& request, const CreateFlowSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFlowSignUrlRequest&;
    using Resp = CreateFlowSignUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFlowSignUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateFlowSignUrlOutcomeCallable EssClient::CreateFlowSignUrlCallable(const CreateFlowSignUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFlowSignUrlOutcome>>();
    CreateFlowSignUrlAsync(
    request,
    [prom](
        const EssClient*,
        const CreateFlowSignUrlRequest&,
        CreateFlowSignUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateInformationExtractionWebUrlOutcome EssClient::CreateInformationExtractionWebUrl(const CreateInformationExtractionWebUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInformationExtractionWebUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInformationExtractionWebUrlResponse rsp = CreateInformationExtractionWebUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInformationExtractionWebUrlOutcome(rsp);
        else
            return CreateInformationExtractionWebUrlOutcome(o.GetError());
    }
    else
    {
        return CreateInformationExtractionWebUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateInformationExtractionWebUrlAsync(const CreateInformationExtractionWebUrlRequest& request, const CreateInformationExtractionWebUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateInformationExtractionWebUrlRequest&;
    using Resp = CreateInformationExtractionWebUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInformationExtractionWebUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateInformationExtractionWebUrlOutcomeCallable EssClient::CreateInformationExtractionWebUrlCallable(const CreateInformationExtractionWebUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInformationExtractionWebUrlOutcome>>();
    CreateInformationExtractionWebUrlAsync(
    request,
    [prom](
        const EssClient*,
        const CreateInformationExtractionWebUrlRequest&,
        CreateInformationExtractionWebUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateIntegrationDepartmentOutcome EssClient::CreateIntegrationDepartment(const CreateIntegrationDepartmentRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIntegrationDepartment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIntegrationDepartmentResponse rsp = CreateIntegrationDepartmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIntegrationDepartmentOutcome(rsp);
        else
            return CreateIntegrationDepartmentOutcome(o.GetError());
    }
    else
    {
        return CreateIntegrationDepartmentOutcome(outcome.GetError());
    }
}

void EssClient::CreateIntegrationDepartmentAsync(const CreateIntegrationDepartmentRequest& request, const CreateIntegrationDepartmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateIntegrationDepartmentRequest&;
    using Resp = CreateIntegrationDepartmentResponse;

    DoRequestAsync<Req, Resp>(
        "CreateIntegrationDepartment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateIntegrationDepartmentOutcomeCallable EssClient::CreateIntegrationDepartmentCallable(const CreateIntegrationDepartmentRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateIntegrationDepartmentOutcome>>();
    CreateIntegrationDepartmentAsync(
    request,
    [prom](
        const EssClient*,
        const CreateIntegrationDepartmentRequest&,
        CreateIntegrationDepartmentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateIntegrationEmployeesOutcome EssClient::CreateIntegrationEmployees(const CreateIntegrationEmployeesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIntegrationEmployees");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIntegrationEmployeesResponse rsp = CreateIntegrationEmployeesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIntegrationEmployeesOutcome(rsp);
        else
            return CreateIntegrationEmployeesOutcome(o.GetError());
    }
    else
    {
        return CreateIntegrationEmployeesOutcome(outcome.GetError());
    }
}

void EssClient::CreateIntegrationEmployeesAsync(const CreateIntegrationEmployeesRequest& request, const CreateIntegrationEmployeesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateIntegrationEmployeesRequest&;
    using Resp = CreateIntegrationEmployeesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateIntegrationEmployees", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateIntegrationEmployeesOutcomeCallable EssClient::CreateIntegrationEmployeesCallable(const CreateIntegrationEmployeesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateIntegrationEmployeesOutcome>>();
    CreateIntegrationEmployeesAsync(
    request,
    [prom](
        const EssClient*,
        const CreateIntegrationEmployeesRequest&,
        CreateIntegrationEmployeesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateIntegrationRoleOutcome EssClient::CreateIntegrationRole(const CreateIntegrationRoleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIntegrationRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIntegrationRoleResponse rsp = CreateIntegrationRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIntegrationRoleOutcome(rsp);
        else
            return CreateIntegrationRoleOutcome(o.GetError());
    }
    else
    {
        return CreateIntegrationRoleOutcome(outcome.GetError());
    }
}

void EssClient::CreateIntegrationRoleAsync(const CreateIntegrationRoleRequest& request, const CreateIntegrationRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateIntegrationRoleRequest&;
    using Resp = CreateIntegrationRoleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateIntegrationRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateIntegrationRoleOutcomeCallable EssClient::CreateIntegrationRoleCallable(const CreateIntegrationRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateIntegrationRoleOutcome>>();
    CreateIntegrationRoleAsync(
    request,
    [prom](
        const EssClient*,
        const CreateIntegrationRoleRequest&,
        CreateIntegrationRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateIntegrationSubOrganizationActiveRecordOutcome EssClient::CreateIntegrationSubOrganizationActiveRecord(const CreateIntegrationSubOrganizationActiveRecordRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIntegrationSubOrganizationActiveRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIntegrationSubOrganizationActiveRecordResponse rsp = CreateIntegrationSubOrganizationActiveRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIntegrationSubOrganizationActiveRecordOutcome(rsp);
        else
            return CreateIntegrationSubOrganizationActiveRecordOutcome(o.GetError());
    }
    else
    {
        return CreateIntegrationSubOrganizationActiveRecordOutcome(outcome.GetError());
    }
}

void EssClient::CreateIntegrationSubOrganizationActiveRecordAsync(const CreateIntegrationSubOrganizationActiveRecordRequest& request, const CreateIntegrationSubOrganizationActiveRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateIntegrationSubOrganizationActiveRecordRequest&;
    using Resp = CreateIntegrationSubOrganizationActiveRecordResponse;

    DoRequestAsync<Req, Resp>(
        "CreateIntegrationSubOrganizationActiveRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateIntegrationSubOrganizationActiveRecordOutcomeCallable EssClient::CreateIntegrationSubOrganizationActiveRecordCallable(const CreateIntegrationSubOrganizationActiveRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateIntegrationSubOrganizationActiveRecordOutcome>>();
    CreateIntegrationSubOrganizationActiveRecordAsync(
    request,
    [prom](
        const EssClient*,
        const CreateIntegrationSubOrganizationActiveRecordRequest&,
        CreateIntegrationSubOrganizationActiveRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateIntegrationUserRolesOutcome EssClient::CreateIntegrationUserRoles(const CreateIntegrationUserRolesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIntegrationUserRoles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIntegrationUserRolesResponse rsp = CreateIntegrationUserRolesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIntegrationUserRolesOutcome(rsp);
        else
            return CreateIntegrationUserRolesOutcome(o.GetError());
    }
    else
    {
        return CreateIntegrationUserRolesOutcome(outcome.GetError());
    }
}

void EssClient::CreateIntegrationUserRolesAsync(const CreateIntegrationUserRolesRequest& request, const CreateIntegrationUserRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateIntegrationUserRolesRequest&;
    using Resp = CreateIntegrationUserRolesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateIntegrationUserRoles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateIntegrationUserRolesOutcomeCallable EssClient::CreateIntegrationUserRolesCallable(const CreateIntegrationUserRolesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateIntegrationUserRolesOutcome>>();
    CreateIntegrationUserRolesAsync(
    request,
    [prom](
        const EssClient*,
        const CreateIntegrationUserRolesRequest&,
        CreateIntegrationUserRolesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateLegalSealQrCodeOutcome EssClient::CreateLegalSealQrCode(const CreateLegalSealQrCodeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLegalSealQrCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLegalSealQrCodeResponse rsp = CreateLegalSealQrCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLegalSealQrCodeOutcome(rsp);
        else
            return CreateLegalSealQrCodeOutcome(o.GetError());
    }
    else
    {
        return CreateLegalSealQrCodeOutcome(outcome.GetError());
    }
}

void EssClient::CreateLegalSealQrCodeAsync(const CreateLegalSealQrCodeRequest& request, const CreateLegalSealQrCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLegalSealQrCodeRequest&;
    using Resp = CreateLegalSealQrCodeResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLegalSealQrCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateLegalSealQrCodeOutcomeCallable EssClient::CreateLegalSealQrCodeCallable(const CreateLegalSealQrCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLegalSealQrCodeOutcome>>();
    CreateLegalSealQrCodeAsync(
    request,
    [prom](
        const EssClient*,
        const CreateLegalSealQrCodeRequest&,
        CreateLegalSealQrCodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateMiniAppPrepareFlowOutcome EssClient::CreateMiniAppPrepareFlow(const CreateMiniAppPrepareFlowRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMiniAppPrepareFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMiniAppPrepareFlowResponse rsp = CreateMiniAppPrepareFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMiniAppPrepareFlowOutcome(rsp);
        else
            return CreateMiniAppPrepareFlowOutcome(o.GetError());
    }
    else
    {
        return CreateMiniAppPrepareFlowOutcome(outcome.GetError());
    }
}

void EssClient::CreateMiniAppPrepareFlowAsync(const CreateMiniAppPrepareFlowRequest& request, const CreateMiniAppPrepareFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMiniAppPrepareFlowRequest&;
    using Resp = CreateMiniAppPrepareFlowResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMiniAppPrepareFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateMiniAppPrepareFlowOutcomeCallable EssClient::CreateMiniAppPrepareFlowCallable(const CreateMiniAppPrepareFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMiniAppPrepareFlowOutcome>>();
    CreateMiniAppPrepareFlowAsync(
    request,
    [prom](
        const EssClient*,
        const CreateMiniAppPrepareFlowRequest&,
        CreateMiniAppPrepareFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateModifyAdminAuthorizationUrlOutcome EssClient::CreateModifyAdminAuthorizationUrl(const CreateModifyAdminAuthorizationUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateModifyAdminAuthorizationUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateModifyAdminAuthorizationUrlResponse rsp = CreateModifyAdminAuthorizationUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateModifyAdminAuthorizationUrlOutcome(rsp);
        else
            return CreateModifyAdminAuthorizationUrlOutcome(o.GetError());
    }
    else
    {
        return CreateModifyAdminAuthorizationUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateModifyAdminAuthorizationUrlAsync(const CreateModifyAdminAuthorizationUrlRequest& request, const CreateModifyAdminAuthorizationUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateModifyAdminAuthorizationUrlRequest&;
    using Resp = CreateModifyAdminAuthorizationUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateModifyAdminAuthorizationUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateModifyAdminAuthorizationUrlOutcomeCallable EssClient::CreateModifyAdminAuthorizationUrlCallable(const CreateModifyAdminAuthorizationUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateModifyAdminAuthorizationUrlOutcome>>();
    CreateModifyAdminAuthorizationUrlAsync(
    request,
    [prom](
        const EssClient*,
        const CreateModifyAdminAuthorizationUrlRequest&,
        CreateModifyAdminAuthorizationUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateMultiFlowSignQRCodeOutcome EssClient::CreateMultiFlowSignQRCode(const CreateMultiFlowSignQRCodeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMultiFlowSignQRCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMultiFlowSignQRCodeResponse rsp = CreateMultiFlowSignQRCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMultiFlowSignQRCodeOutcome(rsp);
        else
            return CreateMultiFlowSignQRCodeOutcome(o.GetError());
    }
    else
    {
        return CreateMultiFlowSignQRCodeOutcome(outcome.GetError());
    }
}

void EssClient::CreateMultiFlowSignQRCodeAsync(const CreateMultiFlowSignQRCodeRequest& request, const CreateMultiFlowSignQRCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMultiFlowSignQRCodeRequest&;
    using Resp = CreateMultiFlowSignQRCodeResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMultiFlowSignQRCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateMultiFlowSignQRCodeOutcomeCallable EssClient::CreateMultiFlowSignQRCodeCallable(const CreateMultiFlowSignQRCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMultiFlowSignQRCodeOutcome>>();
    CreateMultiFlowSignQRCodeAsync(
    request,
    [prom](
        const EssClient*,
        const CreateMultiFlowSignQRCodeRequest&,
        CreateMultiFlowSignQRCodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateOrganizationAuthFileOutcome EssClient::CreateOrganizationAuthFile(const CreateOrganizationAuthFileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrganizationAuthFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrganizationAuthFileResponse rsp = CreateOrganizationAuthFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrganizationAuthFileOutcome(rsp);
        else
            return CreateOrganizationAuthFileOutcome(o.GetError());
    }
    else
    {
        return CreateOrganizationAuthFileOutcome(outcome.GetError());
    }
}

void EssClient::CreateOrganizationAuthFileAsync(const CreateOrganizationAuthFileRequest& request, const CreateOrganizationAuthFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOrganizationAuthFileRequest&;
    using Resp = CreateOrganizationAuthFileResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOrganizationAuthFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateOrganizationAuthFileOutcomeCallable EssClient::CreateOrganizationAuthFileCallable(const CreateOrganizationAuthFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOrganizationAuthFileOutcome>>();
    CreateOrganizationAuthFileAsync(
    request,
    [prom](
        const EssClient*,
        const CreateOrganizationAuthFileRequest&,
        CreateOrganizationAuthFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateOrganizationAuthUrlOutcome EssClient::CreateOrganizationAuthUrl(const CreateOrganizationAuthUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrganizationAuthUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrganizationAuthUrlResponse rsp = CreateOrganizationAuthUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrganizationAuthUrlOutcome(rsp);
        else
            return CreateOrganizationAuthUrlOutcome(o.GetError());
    }
    else
    {
        return CreateOrganizationAuthUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateOrganizationAuthUrlAsync(const CreateOrganizationAuthUrlRequest& request, const CreateOrganizationAuthUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOrganizationAuthUrlRequest&;
    using Resp = CreateOrganizationAuthUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOrganizationAuthUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateOrganizationAuthUrlOutcomeCallable EssClient::CreateOrganizationAuthUrlCallable(const CreateOrganizationAuthUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOrganizationAuthUrlOutcome>>();
    CreateOrganizationAuthUrlAsync(
    request,
    [prom](
        const EssClient*,
        const CreateOrganizationAuthUrlRequest&,
        CreateOrganizationAuthUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateOrganizationBatchSignUrlOutcome EssClient::CreateOrganizationBatchSignUrl(const CreateOrganizationBatchSignUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrganizationBatchSignUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrganizationBatchSignUrlResponse rsp = CreateOrganizationBatchSignUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrganizationBatchSignUrlOutcome(rsp);
        else
            return CreateOrganizationBatchSignUrlOutcome(o.GetError());
    }
    else
    {
        return CreateOrganizationBatchSignUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateOrganizationBatchSignUrlAsync(const CreateOrganizationBatchSignUrlRequest& request, const CreateOrganizationBatchSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOrganizationBatchSignUrlRequest&;
    using Resp = CreateOrganizationBatchSignUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOrganizationBatchSignUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateOrganizationBatchSignUrlOutcomeCallable EssClient::CreateOrganizationBatchSignUrlCallable(const CreateOrganizationBatchSignUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOrganizationBatchSignUrlOutcome>>();
    CreateOrganizationBatchSignUrlAsync(
    request,
    [prom](
        const EssClient*,
        const CreateOrganizationBatchSignUrlRequest&,
        CreateOrganizationBatchSignUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateOrganizationGroupInvitationLinkOutcome EssClient::CreateOrganizationGroupInvitationLink(const CreateOrganizationGroupInvitationLinkRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrganizationGroupInvitationLink");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrganizationGroupInvitationLinkResponse rsp = CreateOrganizationGroupInvitationLinkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrganizationGroupInvitationLinkOutcome(rsp);
        else
            return CreateOrganizationGroupInvitationLinkOutcome(o.GetError());
    }
    else
    {
        return CreateOrganizationGroupInvitationLinkOutcome(outcome.GetError());
    }
}

void EssClient::CreateOrganizationGroupInvitationLinkAsync(const CreateOrganizationGroupInvitationLinkRequest& request, const CreateOrganizationGroupInvitationLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOrganizationGroupInvitationLinkRequest&;
    using Resp = CreateOrganizationGroupInvitationLinkResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOrganizationGroupInvitationLink", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateOrganizationGroupInvitationLinkOutcomeCallable EssClient::CreateOrganizationGroupInvitationLinkCallable(const CreateOrganizationGroupInvitationLinkRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOrganizationGroupInvitationLinkOutcome>>();
    CreateOrganizationGroupInvitationLinkAsync(
    request,
    [prom](
        const EssClient*,
        const CreateOrganizationGroupInvitationLinkRequest&,
        CreateOrganizationGroupInvitationLinkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateOrganizationInfoChangeUrlOutcome EssClient::CreateOrganizationInfoChangeUrl(const CreateOrganizationInfoChangeUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrganizationInfoChangeUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrganizationInfoChangeUrlResponse rsp = CreateOrganizationInfoChangeUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrganizationInfoChangeUrlOutcome(rsp);
        else
            return CreateOrganizationInfoChangeUrlOutcome(o.GetError());
    }
    else
    {
        return CreateOrganizationInfoChangeUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateOrganizationInfoChangeUrlAsync(const CreateOrganizationInfoChangeUrlRequest& request, const CreateOrganizationInfoChangeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOrganizationInfoChangeUrlRequest&;
    using Resp = CreateOrganizationInfoChangeUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOrganizationInfoChangeUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateOrganizationInfoChangeUrlOutcomeCallable EssClient::CreateOrganizationInfoChangeUrlCallable(const CreateOrganizationInfoChangeUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOrganizationInfoChangeUrlOutcome>>();
    CreateOrganizationInfoChangeUrlAsync(
    request,
    [prom](
        const EssClient*,
        const CreateOrganizationInfoChangeUrlRequest&,
        CreateOrganizationInfoChangeUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreatePartnerAutoSignAuthUrlOutcome EssClient::CreatePartnerAutoSignAuthUrl(const CreatePartnerAutoSignAuthUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePartnerAutoSignAuthUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePartnerAutoSignAuthUrlResponse rsp = CreatePartnerAutoSignAuthUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePartnerAutoSignAuthUrlOutcome(rsp);
        else
            return CreatePartnerAutoSignAuthUrlOutcome(o.GetError());
    }
    else
    {
        return CreatePartnerAutoSignAuthUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreatePartnerAutoSignAuthUrlAsync(const CreatePartnerAutoSignAuthUrlRequest& request, const CreatePartnerAutoSignAuthUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePartnerAutoSignAuthUrlRequest&;
    using Resp = CreatePartnerAutoSignAuthUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePartnerAutoSignAuthUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreatePartnerAutoSignAuthUrlOutcomeCallable EssClient::CreatePartnerAutoSignAuthUrlCallable(const CreatePartnerAutoSignAuthUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePartnerAutoSignAuthUrlOutcome>>();
    CreatePartnerAutoSignAuthUrlAsync(
    request,
    [prom](
        const EssClient*,
        const CreatePartnerAutoSignAuthUrlRequest&,
        CreatePartnerAutoSignAuthUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreatePersonAuthCertificateImageOutcome EssClient::CreatePersonAuthCertificateImage(const CreatePersonAuthCertificateImageRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePersonAuthCertificateImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePersonAuthCertificateImageResponse rsp = CreatePersonAuthCertificateImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePersonAuthCertificateImageOutcome(rsp);
        else
            return CreatePersonAuthCertificateImageOutcome(o.GetError());
    }
    else
    {
        return CreatePersonAuthCertificateImageOutcome(outcome.GetError());
    }
}

void EssClient::CreatePersonAuthCertificateImageAsync(const CreatePersonAuthCertificateImageRequest& request, const CreatePersonAuthCertificateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePersonAuthCertificateImageRequest&;
    using Resp = CreatePersonAuthCertificateImageResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePersonAuthCertificateImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreatePersonAuthCertificateImageOutcomeCallable EssClient::CreatePersonAuthCertificateImageCallable(const CreatePersonAuthCertificateImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePersonAuthCertificateImageOutcome>>();
    CreatePersonAuthCertificateImageAsync(
    request,
    [prom](
        const EssClient*,
        const CreatePersonAuthCertificateImageRequest&,
        CreatePersonAuthCertificateImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreatePrepareFlowOutcome EssClient::CreatePrepareFlow(const CreatePrepareFlowRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrepareFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrepareFlowResponse rsp = CreatePrepareFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrepareFlowOutcome(rsp);
        else
            return CreatePrepareFlowOutcome(o.GetError());
    }
    else
    {
        return CreatePrepareFlowOutcome(outcome.GetError());
    }
}

void EssClient::CreatePrepareFlowAsync(const CreatePrepareFlowRequest& request, const CreatePrepareFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePrepareFlowRequest&;
    using Resp = CreatePrepareFlowResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePrepareFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreatePrepareFlowOutcomeCallable EssClient::CreatePrepareFlowCallable(const CreatePrepareFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePrepareFlowOutcome>>();
    CreatePrepareFlowAsync(
    request,
    [prom](
        const EssClient*,
        const CreatePrepareFlowRequest&,
        CreatePrepareFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreatePrepareFlowGroupOutcome EssClient::CreatePrepareFlowGroup(const CreatePrepareFlowGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrepareFlowGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrepareFlowGroupResponse rsp = CreatePrepareFlowGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrepareFlowGroupOutcome(rsp);
        else
            return CreatePrepareFlowGroupOutcome(o.GetError());
    }
    else
    {
        return CreatePrepareFlowGroupOutcome(outcome.GetError());
    }
}

void EssClient::CreatePrepareFlowGroupAsync(const CreatePrepareFlowGroupRequest& request, const CreatePrepareFlowGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePrepareFlowGroupRequest&;
    using Resp = CreatePrepareFlowGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePrepareFlowGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreatePrepareFlowGroupOutcomeCallable EssClient::CreatePrepareFlowGroupCallable(const CreatePrepareFlowGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePrepareFlowGroupOutcome>>();
    CreatePrepareFlowGroupAsync(
    request,
    [prom](
        const EssClient*,
        const CreatePrepareFlowGroupRequest&,
        CreatePrepareFlowGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreatePreparedPersonalEsignOutcome EssClient::CreatePreparedPersonalEsign(const CreatePreparedPersonalEsignRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePreparedPersonalEsign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePreparedPersonalEsignResponse rsp = CreatePreparedPersonalEsignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePreparedPersonalEsignOutcome(rsp);
        else
            return CreatePreparedPersonalEsignOutcome(o.GetError());
    }
    else
    {
        return CreatePreparedPersonalEsignOutcome(outcome.GetError());
    }
}

void EssClient::CreatePreparedPersonalEsignAsync(const CreatePreparedPersonalEsignRequest& request, const CreatePreparedPersonalEsignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePreparedPersonalEsignRequest&;
    using Resp = CreatePreparedPersonalEsignResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePreparedPersonalEsign", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreatePreparedPersonalEsignOutcomeCallable EssClient::CreatePreparedPersonalEsignCallable(const CreatePreparedPersonalEsignRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePreparedPersonalEsignOutcome>>();
    CreatePreparedPersonalEsignAsync(
    request,
    [prom](
        const EssClient*,
        const CreatePreparedPersonalEsignRequest&,
        CreatePreparedPersonalEsignOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateReleaseFlowOutcome EssClient::CreateReleaseFlow(const CreateReleaseFlowRequest &request)
{
    auto outcome = MakeRequest(request, "CreateReleaseFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReleaseFlowResponse rsp = CreateReleaseFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReleaseFlowOutcome(rsp);
        else
            return CreateReleaseFlowOutcome(o.GetError());
    }
    else
    {
        return CreateReleaseFlowOutcome(outcome.GetError());
    }
}

void EssClient::CreateReleaseFlowAsync(const CreateReleaseFlowRequest& request, const CreateReleaseFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateReleaseFlowRequest&;
    using Resp = CreateReleaseFlowResponse;

    DoRequestAsync<Req, Resp>(
        "CreateReleaseFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateReleaseFlowOutcomeCallable EssClient::CreateReleaseFlowCallable(const CreateReleaseFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateReleaseFlowOutcome>>();
    CreateReleaseFlowAsync(
    request,
    [prom](
        const EssClient*,
        const CreateReleaseFlowRequest&,
        CreateReleaseFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateSchemeUrlOutcome EssClient::CreateSchemeUrl(const CreateSchemeUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSchemeUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSchemeUrlResponse rsp = CreateSchemeUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSchemeUrlOutcome(rsp);
        else
            return CreateSchemeUrlOutcome(o.GetError());
    }
    else
    {
        return CreateSchemeUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateSchemeUrlAsync(const CreateSchemeUrlRequest& request, const CreateSchemeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSchemeUrlRequest&;
    using Resp = CreateSchemeUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSchemeUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateSchemeUrlOutcomeCallable EssClient::CreateSchemeUrlCallable(const CreateSchemeUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSchemeUrlOutcome>>();
    CreateSchemeUrlAsync(
    request,
    [prom](
        const EssClient*,
        const CreateSchemeUrlRequest&,
        CreateSchemeUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateSealOutcome EssClient::CreateSeal(const CreateSealRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSeal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSealResponse rsp = CreateSealResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSealOutcome(rsp);
        else
            return CreateSealOutcome(o.GetError());
    }
    else
    {
        return CreateSealOutcome(outcome.GetError());
    }
}

void EssClient::CreateSealAsync(const CreateSealRequest& request, const CreateSealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSealRequest&;
    using Resp = CreateSealResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSeal", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateSealOutcomeCallable EssClient::CreateSealCallable(const CreateSealRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSealOutcome>>();
    CreateSealAsync(
    request,
    [prom](
        const EssClient*,
        const CreateSealRequest&,
        CreateSealOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateSealPolicyOutcome EssClient::CreateSealPolicy(const CreateSealPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSealPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSealPolicyResponse rsp = CreateSealPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSealPolicyOutcome(rsp);
        else
            return CreateSealPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateSealPolicyOutcome(outcome.GetError());
    }
}

void EssClient::CreateSealPolicyAsync(const CreateSealPolicyRequest& request, const CreateSealPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSealPolicyRequest&;
    using Resp = CreateSealPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSealPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateSealPolicyOutcomeCallable EssClient::CreateSealPolicyCallable(const CreateSealPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSealPolicyOutcome>>();
    CreateSealPolicyAsync(
    request,
    [prom](
        const EssClient*,
        const CreateSealPolicyRequest&,
        CreateSealPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateSingleSignOnEmployeesOutcome EssClient::CreateSingleSignOnEmployees(const CreateSingleSignOnEmployeesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSingleSignOnEmployees");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSingleSignOnEmployeesResponse rsp = CreateSingleSignOnEmployeesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSingleSignOnEmployeesOutcome(rsp);
        else
            return CreateSingleSignOnEmployeesOutcome(o.GetError());
    }
    else
    {
        return CreateSingleSignOnEmployeesOutcome(outcome.GetError());
    }
}

void EssClient::CreateSingleSignOnEmployeesAsync(const CreateSingleSignOnEmployeesRequest& request, const CreateSingleSignOnEmployeesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSingleSignOnEmployeesRequest&;
    using Resp = CreateSingleSignOnEmployeesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSingleSignOnEmployees", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateSingleSignOnEmployeesOutcomeCallable EssClient::CreateSingleSignOnEmployeesCallable(const CreateSingleSignOnEmployeesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSingleSignOnEmployeesOutcome>>();
    CreateSingleSignOnEmployeesAsync(
    request,
    [prom](
        const EssClient*,
        const CreateSingleSignOnEmployeesRequest&,
        CreateSingleSignOnEmployeesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateUserAutoSignEnableUrlOutcome EssClient::CreateUserAutoSignEnableUrl(const CreateUserAutoSignEnableUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserAutoSignEnableUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserAutoSignEnableUrlResponse rsp = CreateUserAutoSignEnableUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserAutoSignEnableUrlOutcome(rsp);
        else
            return CreateUserAutoSignEnableUrlOutcome(o.GetError());
    }
    else
    {
        return CreateUserAutoSignEnableUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateUserAutoSignEnableUrlAsync(const CreateUserAutoSignEnableUrlRequest& request, const CreateUserAutoSignEnableUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUserAutoSignEnableUrlRequest&;
    using Resp = CreateUserAutoSignEnableUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUserAutoSignEnableUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateUserAutoSignEnableUrlOutcomeCallable EssClient::CreateUserAutoSignEnableUrlCallable(const CreateUserAutoSignEnableUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserAutoSignEnableUrlOutcome>>();
    CreateUserAutoSignEnableUrlAsync(
    request,
    [prom](
        const EssClient*,
        const CreateUserAutoSignEnableUrlRequest&,
        CreateUserAutoSignEnableUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateUserAutoSignSealUrlOutcome EssClient::CreateUserAutoSignSealUrl(const CreateUserAutoSignSealUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserAutoSignSealUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserAutoSignSealUrlResponse rsp = CreateUserAutoSignSealUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserAutoSignSealUrlOutcome(rsp);
        else
            return CreateUserAutoSignSealUrlOutcome(o.GetError());
    }
    else
    {
        return CreateUserAutoSignSealUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateUserAutoSignSealUrlAsync(const CreateUserAutoSignSealUrlRequest& request, const CreateUserAutoSignSealUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUserAutoSignSealUrlRequest&;
    using Resp = CreateUserAutoSignSealUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUserAutoSignSealUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateUserAutoSignSealUrlOutcomeCallable EssClient::CreateUserAutoSignSealUrlCallable(const CreateUserAutoSignSealUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserAutoSignSealUrlOutcome>>();
    CreateUserAutoSignSealUrlAsync(
    request,
    [prom](
        const EssClient*,
        const CreateUserAutoSignSealUrlRequest&,
        CreateUserAutoSignSealUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateUserMobileChangeUrlOutcome EssClient::CreateUserMobileChangeUrl(const CreateUserMobileChangeUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserMobileChangeUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserMobileChangeUrlResponse rsp = CreateUserMobileChangeUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserMobileChangeUrlOutcome(rsp);
        else
            return CreateUserMobileChangeUrlOutcome(o.GetError());
    }
    else
    {
        return CreateUserMobileChangeUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateUserMobileChangeUrlAsync(const CreateUserMobileChangeUrlRequest& request, const CreateUserMobileChangeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUserMobileChangeUrlRequest&;
    using Resp = CreateUserMobileChangeUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUserMobileChangeUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateUserMobileChangeUrlOutcomeCallable EssClient::CreateUserMobileChangeUrlCallable(const CreateUserMobileChangeUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserMobileChangeUrlOutcome>>();
    CreateUserMobileChangeUrlAsync(
    request,
    [prom](
        const EssClient*,
        const CreateUserMobileChangeUrlRequest&,
        CreateUserMobileChangeUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateUserNameChangeUrlOutcome EssClient::CreateUserNameChangeUrl(const CreateUserNameChangeUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserNameChangeUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserNameChangeUrlResponse rsp = CreateUserNameChangeUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserNameChangeUrlOutcome(rsp);
        else
            return CreateUserNameChangeUrlOutcome(o.GetError());
    }
    else
    {
        return CreateUserNameChangeUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateUserNameChangeUrlAsync(const CreateUserNameChangeUrlRequest& request, const CreateUserNameChangeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUserNameChangeUrlRequest&;
    using Resp = CreateUserNameChangeUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUserNameChangeUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateUserNameChangeUrlOutcomeCallable EssClient::CreateUserNameChangeUrlCallable(const CreateUserNameChangeUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserNameChangeUrlOutcome>>();
    CreateUserNameChangeUrlAsync(
    request,
    [prom](
        const EssClient*,
        const CreateUserNameChangeUrlRequest&,
        CreateUserNameChangeUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateUserVerifyUrlOutcome EssClient::CreateUserVerifyUrl(const CreateUserVerifyUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserVerifyUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserVerifyUrlResponse rsp = CreateUserVerifyUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserVerifyUrlOutcome(rsp);
        else
            return CreateUserVerifyUrlOutcome(o.GetError());
    }
    else
    {
        return CreateUserVerifyUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateUserVerifyUrlAsync(const CreateUserVerifyUrlRequest& request, const CreateUserVerifyUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUserVerifyUrlRequest&;
    using Resp = CreateUserVerifyUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUserVerifyUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateUserVerifyUrlOutcomeCallable EssClient::CreateUserVerifyUrlCallable(const CreateUserVerifyUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserVerifyUrlOutcome>>();
    CreateUserVerifyUrlAsync(
    request,
    [prom](
        const EssClient*,
        const CreateUserVerifyUrlRequest&,
        CreateUserVerifyUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::CreateWebThemeConfigOutcome EssClient::CreateWebThemeConfig(const CreateWebThemeConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWebThemeConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWebThemeConfigResponse rsp = CreateWebThemeConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWebThemeConfigOutcome(rsp);
        else
            return CreateWebThemeConfigOutcome(o.GetError());
    }
    else
    {
        return CreateWebThemeConfigOutcome(outcome.GetError());
    }
}

void EssClient::CreateWebThemeConfigAsync(const CreateWebThemeConfigRequest& request, const CreateWebThemeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWebThemeConfigRequest&;
    using Resp = CreateWebThemeConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWebThemeConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::CreateWebThemeConfigOutcomeCallable EssClient::CreateWebThemeConfigCallable(const CreateWebThemeConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWebThemeConfigOutcome>>();
    CreateWebThemeConfigAsync(
    request,
    [prom](
        const EssClient*,
        const CreateWebThemeConfigRequest&,
        CreateWebThemeConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DeleteExtendedServiceAuthInfosOutcome EssClient::DeleteExtendedServiceAuthInfos(const DeleteExtendedServiceAuthInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteExtendedServiceAuthInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteExtendedServiceAuthInfosResponse rsp = DeleteExtendedServiceAuthInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteExtendedServiceAuthInfosOutcome(rsp);
        else
            return DeleteExtendedServiceAuthInfosOutcome(o.GetError());
    }
    else
    {
        return DeleteExtendedServiceAuthInfosOutcome(outcome.GetError());
    }
}

void EssClient::DeleteExtendedServiceAuthInfosAsync(const DeleteExtendedServiceAuthInfosRequest& request, const DeleteExtendedServiceAuthInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteExtendedServiceAuthInfosRequest&;
    using Resp = DeleteExtendedServiceAuthInfosResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteExtendedServiceAuthInfos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DeleteExtendedServiceAuthInfosOutcomeCallable EssClient::DeleteExtendedServiceAuthInfosCallable(const DeleteExtendedServiceAuthInfosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteExtendedServiceAuthInfosOutcome>>();
    DeleteExtendedServiceAuthInfosAsync(
    request,
    [prom](
        const EssClient*,
        const DeleteExtendedServiceAuthInfosRequest&,
        DeleteExtendedServiceAuthInfosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DeleteIntegrationDepartmentOutcome EssClient::DeleteIntegrationDepartment(const DeleteIntegrationDepartmentRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIntegrationDepartment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIntegrationDepartmentResponse rsp = DeleteIntegrationDepartmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIntegrationDepartmentOutcome(rsp);
        else
            return DeleteIntegrationDepartmentOutcome(o.GetError());
    }
    else
    {
        return DeleteIntegrationDepartmentOutcome(outcome.GetError());
    }
}

void EssClient::DeleteIntegrationDepartmentAsync(const DeleteIntegrationDepartmentRequest& request, const DeleteIntegrationDepartmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteIntegrationDepartmentRequest&;
    using Resp = DeleteIntegrationDepartmentResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteIntegrationDepartment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DeleteIntegrationDepartmentOutcomeCallable EssClient::DeleteIntegrationDepartmentCallable(const DeleteIntegrationDepartmentRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteIntegrationDepartmentOutcome>>();
    DeleteIntegrationDepartmentAsync(
    request,
    [prom](
        const EssClient*,
        const DeleteIntegrationDepartmentRequest&,
        DeleteIntegrationDepartmentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DeleteIntegrationEmployeesOutcome EssClient::DeleteIntegrationEmployees(const DeleteIntegrationEmployeesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIntegrationEmployees");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIntegrationEmployeesResponse rsp = DeleteIntegrationEmployeesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIntegrationEmployeesOutcome(rsp);
        else
            return DeleteIntegrationEmployeesOutcome(o.GetError());
    }
    else
    {
        return DeleteIntegrationEmployeesOutcome(outcome.GetError());
    }
}

void EssClient::DeleteIntegrationEmployeesAsync(const DeleteIntegrationEmployeesRequest& request, const DeleteIntegrationEmployeesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteIntegrationEmployeesRequest&;
    using Resp = DeleteIntegrationEmployeesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteIntegrationEmployees", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DeleteIntegrationEmployeesOutcomeCallable EssClient::DeleteIntegrationEmployeesCallable(const DeleteIntegrationEmployeesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteIntegrationEmployeesOutcome>>();
    DeleteIntegrationEmployeesAsync(
    request,
    [prom](
        const EssClient*,
        const DeleteIntegrationEmployeesRequest&,
        DeleteIntegrationEmployeesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DeleteIntegrationRoleUsersOutcome EssClient::DeleteIntegrationRoleUsers(const DeleteIntegrationRoleUsersRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIntegrationRoleUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIntegrationRoleUsersResponse rsp = DeleteIntegrationRoleUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIntegrationRoleUsersOutcome(rsp);
        else
            return DeleteIntegrationRoleUsersOutcome(o.GetError());
    }
    else
    {
        return DeleteIntegrationRoleUsersOutcome(outcome.GetError());
    }
}

void EssClient::DeleteIntegrationRoleUsersAsync(const DeleteIntegrationRoleUsersRequest& request, const DeleteIntegrationRoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteIntegrationRoleUsersRequest&;
    using Resp = DeleteIntegrationRoleUsersResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteIntegrationRoleUsers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DeleteIntegrationRoleUsersOutcomeCallable EssClient::DeleteIntegrationRoleUsersCallable(const DeleteIntegrationRoleUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteIntegrationRoleUsersOutcome>>();
    DeleteIntegrationRoleUsersAsync(
    request,
    [prom](
        const EssClient*,
        const DeleteIntegrationRoleUsersRequest&,
        DeleteIntegrationRoleUsersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DeleteOrganizationAuthorizationsOutcome EssClient::DeleteOrganizationAuthorizations(const DeleteOrganizationAuthorizationsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOrganizationAuthorizations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOrganizationAuthorizationsResponse rsp = DeleteOrganizationAuthorizationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOrganizationAuthorizationsOutcome(rsp);
        else
            return DeleteOrganizationAuthorizationsOutcome(o.GetError());
    }
    else
    {
        return DeleteOrganizationAuthorizationsOutcome(outcome.GetError());
    }
}

void EssClient::DeleteOrganizationAuthorizationsAsync(const DeleteOrganizationAuthorizationsRequest& request, const DeleteOrganizationAuthorizationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteOrganizationAuthorizationsRequest&;
    using Resp = DeleteOrganizationAuthorizationsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteOrganizationAuthorizations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DeleteOrganizationAuthorizationsOutcomeCallable EssClient::DeleteOrganizationAuthorizationsCallable(const DeleteOrganizationAuthorizationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteOrganizationAuthorizationsOutcome>>();
    DeleteOrganizationAuthorizationsAsync(
    request,
    [prom](
        const EssClient*,
        const DeleteOrganizationAuthorizationsRequest&,
        DeleteOrganizationAuthorizationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DeleteSealPoliciesOutcome EssClient::DeleteSealPolicies(const DeleteSealPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSealPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSealPoliciesResponse rsp = DeleteSealPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSealPoliciesOutcome(rsp);
        else
            return DeleteSealPoliciesOutcome(o.GetError());
    }
    else
    {
        return DeleteSealPoliciesOutcome(outcome.GetError());
    }
}

void EssClient::DeleteSealPoliciesAsync(const DeleteSealPoliciesRequest& request, const DeleteSealPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSealPoliciesRequest&;
    using Resp = DeleteSealPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSealPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DeleteSealPoliciesOutcomeCallable EssClient::DeleteSealPoliciesCallable(const DeleteSealPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSealPoliciesOutcome>>();
    DeleteSealPoliciesAsync(
    request,
    [prom](
        const EssClient*,
        const DeleteSealPoliciesRequest&,
        DeleteSealPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DeleteSingleSignOnEmployeesOutcome EssClient::DeleteSingleSignOnEmployees(const DeleteSingleSignOnEmployeesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSingleSignOnEmployees");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSingleSignOnEmployeesResponse rsp = DeleteSingleSignOnEmployeesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSingleSignOnEmployeesOutcome(rsp);
        else
            return DeleteSingleSignOnEmployeesOutcome(o.GetError());
    }
    else
    {
        return DeleteSingleSignOnEmployeesOutcome(outcome.GetError());
    }
}

void EssClient::DeleteSingleSignOnEmployeesAsync(const DeleteSingleSignOnEmployeesRequest& request, const DeleteSingleSignOnEmployeesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSingleSignOnEmployeesRequest&;
    using Resp = DeleteSingleSignOnEmployeesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSingleSignOnEmployees", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DeleteSingleSignOnEmployeesOutcomeCallable EssClient::DeleteSingleSignOnEmployeesCallable(const DeleteSingleSignOnEmployeesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSingleSignOnEmployeesOutcome>>();
    DeleteSingleSignOnEmployeesAsync(
    request,
    [prom](
        const EssClient*,
        const DeleteSingleSignOnEmployeesRequest&,
        DeleteSingleSignOnEmployeesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeBatchOrganizationRegistrationTasksOutcome EssClient::DescribeBatchOrganizationRegistrationTasks(const DescribeBatchOrganizationRegistrationTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBatchOrganizationRegistrationTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBatchOrganizationRegistrationTasksResponse rsp = DescribeBatchOrganizationRegistrationTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBatchOrganizationRegistrationTasksOutcome(rsp);
        else
            return DescribeBatchOrganizationRegistrationTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeBatchOrganizationRegistrationTasksOutcome(outcome.GetError());
    }
}

void EssClient::DescribeBatchOrganizationRegistrationTasksAsync(const DescribeBatchOrganizationRegistrationTasksRequest& request, const DescribeBatchOrganizationRegistrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBatchOrganizationRegistrationTasksRequest&;
    using Resp = DescribeBatchOrganizationRegistrationTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBatchOrganizationRegistrationTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeBatchOrganizationRegistrationTasksOutcomeCallable EssClient::DescribeBatchOrganizationRegistrationTasksCallable(const DescribeBatchOrganizationRegistrationTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBatchOrganizationRegistrationTasksOutcome>>();
    DescribeBatchOrganizationRegistrationTasksAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeBatchOrganizationRegistrationTasksRequest&,
        DescribeBatchOrganizationRegistrationTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeBatchOrganizationRegistrationUrlsOutcome EssClient::DescribeBatchOrganizationRegistrationUrls(const DescribeBatchOrganizationRegistrationUrlsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBatchOrganizationRegistrationUrls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBatchOrganizationRegistrationUrlsResponse rsp = DescribeBatchOrganizationRegistrationUrlsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBatchOrganizationRegistrationUrlsOutcome(rsp);
        else
            return DescribeBatchOrganizationRegistrationUrlsOutcome(o.GetError());
    }
    else
    {
        return DescribeBatchOrganizationRegistrationUrlsOutcome(outcome.GetError());
    }
}

void EssClient::DescribeBatchOrganizationRegistrationUrlsAsync(const DescribeBatchOrganizationRegistrationUrlsRequest& request, const DescribeBatchOrganizationRegistrationUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBatchOrganizationRegistrationUrlsRequest&;
    using Resp = DescribeBatchOrganizationRegistrationUrlsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBatchOrganizationRegistrationUrls", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeBatchOrganizationRegistrationUrlsOutcomeCallable EssClient::DescribeBatchOrganizationRegistrationUrlsCallable(const DescribeBatchOrganizationRegistrationUrlsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBatchOrganizationRegistrationUrlsOutcome>>();
    DescribeBatchOrganizationRegistrationUrlsAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeBatchOrganizationRegistrationUrlsRequest&,
        DescribeBatchOrganizationRegistrationUrlsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeBillUsageOutcome EssClient::DescribeBillUsage(const DescribeBillUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillUsageResponse rsp = DescribeBillUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillUsageOutcome(rsp);
        else
            return DescribeBillUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeBillUsageOutcome(outcome.GetError());
    }
}

void EssClient::DescribeBillUsageAsync(const DescribeBillUsageRequest& request, const DescribeBillUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillUsageRequest&;
    using Resp = DescribeBillUsageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillUsage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeBillUsageOutcomeCallable EssClient::DescribeBillUsageCallable(const DescribeBillUsageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillUsageOutcome>>();
    DescribeBillUsageAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeBillUsageRequest&,
        DescribeBillUsageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeBillUsageDetailOutcome EssClient::DescribeBillUsageDetail(const DescribeBillUsageDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillUsageDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillUsageDetailResponse rsp = DescribeBillUsageDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillUsageDetailOutcome(rsp);
        else
            return DescribeBillUsageDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeBillUsageDetailOutcome(outcome.GetError());
    }
}

void EssClient::DescribeBillUsageDetailAsync(const DescribeBillUsageDetailRequest& request, const DescribeBillUsageDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillUsageDetailRequest&;
    using Resp = DescribeBillUsageDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillUsageDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeBillUsageDetailOutcomeCallable EssClient::DescribeBillUsageDetailCallable(const DescribeBillUsageDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillUsageDetailOutcome>>();
    DescribeBillUsageDetailAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeBillUsageDetailRequest&,
        DescribeBillUsageDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeCancelFlowsTaskOutcome EssClient::DescribeCancelFlowsTask(const DescribeCancelFlowsTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCancelFlowsTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCancelFlowsTaskResponse rsp = DescribeCancelFlowsTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCancelFlowsTaskOutcome(rsp);
        else
            return DescribeCancelFlowsTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeCancelFlowsTaskOutcome(outcome.GetError());
    }
}

void EssClient::DescribeCancelFlowsTaskAsync(const DescribeCancelFlowsTaskRequest& request, const DescribeCancelFlowsTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCancelFlowsTaskRequest&;
    using Resp = DescribeCancelFlowsTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCancelFlowsTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeCancelFlowsTaskOutcomeCallable EssClient::DescribeCancelFlowsTaskCallable(const DescribeCancelFlowsTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCancelFlowsTaskOutcome>>();
    DescribeCancelFlowsTaskAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeCancelFlowsTaskRequest&,
        DescribeCancelFlowsTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeContractComparisonTaskOutcome EssClient::DescribeContractComparisonTask(const DescribeContractComparisonTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeContractComparisonTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeContractComparisonTaskResponse rsp = DescribeContractComparisonTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeContractComparisonTaskOutcome(rsp);
        else
            return DescribeContractComparisonTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeContractComparisonTaskOutcome(outcome.GetError());
    }
}

void EssClient::DescribeContractComparisonTaskAsync(const DescribeContractComparisonTaskRequest& request, const DescribeContractComparisonTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeContractComparisonTaskRequest&;
    using Resp = DescribeContractComparisonTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeContractComparisonTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeContractComparisonTaskOutcomeCallable EssClient::DescribeContractComparisonTaskCallable(const DescribeContractComparisonTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeContractComparisonTaskOutcome>>();
    DescribeContractComparisonTaskAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeContractComparisonTaskRequest&,
        DescribeContractComparisonTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeContractDiffTaskWebUrlOutcome EssClient::DescribeContractDiffTaskWebUrl(const DescribeContractDiffTaskWebUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeContractDiffTaskWebUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeContractDiffTaskWebUrlResponse rsp = DescribeContractDiffTaskWebUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeContractDiffTaskWebUrlOutcome(rsp);
        else
            return DescribeContractDiffTaskWebUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeContractDiffTaskWebUrlOutcome(outcome.GetError());
    }
}

void EssClient::DescribeContractDiffTaskWebUrlAsync(const DescribeContractDiffTaskWebUrlRequest& request, const DescribeContractDiffTaskWebUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeContractDiffTaskWebUrlRequest&;
    using Resp = DescribeContractDiffTaskWebUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeContractDiffTaskWebUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeContractDiffTaskWebUrlOutcomeCallable EssClient::DescribeContractDiffTaskWebUrlCallable(const DescribeContractDiffTaskWebUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeContractDiffTaskWebUrlOutcome>>();
    DescribeContractDiffTaskWebUrlAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeContractDiffTaskWebUrlRequest&,
        DescribeContractDiffTaskWebUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeContractReviewTaskOutcome EssClient::DescribeContractReviewTask(const DescribeContractReviewTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeContractReviewTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeContractReviewTaskResponse rsp = DescribeContractReviewTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeContractReviewTaskOutcome(rsp);
        else
            return DescribeContractReviewTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeContractReviewTaskOutcome(outcome.GetError());
    }
}

void EssClient::DescribeContractReviewTaskAsync(const DescribeContractReviewTaskRequest& request, const DescribeContractReviewTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeContractReviewTaskRequest&;
    using Resp = DescribeContractReviewTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeContractReviewTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeContractReviewTaskOutcomeCallable EssClient::DescribeContractReviewTaskCallable(const DescribeContractReviewTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeContractReviewTaskOutcome>>();
    DescribeContractReviewTaskAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeContractReviewTaskRequest&,
        DescribeContractReviewTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeContractReviewWebUrlOutcome EssClient::DescribeContractReviewWebUrl(const DescribeContractReviewWebUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeContractReviewWebUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeContractReviewWebUrlResponse rsp = DescribeContractReviewWebUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeContractReviewWebUrlOutcome(rsp);
        else
            return DescribeContractReviewWebUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeContractReviewWebUrlOutcome(outcome.GetError());
    }
}

void EssClient::DescribeContractReviewWebUrlAsync(const DescribeContractReviewWebUrlRequest& request, const DescribeContractReviewWebUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeContractReviewWebUrlRequest&;
    using Resp = DescribeContractReviewWebUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeContractReviewWebUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeContractReviewWebUrlOutcomeCallable EssClient::DescribeContractReviewWebUrlCallable(const DescribeContractReviewWebUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeContractReviewWebUrlOutcome>>();
    DescribeContractReviewWebUrlAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeContractReviewWebUrlRequest&,
        DescribeContractReviewWebUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeExtendedServiceAuthDetailOutcome EssClient::DescribeExtendedServiceAuthDetail(const DescribeExtendedServiceAuthDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExtendedServiceAuthDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExtendedServiceAuthDetailResponse rsp = DescribeExtendedServiceAuthDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExtendedServiceAuthDetailOutcome(rsp);
        else
            return DescribeExtendedServiceAuthDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeExtendedServiceAuthDetailOutcome(outcome.GetError());
    }
}

void EssClient::DescribeExtendedServiceAuthDetailAsync(const DescribeExtendedServiceAuthDetailRequest& request, const DescribeExtendedServiceAuthDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExtendedServiceAuthDetailRequest&;
    using Resp = DescribeExtendedServiceAuthDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExtendedServiceAuthDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeExtendedServiceAuthDetailOutcomeCallable EssClient::DescribeExtendedServiceAuthDetailCallable(const DescribeExtendedServiceAuthDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExtendedServiceAuthDetailOutcome>>();
    DescribeExtendedServiceAuthDetailAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeExtendedServiceAuthDetailRequest&,
        DescribeExtendedServiceAuthDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeExtendedServiceAuthInfosOutcome EssClient::DescribeExtendedServiceAuthInfos(const DescribeExtendedServiceAuthInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExtendedServiceAuthInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExtendedServiceAuthInfosResponse rsp = DescribeExtendedServiceAuthInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExtendedServiceAuthInfosOutcome(rsp);
        else
            return DescribeExtendedServiceAuthInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeExtendedServiceAuthInfosOutcome(outcome.GetError());
    }
}

void EssClient::DescribeExtendedServiceAuthInfosAsync(const DescribeExtendedServiceAuthInfosRequest& request, const DescribeExtendedServiceAuthInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExtendedServiceAuthInfosRequest&;
    using Resp = DescribeExtendedServiceAuthInfosResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExtendedServiceAuthInfos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeExtendedServiceAuthInfosOutcomeCallable EssClient::DescribeExtendedServiceAuthInfosCallable(const DescribeExtendedServiceAuthInfosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExtendedServiceAuthInfosOutcome>>();
    DescribeExtendedServiceAuthInfosAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeExtendedServiceAuthInfosRequest&,
        DescribeExtendedServiceAuthInfosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeFileCounterSignResultOutcome EssClient::DescribeFileCounterSignResult(const DescribeFileCounterSignResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileCounterSignResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileCounterSignResultResponse rsp = DescribeFileCounterSignResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileCounterSignResultOutcome(rsp);
        else
            return DescribeFileCounterSignResultOutcome(o.GetError());
    }
    else
    {
        return DescribeFileCounterSignResultOutcome(outcome.GetError());
    }
}

void EssClient::DescribeFileCounterSignResultAsync(const DescribeFileCounterSignResultRequest& request, const DescribeFileCounterSignResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFileCounterSignResultRequest&;
    using Resp = DescribeFileCounterSignResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFileCounterSignResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeFileCounterSignResultOutcomeCallable EssClient::DescribeFileCounterSignResultCallable(const DescribeFileCounterSignResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFileCounterSignResultOutcome>>();
    DescribeFileCounterSignResultAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeFileCounterSignResultRequest&,
        DescribeFileCounterSignResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeFileUrlsOutcome EssClient::DescribeFileUrls(const DescribeFileUrlsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileUrls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileUrlsResponse rsp = DescribeFileUrlsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileUrlsOutcome(rsp);
        else
            return DescribeFileUrlsOutcome(o.GetError());
    }
    else
    {
        return DescribeFileUrlsOutcome(outcome.GetError());
    }
}

void EssClient::DescribeFileUrlsAsync(const DescribeFileUrlsRequest& request, const DescribeFileUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFileUrlsRequest&;
    using Resp = DescribeFileUrlsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFileUrls", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeFileUrlsOutcomeCallable EssClient::DescribeFileUrlsCallable(const DescribeFileUrlsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFileUrlsOutcome>>();
    DescribeFileUrlsAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeFileUrlsRequest&,
        DescribeFileUrlsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeFlowBriefsOutcome EssClient::DescribeFlowBriefs(const DescribeFlowBriefsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowBriefs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowBriefsResponse rsp = DescribeFlowBriefsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowBriefsOutcome(rsp);
        else
            return DescribeFlowBriefsOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowBriefsOutcome(outcome.GetError());
    }
}

void EssClient::DescribeFlowBriefsAsync(const DescribeFlowBriefsRequest& request, const DescribeFlowBriefsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFlowBriefsRequest&;
    using Resp = DescribeFlowBriefsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFlowBriefs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeFlowBriefsOutcomeCallable EssClient::DescribeFlowBriefsCallable(const DescribeFlowBriefsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFlowBriefsOutcome>>();
    DescribeFlowBriefsAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeFlowBriefsRequest&,
        DescribeFlowBriefsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeFlowComponentsOutcome EssClient::DescribeFlowComponents(const DescribeFlowComponentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowComponents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowComponentsResponse rsp = DescribeFlowComponentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowComponentsOutcome(rsp);
        else
            return DescribeFlowComponentsOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowComponentsOutcome(outcome.GetError());
    }
}

void EssClient::DescribeFlowComponentsAsync(const DescribeFlowComponentsRequest& request, const DescribeFlowComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFlowComponentsRequest&;
    using Resp = DescribeFlowComponentsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFlowComponents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeFlowComponentsOutcomeCallable EssClient::DescribeFlowComponentsCallable(const DescribeFlowComponentsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFlowComponentsOutcome>>();
    DescribeFlowComponentsAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeFlowComponentsRequest&,
        DescribeFlowComponentsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeFlowEvidenceReportOutcome EssClient::DescribeFlowEvidenceReport(const DescribeFlowEvidenceReportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowEvidenceReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowEvidenceReportResponse rsp = DescribeFlowEvidenceReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowEvidenceReportOutcome(rsp);
        else
            return DescribeFlowEvidenceReportOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowEvidenceReportOutcome(outcome.GetError());
    }
}

void EssClient::DescribeFlowEvidenceReportAsync(const DescribeFlowEvidenceReportRequest& request, const DescribeFlowEvidenceReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFlowEvidenceReportRequest&;
    using Resp = DescribeFlowEvidenceReportResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFlowEvidenceReport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeFlowEvidenceReportOutcomeCallable EssClient::DescribeFlowEvidenceReportCallable(const DescribeFlowEvidenceReportRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFlowEvidenceReportOutcome>>();
    DescribeFlowEvidenceReportAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeFlowEvidenceReportRequest&,
        DescribeFlowEvidenceReportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeFlowInfoOutcome EssClient::DescribeFlowInfo(const DescribeFlowInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowInfoResponse rsp = DescribeFlowInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowInfoOutcome(rsp);
        else
            return DescribeFlowInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowInfoOutcome(outcome.GetError());
    }
}

void EssClient::DescribeFlowInfoAsync(const DescribeFlowInfoRequest& request, const DescribeFlowInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFlowInfoRequest&;
    using Resp = DescribeFlowInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFlowInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeFlowInfoOutcomeCallable EssClient::DescribeFlowInfoCallable(const DescribeFlowInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFlowInfoOutcome>>();
    DescribeFlowInfoAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeFlowInfoRequest&,
        DescribeFlowInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeFlowTemplatesOutcome EssClient::DescribeFlowTemplates(const DescribeFlowTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowTemplatesResponse rsp = DescribeFlowTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowTemplatesOutcome(rsp);
        else
            return DescribeFlowTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowTemplatesOutcome(outcome.GetError());
    }
}

void EssClient::DescribeFlowTemplatesAsync(const DescribeFlowTemplatesRequest& request, const DescribeFlowTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFlowTemplatesRequest&;
    using Resp = DescribeFlowTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFlowTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeFlowTemplatesOutcomeCallable EssClient::DescribeFlowTemplatesCallable(const DescribeFlowTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFlowTemplatesOutcome>>();
    DescribeFlowTemplatesAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeFlowTemplatesRequest&,
        DescribeFlowTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeInformationExtractionTaskOutcome EssClient::DescribeInformationExtractionTask(const DescribeInformationExtractionTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInformationExtractionTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInformationExtractionTaskResponse rsp = DescribeInformationExtractionTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInformationExtractionTaskOutcome(rsp);
        else
            return DescribeInformationExtractionTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeInformationExtractionTaskOutcome(outcome.GetError());
    }
}

void EssClient::DescribeInformationExtractionTaskAsync(const DescribeInformationExtractionTaskRequest& request, const DescribeInformationExtractionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInformationExtractionTaskRequest&;
    using Resp = DescribeInformationExtractionTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInformationExtractionTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeInformationExtractionTaskOutcomeCallable EssClient::DescribeInformationExtractionTaskCallable(const DescribeInformationExtractionTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInformationExtractionTaskOutcome>>();
    DescribeInformationExtractionTaskAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeInformationExtractionTaskRequest&,
        DescribeInformationExtractionTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeInformationExtractionWebUrlOutcome EssClient::DescribeInformationExtractionWebUrl(const DescribeInformationExtractionWebUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInformationExtractionWebUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInformationExtractionWebUrlResponse rsp = DescribeInformationExtractionWebUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInformationExtractionWebUrlOutcome(rsp);
        else
            return DescribeInformationExtractionWebUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeInformationExtractionWebUrlOutcome(outcome.GetError());
    }
}

void EssClient::DescribeInformationExtractionWebUrlAsync(const DescribeInformationExtractionWebUrlRequest& request, const DescribeInformationExtractionWebUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInformationExtractionWebUrlRequest&;
    using Resp = DescribeInformationExtractionWebUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInformationExtractionWebUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeInformationExtractionWebUrlOutcomeCallable EssClient::DescribeInformationExtractionWebUrlCallable(const DescribeInformationExtractionWebUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInformationExtractionWebUrlOutcome>>();
    DescribeInformationExtractionWebUrlAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeInformationExtractionWebUrlRequest&,
        DescribeInformationExtractionWebUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeIntegrationDepartmentsOutcome EssClient::DescribeIntegrationDepartments(const DescribeIntegrationDepartmentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntegrationDepartments");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntegrationDepartmentsResponse rsp = DescribeIntegrationDepartmentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntegrationDepartmentsOutcome(rsp);
        else
            return DescribeIntegrationDepartmentsOutcome(o.GetError());
    }
    else
    {
        return DescribeIntegrationDepartmentsOutcome(outcome.GetError());
    }
}

void EssClient::DescribeIntegrationDepartmentsAsync(const DescribeIntegrationDepartmentsRequest& request, const DescribeIntegrationDepartmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIntegrationDepartmentsRequest&;
    using Resp = DescribeIntegrationDepartmentsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIntegrationDepartments", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeIntegrationDepartmentsOutcomeCallable EssClient::DescribeIntegrationDepartmentsCallable(const DescribeIntegrationDepartmentsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIntegrationDepartmentsOutcome>>();
    DescribeIntegrationDepartmentsAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeIntegrationDepartmentsRequest&,
        DescribeIntegrationDepartmentsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeIntegrationEmployeesOutcome EssClient::DescribeIntegrationEmployees(const DescribeIntegrationEmployeesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntegrationEmployees");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntegrationEmployeesResponse rsp = DescribeIntegrationEmployeesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntegrationEmployeesOutcome(rsp);
        else
            return DescribeIntegrationEmployeesOutcome(o.GetError());
    }
    else
    {
        return DescribeIntegrationEmployeesOutcome(outcome.GetError());
    }
}

void EssClient::DescribeIntegrationEmployeesAsync(const DescribeIntegrationEmployeesRequest& request, const DescribeIntegrationEmployeesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIntegrationEmployeesRequest&;
    using Resp = DescribeIntegrationEmployeesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIntegrationEmployees", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeIntegrationEmployeesOutcomeCallable EssClient::DescribeIntegrationEmployeesCallable(const DescribeIntegrationEmployeesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIntegrationEmployeesOutcome>>();
    DescribeIntegrationEmployeesAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeIntegrationEmployeesRequest&,
        DescribeIntegrationEmployeesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeIntegrationRolesOutcome EssClient::DescribeIntegrationRoles(const DescribeIntegrationRolesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntegrationRoles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntegrationRolesResponse rsp = DescribeIntegrationRolesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntegrationRolesOutcome(rsp);
        else
            return DescribeIntegrationRolesOutcome(o.GetError());
    }
    else
    {
        return DescribeIntegrationRolesOutcome(outcome.GetError());
    }
}

void EssClient::DescribeIntegrationRolesAsync(const DescribeIntegrationRolesRequest& request, const DescribeIntegrationRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIntegrationRolesRequest&;
    using Resp = DescribeIntegrationRolesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIntegrationRoles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeIntegrationRolesOutcomeCallable EssClient::DescribeIntegrationRolesCallable(const DescribeIntegrationRolesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIntegrationRolesOutcome>>();
    DescribeIntegrationRolesAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeIntegrationRolesRequest&,
        DescribeIntegrationRolesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeOrganizationAuthStatusOutcome EssClient::DescribeOrganizationAuthStatus(const DescribeOrganizationAuthStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganizationAuthStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationAuthStatusResponse rsp = DescribeOrganizationAuthStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationAuthStatusOutcome(rsp);
        else
            return DescribeOrganizationAuthStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationAuthStatusOutcome(outcome.GetError());
    }
}

void EssClient::DescribeOrganizationAuthStatusAsync(const DescribeOrganizationAuthStatusRequest& request, const DescribeOrganizationAuthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOrganizationAuthStatusRequest&;
    using Resp = DescribeOrganizationAuthStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOrganizationAuthStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeOrganizationAuthStatusOutcomeCallable EssClient::DescribeOrganizationAuthStatusCallable(const DescribeOrganizationAuthStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOrganizationAuthStatusOutcome>>();
    DescribeOrganizationAuthStatusAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeOrganizationAuthStatusRequest&,
        DescribeOrganizationAuthStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeOrganizationGroupOrganizationsOutcome EssClient::DescribeOrganizationGroupOrganizations(const DescribeOrganizationGroupOrganizationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganizationGroupOrganizations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationGroupOrganizationsResponse rsp = DescribeOrganizationGroupOrganizationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationGroupOrganizationsOutcome(rsp);
        else
            return DescribeOrganizationGroupOrganizationsOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationGroupOrganizationsOutcome(outcome.GetError());
    }
}

void EssClient::DescribeOrganizationGroupOrganizationsAsync(const DescribeOrganizationGroupOrganizationsRequest& request, const DescribeOrganizationGroupOrganizationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOrganizationGroupOrganizationsRequest&;
    using Resp = DescribeOrganizationGroupOrganizationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOrganizationGroupOrganizations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeOrganizationGroupOrganizationsOutcomeCallable EssClient::DescribeOrganizationGroupOrganizationsCallable(const DescribeOrganizationGroupOrganizationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOrganizationGroupOrganizationsOutcome>>();
    DescribeOrganizationGroupOrganizationsAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeOrganizationGroupOrganizationsRequest&,
        DescribeOrganizationGroupOrganizationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeOrganizationSealsOutcome EssClient::DescribeOrganizationSeals(const DescribeOrganizationSealsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganizationSeals");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationSealsResponse rsp = DescribeOrganizationSealsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationSealsOutcome(rsp);
        else
            return DescribeOrganizationSealsOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationSealsOutcome(outcome.GetError());
    }
}

void EssClient::DescribeOrganizationSealsAsync(const DescribeOrganizationSealsRequest& request, const DescribeOrganizationSealsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOrganizationSealsRequest&;
    using Resp = DescribeOrganizationSealsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOrganizationSeals", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeOrganizationSealsOutcomeCallable EssClient::DescribeOrganizationSealsCallable(const DescribeOrganizationSealsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOrganizationSealsOutcome>>();
    DescribeOrganizationSealsAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeOrganizationSealsRequest&,
        DescribeOrganizationSealsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeOrganizationVerifyStatusOutcome EssClient::DescribeOrganizationVerifyStatus(const DescribeOrganizationVerifyStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganizationVerifyStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationVerifyStatusResponse rsp = DescribeOrganizationVerifyStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationVerifyStatusOutcome(rsp);
        else
            return DescribeOrganizationVerifyStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationVerifyStatusOutcome(outcome.GetError());
    }
}

void EssClient::DescribeOrganizationVerifyStatusAsync(const DescribeOrganizationVerifyStatusRequest& request, const DescribeOrganizationVerifyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOrganizationVerifyStatusRequest&;
    using Resp = DescribeOrganizationVerifyStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOrganizationVerifyStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeOrganizationVerifyStatusOutcomeCallable EssClient::DescribeOrganizationVerifyStatusCallable(const DescribeOrganizationVerifyStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOrganizationVerifyStatusOutcome>>();
    DescribeOrganizationVerifyStatusAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeOrganizationVerifyStatusRequest&,
        DescribeOrganizationVerifyStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribePersonCertificateOutcome EssClient::DescribePersonCertificate(const DescribePersonCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePersonCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePersonCertificateResponse rsp = DescribePersonCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePersonCertificateOutcome(rsp);
        else
            return DescribePersonCertificateOutcome(o.GetError());
    }
    else
    {
        return DescribePersonCertificateOutcome(outcome.GetError());
    }
}

void EssClient::DescribePersonCertificateAsync(const DescribePersonCertificateRequest& request, const DescribePersonCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePersonCertificateRequest&;
    using Resp = DescribePersonCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePersonCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribePersonCertificateOutcomeCallable EssClient::DescribePersonCertificateCallable(const DescribePersonCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePersonCertificateOutcome>>();
    DescribePersonCertificateAsync(
    request,
    [prom](
        const EssClient*,
        const DescribePersonCertificateRequest&,
        DescribePersonCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeSignFaceVideoOutcome EssClient::DescribeSignFaceVideo(const DescribeSignFaceVideoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSignFaceVideo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSignFaceVideoResponse rsp = DescribeSignFaceVideoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSignFaceVideoOutcome(rsp);
        else
            return DescribeSignFaceVideoOutcome(o.GetError());
    }
    else
    {
        return DescribeSignFaceVideoOutcome(outcome.GetError());
    }
}

void EssClient::DescribeSignFaceVideoAsync(const DescribeSignFaceVideoRequest& request, const DescribeSignFaceVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSignFaceVideoRequest&;
    using Resp = DescribeSignFaceVideoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSignFaceVideo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeSignFaceVideoOutcomeCallable EssClient::DescribeSignFaceVideoCallable(const DescribeSignFaceVideoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSignFaceVideoOutcome>>();
    DescribeSignFaceVideoAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeSignFaceVideoRequest&,
        DescribeSignFaceVideoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeSingleSignOnEmployeesOutcome EssClient::DescribeSingleSignOnEmployees(const DescribeSingleSignOnEmployeesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSingleSignOnEmployees");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSingleSignOnEmployeesResponse rsp = DescribeSingleSignOnEmployeesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSingleSignOnEmployeesOutcome(rsp);
        else
            return DescribeSingleSignOnEmployeesOutcome(o.GetError());
    }
    else
    {
        return DescribeSingleSignOnEmployeesOutcome(outcome.GetError());
    }
}

void EssClient::DescribeSingleSignOnEmployeesAsync(const DescribeSingleSignOnEmployeesRequest& request, const DescribeSingleSignOnEmployeesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSingleSignOnEmployeesRequest&;
    using Resp = DescribeSingleSignOnEmployeesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSingleSignOnEmployees", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeSingleSignOnEmployeesOutcomeCallable EssClient::DescribeSingleSignOnEmployeesCallable(const DescribeSingleSignOnEmployeesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSingleSignOnEmployeesOutcome>>();
    DescribeSingleSignOnEmployeesAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeSingleSignOnEmployeesRequest&,
        DescribeSingleSignOnEmployeesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeThirdPartyAuthCodeOutcome EssClient::DescribeThirdPartyAuthCode(const DescribeThirdPartyAuthCodeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeThirdPartyAuthCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeThirdPartyAuthCodeResponse rsp = DescribeThirdPartyAuthCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeThirdPartyAuthCodeOutcome(rsp);
        else
            return DescribeThirdPartyAuthCodeOutcome(o.GetError());
    }
    else
    {
        return DescribeThirdPartyAuthCodeOutcome(outcome.GetError());
    }
}

void EssClient::DescribeThirdPartyAuthCodeAsync(const DescribeThirdPartyAuthCodeRequest& request, const DescribeThirdPartyAuthCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeThirdPartyAuthCodeRequest&;
    using Resp = DescribeThirdPartyAuthCodeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeThirdPartyAuthCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeThirdPartyAuthCodeOutcomeCallable EssClient::DescribeThirdPartyAuthCodeCallable(const DescribeThirdPartyAuthCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeThirdPartyAuthCodeOutcome>>();
    DescribeThirdPartyAuthCodeAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeThirdPartyAuthCodeRequest&,
        DescribeThirdPartyAuthCodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeUserAutoSignStatusOutcome EssClient::DescribeUserAutoSignStatus(const DescribeUserAutoSignStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserAutoSignStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserAutoSignStatusResponse rsp = DescribeUserAutoSignStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserAutoSignStatusOutcome(rsp);
        else
            return DescribeUserAutoSignStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeUserAutoSignStatusOutcome(outcome.GetError());
    }
}

void EssClient::DescribeUserAutoSignStatusAsync(const DescribeUserAutoSignStatusRequest& request, const DescribeUserAutoSignStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserAutoSignStatusRequest&;
    using Resp = DescribeUserAutoSignStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserAutoSignStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeUserAutoSignStatusOutcomeCallable EssClient::DescribeUserAutoSignStatusCallable(const DescribeUserAutoSignStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserAutoSignStatusOutcome>>();
    DescribeUserAutoSignStatusAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeUserAutoSignStatusRequest&,
        DescribeUserAutoSignStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeUserFlowTypeOutcome EssClient::DescribeUserFlowType(const DescribeUserFlowTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserFlowType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserFlowTypeResponse rsp = DescribeUserFlowTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserFlowTypeOutcome(rsp);
        else
            return DescribeUserFlowTypeOutcome(o.GetError());
    }
    else
    {
        return DescribeUserFlowTypeOutcome(outcome.GetError());
    }
}

void EssClient::DescribeUserFlowTypeAsync(const DescribeUserFlowTypeRequest& request, const DescribeUserFlowTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserFlowTypeRequest&;
    using Resp = DescribeUserFlowTypeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserFlowType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeUserFlowTypeOutcomeCallable EssClient::DescribeUserFlowTypeCallable(const DescribeUserFlowTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserFlowTypeOutcome>>();
    DescribeUserFlowTypeAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeUserFlowTypeRequest&,
        DescribeUserFlowTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DescribeUserVerifyStatusOutcome EssClient::DescribeUserVerifyStatus(const DescribeUserVerifyStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserVerifyStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserVerifyStatusResponse rsp = DescribeUserVerifyStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserVerifyStatusOutcome(rsp);
        else
            return DescribeUserVerifyStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeUserVerifyStatusOutcome(outcome.GetError());
    }
}

void EssClient::DescribeUserVerifyStatusAsync(const DescribeUserVerifyStatusRequest& request, const DescribeUserVerifyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserVerifyStatusRequest&;
    using Resp = DescribeUserVerifyStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserVerifyStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DescribeUserVerifyStatusOutcomeCallable EssClient::DescribeUserVerifyStatusCallable(const DescribeUserVerifyStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserVerifyStatusOutcome>>();
    DescribeUserVerifyStatusAsync(
    request,
    [prom](
        const EssClient*,
        const DescribeUserVerifyStatusRequest&,
        DescribeUserVerifyStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::DisableUserAutoSignOutcome EssClient::DisableUserAutoSign(const DisableUserAutoSignRequest &request)
{
    auto outcome = MakeRequest(request, "DisableUserAutoSign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableUserAutoSignResponse rsp = DisableUserAutoSignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableUserAutoSignOutcome(rsp);
        else
            return DisableUserAutoSignOutcome(o.GetError());
    }
    else
    {
        return DisableUserAutoSignOutcome(outcome.GetError());
    }
}

void EssClient::DisableUserAutoSignAsync(const DisableUserAutoSignRequest& request, const DisableUserAutoSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableUserAutoSignRequest&;
    using Resp = DisableUserAutoSignResponse;

    DoRequestAsync<Req, Resp>(
        "DisableUserAutoSign", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::DisableUserAutoSignOutcomeCallable EssClient::DisableUserAutoSignCallable(const DisableUserAutoSignRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableUserAutoSignOutcome>>();
    DisableUserAutoSignAsync(
    request,
    [prom](
        const EssClient*,
        const DisableUserAutoSignRequest&,
        DisableUserAutoSignOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::ExportContractComparisonTaskOutcome EssClient::ExportContractComparisonTask(const ExportContractComparisonTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ExportContractComparisonTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportContractComparisonTaskResponse rsp = ExportContractComparisonTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportContractComparisonTaskOutcome(rsp);
        else
            return ExportContractComparisonTaskOutcome(o.GetError());
    }
    else
    {
        return ExportContractComparisonTaskOutcome(outcome.GetError());
    }
}

void EssClient::ExportContractComparisonTaskAsync(const ExportContractComparisonTaskRequest& request, const ExportContractComparisonTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportContractComparisonTaskRequest&;
    using Resp = ExportContractComparisonTaskResponse;

    DoRequestAsync<Req, Resp>(
        "ExportContractComparisonTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::ExportContractComparisonTaskOutcomeCallable EssClient::ExportContractComparisonTaskCallable(const ExportContractComparisonTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportContractComparisonTaskOutcome>>();
    ExportContractComparisonTaskAsync(
    request,
    [prom](
        const EssClient*,
        const ExportContractComparisonTaskRequest&,
        ExportContractComparisonTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::GetTaskResultApiOutcome EssClient::GetTaskResultApi(const GetTaskResultApiRequest &request)
{
    auto outcome = MakeRequest(request, "GetTaskResultApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTaskResultApiResponse rsp = GetTaskResultApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTaskResultApiOutcome(rsp);
        else
            return GetTaskResultApiOutcome(o.GetError());
    }
    else
    {
        return GetTaskResultApiOutcome(outcome.GetError());
    }
}

void EssClient::GetTaskResultApiAsync(const GetTaskResultApiRequest& request, const GetTaskResultApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTaskResultApiRequest&;
    using Resp = GetTaskResultApiResponse;

    DoRequestAsync<Req, Resp>(
        "GetTaskResultApi", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::GetTaskResultApiOutcomeCallable EssClient::GetTaskResultApiCallable(const GetTaskResultApiRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTaskResultApiOutcome>>();
    GetTaskResultApiAsync(
    request,
    [prom](
        const EssClient*,
        const GetTaskResultApiRequest&,
        GetTaskResultApiOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::ModifyApplicationCallbackInfoOutcome EssClient::ModifyApplicationCallbackInfo(const ModifyApplicationCallbackInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplicationCallbackInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationCallbackInfoResponse rsp = ModifyApplicationCallbackInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationCallbackInfoOutcome(rsp);
        else
            return ModifyApplicationCallbackInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationCallbackInfoOutcome(outcome.GetError());
    }
}

void EssClient::ModifyApplicationCallbackInfoAsync(const ModifyApplicationCallbackInfoRequest& request, const ModifyApplicationCallbackInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyApplicationCallbackInfoRequest&;
    using Resp = ModifyApplicationCallbackInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApplicationCallbackInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::ModifyApplicationCallbackInfoOutcomeCallable EssClient::ModifyApplicationCallbackInfoCallable(const ModifyApplicationCallbackInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApplicationCallbackInfoOutcome>>();
    ModifyApplicationCallbackInfoAsync(
    request,
    [prom](
        const EssClient*,
        const ModifyApplicationCallbackInfoRequest&,
        ModifyApplicationCallbackInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::ModifyExtendedServiceOutcome EssClient::ModifyExtendedService(const ModifyExtendedServiceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyExtendedService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyExtendedServiceResponse rsp = ModifyExtendedServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyExtendedServiceOutcome(rsp);
        else
            return ModifyExtendedServiceOutcome(o.GetError());
    }
    else
    {
        return ModifyExtendedServiceOutcome(outcome.GetError());
    }
}

void EssClient::ModifyExtendedServiceAsync(const ModifyExtendedServiceRequest& request, const ModifyExtendedServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyExtendedServiceRequest&;
    using Resp = ModifyExtendedServiceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyExtendedService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::ModifyExtendedServiceOutcomeCallable EssClient::ModifyExtendedServiceCallable(const ModifyExtendedServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyExtendedServiceOutcome>>();
    ModifyExtendedServiceAsync(
    request,
    [prom](
        const EssClient*,
        const ModifyExtendedServiceRequest&,
        ModifyExtendedServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::ModifyFlowDeadlineOutcome EssClient::ModifyFlowDeadline(const ModifyFlowDeadlineRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFlowDeadline");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFlowDeadlineResponse rsp = ModifyFlowDeadlineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFlowDeadlineOutcome(rsp);
        else
            return ModifyFlowDeadlineOutcome(o.GetError());
    }
    else
    {
        return ModifyFlowDeadlineOutcome(outcome.GetError());
    }
}

void EssClient::ModifyFlowDeadlineAsync(const ModifyFlowDeadlineRequest& request, const ModifyFlowDeadlineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyFlowDeadlineRequest&;
    using Resp = ModifyFlowDeadlineResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyFlowDeadline", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::ModifyFlowDeadlineOutcomeCallable EssClient::ModifyFlowDeadlineCallable(const ModifyFlowDeadlineRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyFlowDeadlineOutcome>>();
    ModifyFlowDeadlineAsync(
    request,
    [prom](
        const EssClient*,
        const ModifyFlowDeadlineRequest&,
        ModifyFlowDeadlineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::ModifyIntegrationDepartmentOutcome EssClient::ModifyIntegrationDepartment(const ModifyIntegrationDepartmentRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIntegrationDepartment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIntegrationDepartmentResponse rsp = ModifyIntegrationDepartmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIntegrationDepartmentOutcome(rsp);
        else
            return ModifyIntegrationDepartmentOutcome(o.GetError());
    }
    else
    {
        return ModifyIntegrationDepartmentOutcome(outcome.GetError());
    }
}

void EssClient::ModifyIntegrationDepartmentAsync(const ModifyIntegrationDepartmentRequest& request, const ModifyIntegrationDepartmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyIntegrationDepartmentRequest&;
    using Resp = ModifyIntegrationDepartmentResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyIntegrationDepartment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::ModifyIntegrationDepartmentOutcomeCallable EssClient::ModifyIntegrationDepartmentCallable(const ModifyIntegrationDepartmentRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyIntegrationDepartmentOutcome>>();
    ModifyIntegrationDepartmentAsync(
    request,
    [prom](
        const EssClient*,
        const ModifyIntegrationDepartmentRequest&,
        ModifyIntegrationDepartmentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::ModifyIntegrationRoleOutcome EssClient::ModifyIntegrationRole(const ModifyIntegrationRoleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIntegrationRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIntegrationRoleResponse rsp = ModifyIntegrationRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIntegrationRoleOutcome(rsp);
        else
            return ModifyIntegrationRoleOutcome(o.GetError());
    }
    else
    {
        return ModifyIntegrationRoleOutcome(outcome.GetError());
    }
}

void EssClient::ModifyIntegrationRoleAsync(const ModifyIntegrationRoleRequest& request, const ModifyIntegrationRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyIntegrationRoleRequest&;
    using Resp = ModifyIntegrationRoleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyIntegrationRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::ModifyIntegrationRoleOutcomeCallable EssClient::ModifyIntegrationRoleCallable(const ModifyIntegrationRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyIntegrationRoleOutcome>>();
    ModifyIntegrationRoleAsync(
    request,
    [prom](
        const EssClient*,
        const ModifyIntegrationRoleRequest&,
        ModifyIntegrationRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::ModifyPartnerAutoSignAuthUrlOutcome EssClient::ModifyPartnerAutoSignAuthUrl(const ModifyPartnerAutoSignAuthUrlRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPartnerAutoSignAuthUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPartnerAutoSignAuthUrlResponse rsp = ModifyPartnerAutoSignAuthUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPartnerAutoSignAuthUrlOutcome(rsp);
        else
            return ModifyPartnerAutoSignAuthUrlOutcome(o.GetError());
    }
    else
    {
        return ModifyPartnerAutoSignAuthUrlOutcome(outcome.GetError());
    }
}

void EssClient::ModifyPartnerAutoSignAuthUrlAsync(const ModifyPartnerAutoSignAuthUrlRequest& request, const ModifyPartnerAutoSignAuthUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPartnerAutoSignAuthUrlRequest&;
    using Resp = ModifyPartnerAutoSignAuthUrlResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPartnerAutoSignAuthUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::ModifyPartnerAutoSignAuthUrlOutcomeCallable EssClient::ModifyPartnerAutoSignAuthUrlCallable(const ModifyPartnerAutoSignAuthUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPartnerAutoSignAuthUrlOutcome>>();
    ModifyPartnerAutoSignAuthUrlAsync(
    request,
    [prom](
        const EssClient*,
        const ModifyPartnerAutoSignAuthUrlRequest&,
        ModifyPartnerAutoSignAuthUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::ModifySingleSignOnEmployeesOutcome EssClient::ModifySingleSignOnEmployees(const ModifySingleSignOnEmployeesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySingleSignOnEmployees");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySingleSignOnEmployeesResponse rsp = ModifySingleSignOnEmployeesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySingleSignOnEmployeesOutcome(rsp);
        else
            return ModifySingleSignOnEmployeesOutcome(o.GetError());
    }
    else
    {
        return ModifySingleSignOnEmployeesOutcome(outcome.GetError());
    }
}

void EssClient::ModifySingleSignOnEmployeesAsync(const ModifySingleSignOnEmployeesRequest& request, const ModifySingleSignOnEmployeesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySingleSignOnEmployeesRequest&;
    using Resp = ModifySingleSignOnEmployeesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySingleSignOnEmployees", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::ModifySingleSignOnEmployeesOutcomeCallable EssClient::ModifySingleSignOnEmployeesCallable(const ModifySingleSignOnEmployeesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySingleSignOnEmployeesOutcome>>();
    ModifySingleSignOnEmployeesAsync(
    request,
    [prom](
        const EssClient*,
        const ModifySingleSignOnEmployeesRequest&,
        ModifySingleSignOnEmployeesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::OperateSealsOutcome EssClient::OperateSeals(const OperateSealsRequest &request)
{
    auto outcome = MakeRequest(request, "OperateSeals");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OperateSealsResponse rsp = OperateSealsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OperateSealsOutcome(rsp);
        else
            return OperateSealsOutcome(o.GetError());
    }
    else
    {
        return OperateSealsOutcome(outcome.GetError());
    }
}

void EssClient::OperateSealsAsync(const OperateSealsRequest& request, const OperateSealsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OperateSealsRequest&;
    using Resp = OperateSealsResponse;

    DoRequestAsync<Req, Resp>(
        "OperateSeals", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::OperateSealsOutcomeCallable EssClient::OperateSealsCallable(const OperateSealsRequest &request)
{
    const auto prom = std::make_shared<std::promise<OperateSealsOutcome>>();
    OperateSealsAsync(
    request,
    [prom](
        const EssClient*,
        const OperateSealsRequest&,
        OperateSealsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::OperateTemplateOutcome EssClient::OperateTemplate(const OperateTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "OperateTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OperateTemplateResponse rsp = OperateTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OperateTemplateOutcome(rsp);
        else
            return OperateTemplateOutcome(o.GetError());
    }
    else
    {
        return OperateTemplateOutcome(outcome.GetError());
    }
}

void EssClient::OperateTemplateAsync(const OperateTemplateRequest& request, const OperateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OperateTemplateRequest&;
    using Resp = OperateTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "OperateTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::OperateTemplateOutcomeCallable EssClient::OperateTemplateCallable(const OperateTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<OperateTemplateOutcome>>();
    OperateTemplateAsync(
    request,
    [prom](
        const EssClient*,
        const OperateTemplateRequest&,
        OperateTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::RenewAutoSignLicenseOutcome EssClient::RenewAutoSignLicense(const RenewAutoSignLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "RenewAutoSignLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewAutoSignLicenseResponse rsp = RenewAutoSignLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewAutoSignLicenseOutcome(rsp);
        else
            return RenewAutoSignLicenseOutcome(o.GetError());
    }
    else
    {
        return RenewAutoSignLicenseOutcome(outcome.GetError());
    }
}

void EssClient::RenewAutoSignLicenseAsync(const RenewAutoSignLicenseRequest& request, const RenewAutoSignLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewAutoSignLicenseRequest&;
    using Resp = RenewAutoSignLicenseResponse;

    DoRequestAsync<Req, Resp>(
        "RenewAutoSignLicense", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::RenewAutoSignLicenseOutcomeCallable EssClient::RenewAutoSignLicenseCallable(const RenewAutoSignLicenseRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewAutoSignLicenseOutcome>>();
    RenewAutoSignLicenseAsync(
    request,
    [prom](
        const EssClient*,
        const RenewAutoSignLicenseRequest&,
        RenewAutoSignLicenseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::StartFlowOutcome EssClient::StartFlow(const StartFlowRequest &request)
{
    auto outcome = MakeRequest(request, "StartFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartFlowResponse rsp = StartFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartFlowOutcome(rsp);
        else
            return StartFlowOutcome(o.GetError());
    }
    else
    {
        return StartFlowOutcome(outcome.GetError());
    }
}

void EssClient::StartFlowAsync(const StartFlowRequest& request, const StartFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartFlowRequest&;
    using Resp = StartFlowResponse;

    DoRequestAsync<Req, Resp>(
        "StartFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::StartFlowOutcomeCallable EssClient::StartFlowCallable(const StartFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartFlowOutcome>>();
    StartFlowAsync(
    request,
    [prom](
        const EssClient*,
        const StartFlowRequest&,
        StartFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::UnbindEmployeeUserIdWithClientOpenIdOutcome EssClient::UnbindEmployeeUserIdWithClientOpenId(const UnbindEmployeeUserIdWithClientOpenIdRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindEmployeeUserIdWithClientOpenId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindEmployeeUserIdWithClientOpenIdResponse rsp = UnbindEmployeeUserIdWithClientOpenIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindEmployeeUserIdWithClientOpenIdOutcome(rsp);
        else
            return UnbindEmployeeUserIdWithClientOpenIdOutcome(o.GetError());
    }
    else
    {
        return UnbindEmployeeUserIdWithClientOpenIdOutcome(outcome.GetError());
    }
}

void EssClient::UnbindEmployeeUserIdWithClientOpenIdAsync(const UnbindEmployeeUserIdWithClientOpenIdRequest& request, const UnbindEmployeeUserIdWithClientOpenIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindEmployeeUserIdWithClientOpenIdRequest&;
    using Resp = UnbindEmployeeUserIdWithClientOpenIdResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindEmployeeUserIdWithClientOpenId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::UnbindEmployeeUserIdWithClientOpenIdOutcomeCallable EssClient::UnbindEmployeeUserIdWithClientOpenIdCallable(const UnbindEmployeeUserIdWithClientOpenIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindEmployeeUserIdWithClientOpenIdOutcome>>();
    UnbindEmployeeUserIdWithClientOpenIdAsync(
    request,
    [prom](
        const EssClient*,
        const UnbindEmployeeUserIdWithClientOpenIdRequest&,
        UnbindEmployeeUserIdWithClientOpenIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::UpdateIntegrationEmployeesOutcome EssClient::UpdateIntegrationEmployees(const UpdateIntegrationEmployeesRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateIntegrationEmployees");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateIntegrationEmployeesResponse rsp = UpdateIntegrationEmployeesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateIntegrationEmployeesOutcome(rsp);
        else
            return UpdateIntegrationEmployeesOutcome(o.GetError());
    }
    else
    {
        return UpdateIntegrationEmployeesOutcome(outcome.GetError());
    }
}

void EssClient::UpdateIntegrationEmployeesAsync(const UpdateIntegrationEmployeesRequest& request, const UpdateIntegrationEmployeesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateIntegrationEmployeesRequest&;
    using Resp = UpdateIntegrationEmployeesResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateIntegrationEmployees", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::UpdateIntegrationEmployeesOutcomeCallable EssClient::UpdateIntegrationEmployeesCallable(const UpdateIntegrationEmployeesRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateIntegrationEmployeesOutcome>>();
    UpdateIntegrationEmployeesAsync(
    request,
    [prom](
        const EssClient*,
        const UpdateIntegrationEmployeesRequest&,
        UpdateIntegrationEmployeesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::UploadFilesOutcome EssClient::UploadFiles(const UploadFilesRequest &request)
{
    auto outcome = MakeRequest(request, "UploadFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadFilesResponse rsp = UploadFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadFilesOutcome(rsp);
        else
            return UploadFilesOutcome(o.GetError());
    }
    else
    {
        return UploadFilesOutcome(outcome.GetError());
    }
}

void EssClient::UploadFilesAsync(const UploadFilesRequest& request, const UploadFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadFilesRequest&;
    using Resp = UploadFilesResponse;

    DoRequestAsync<Req, Resp>(
        "UploadFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::UploadFilesOutcomeCallable EssClient::UploadFilesCallable(const UploadFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadFilesOutcome>>();
    UploadFilesAsync(
    request,
    [prom](
        const EssClient*,
        const UploadFilesRequest&,
        UploadFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::VerifyDigitFileOutcome EssClient::VerifyDigitFile(const VerifyDigitFileRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyDigitFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyDigitFileResponse rsp = VerifyDigitFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyDigitFileOutcome(rsp);
        else
            return VerifyDigitFileOutcome(o.GetError());
    }
    else
    {
        return VerifyDigitFileOutcome(outcome.GetError());
    }
}

void EssClient::VerifyDigitFileAsync(const VerifyDigitFileRequest& request, const VerifyDigitFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VerifyDigitFileRequest&;
    using Resp = VerifyDigitFileResponse;

    DoRequestAsync<Req, Resp>(
        "VerifyDigitFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::VerifyDigitFileOutcomeCallable EssClient::VerifyDigitFileCallable(const VerifyDigitFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<VerifyDigitFileOutcome>>();
    VerifyDigitFileAsync(
    request,
    [prom](
        const EssClient*,
        const VerifyDigitFileRequest&,
        VerifyDigitFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssClient::VerifyPdfOutcome EssClient::VerifyPdf(const VerifyPdfRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyPdf");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyPdfResponse rsp = VerifyPdfResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyPdfOutcome(rsp);
        else
            return VerifyPdfOutcome(o.GetError());
    }
    else
    {
        return VerifyPdfOutcome(outcome.GetError());
    }
}

void EssClient::VerifyPdfAsync(const VerifyPdfRequest& request, const VerifyPdfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VerifyPdfRequest&;
    using Resp = VerifyPdfResponse;

    DoRequestAsync<Req, Resp>(
        "VerifyPdf", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssClient::VerifyPdfOutcomeCallable EssClient::VerifyPdfCallable(const VerifyPdfRequest &request)
{
    const auto prom = std::make_shared<std::promise<VerifyPdfOutcome>>();
    VerifyPdfAsync(
    request,
    [prom](
        const EssClient*,
        const VerifyPdfRequest&,
        VerifyPdfOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

