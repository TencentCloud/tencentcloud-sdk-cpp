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

#include <tencentcloud/ses/v20201002/SesClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ses::V20201002;
using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-10-02";
    const string ENDPOINT = "ses.tencentcloudapi.com";
}

SesClient::SesClient(const Credential &credential, const string &region) :
    SesClient(credential, region, ClientProfile())
{
}

SesClient::SesClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


SesClient::BatchSendEmailOutcome SesClient::BatchSendEmail(const BatchSendEmailRequest &request)
{
    auto outcome = MakeRequest(request, "BatchSendEmail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchSendEmailResponse rsp = BatchSendEmailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchSendEmailOutcome(rsp);
        else
            return BatchSendEmailOutcome(o.GetError());
    }
    else
    {
        return BatchSendEmailOutcome(outcome.GetError());
    }
}

void SesClient::BatchSendEmailAsync(const BatchSendEmailRequest& request, const BatchSendEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchSendEmailRequest&;
    using Resp = BatchSendEmailResponse;

    DoRequestAsync<Req, Resp>(
        "BatchSendEmail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::BatchSendEmailOutcomeCallable SesClient::BatchSendEmailCallable(const BatchSendEmailRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchSendEmailOutcome>>();
    BatchSendEmailAsync(
    request,
    [prom](
        const SesClient*,
        const BatchSendEmailRequest&,
        BatchSendEmailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::CreateAddressUnsubscribeConfigOutcome SesClient::CreateAddressUnsubscribeConfig(const CreateAddressUnsubscribeConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAddressUnsubscribeConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAddressUnsubscribeConfigResponse rsp = CreateAddressUnsubscribeConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAddressUnsubscribeConfigOutcome(rsp);
        else
            return CreateAddressUnsubscribeConfigOutcome(o.GetError());
    }
    else
    {
        return CreateAddressUnsubscribeConfigOutcome(outcome.GetError());
    }
}

void SesClient::CreateAddressUnsubscribeConfigAsync(const CreateAddressUnsubscribeConfigRequest& request, const CreateAddressUnsubscribeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAddressUnsubscribeConfigRequest&;
    using Resp = CreateAddressUnsubscribeConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAddressUnsubscribeConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::CreateAddressUnsubscribeConfigOutcomeCallable SesClient::CreateAddressUnsubscribeConfigCallable(const CreateAddressUnsubscribeConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAddressUnsubscribeConfigOutcome>>();
    CreateAddressUnsubscribeConfigAsync(
    request,
    [prom](
        const SesClient*,
        const CreateAddressUnsubscribeConfigRequest&,
        CreateAddressUnsubscribeConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::CreateCustomBlacklistOutcome SesClient::CreateCustomBlacklist(const CreateCustomBlacklistRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomBlacklist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomBlacklistResponse rsp = CreateCustomBlacklistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomBlacklistOutcome(rsp);
        else
            return CreateCustomBlacklistOutcome(o.GetError());
    }
    else
    {
        return CreateCustomBlacklistOutcome(outcome.GetError());
    }
}

void SesClient::CreateCustomBlacklistAsync(const CreateCustomBlacklistRequest& request, const CreateCustomBlacklistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCustomBlacklistRequest&;
    using Resp = CreateCustomBlacklistResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCustomBlacklist", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::CreateCustomBlacklistOutcomeCallable SesClient::CreateCustomBlacklistCallable(const CreateCustomBlacklistRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCustomBlacklistOutcome>>();
    CreateCustomBlacklistAsync(
    request,
    [prom](
        const SesClient*,
        const CreateCustomBlacklistRequest&,
        CreateCustomBlacklistOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::CreateEmailAddressOutcome SesClient::CreateEmailAddress(const CreateEmailAddressRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEmailAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEmailAddressResponse rsp = CreateEmailAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEmailAddressOutcome(rsp);
        else
            return CreateEmailAddressOutcome(o.GetError());
    }
    else
    {
        return CreateEmailAddressOutcome(outcome.GetError());
    }
}

void SesClient::CreateEmailAddressAsync(const CreateEmailAddressRequest& request, const CreateEmailAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEmailAddressRequest&;
    using Resp = CreateEmailAddressResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEmailAddress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::CreateEmailAddressOutcomeCallable SesClient::CreateEmailAddressCallable(const CreateEmailAddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEmailAddressOutcome>>();
    CreateEmailAddressAsync(
    request,
    [prom](
        const SesClient*,
        const CreateEmailAddressRequest&,
        CreateEmailAddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::CreateEmailIdentityOutcome SesClient::CreateEmailIdentity(const CreateEmailIdentityRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEmailIdentity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEmailIdentityResponse rsp = CreateEmailIdentityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEmailIdentityOutcome(rsp);
        else
            return CreateEmailIdentityOutcome(o.GetError());
    }
    else
    {
        return CreateEmailIdentityOutcome(outcome.GetError());
    }
}

void SesClient::CreateEmailIdentityAsync(const CreateEmailIdentityRequest& request, const CreateEmailIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEmailIdentityRequest&;
    using Resp = CreateEmailIdentityResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEmailIdentity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::CreateEmailIdentityOutcomeCallable SesClient::CreateEmailIdentityCallable(const CreateEmailIdentityRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEmailIdentityOutcome>>();
    CreateEmailIdentityAsync(
    request,
    [prom](
        const SesClient*,
        const CreateEmailIdentityRequest&,
        CreateEmailIdentityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::CreateEmailTemplateOutcome SesClient::CreateEmailTemplate(const CreateEmailTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEmailTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEmailTemplateResponse rsp = CreateEmailTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEmailTemplateOutcome(rsp);
        else
            return CreateEmailTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateEmailTemplateOutcome(outcome.GetError());
    }
}

void SesClient::CreateEmailTemplateAsync(const CreateEmailTemplateRequest& request, const CreateEmailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEmailTemplateRequest&;
    using Resp = CreateEmailTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEmailTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::CreateEmailTemplateOutcomeCallable SesClient::CreateEmailTemplateCallable(const CreateEmailTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEmailTemplateOutcome>>();
    CreateEmailTemplateAsync(
    request,
    [prom](
        const SesClient*,
        const CreateEmailTemplateRequest&,
        CreateEmailTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::CreateReceiverOutcome SesClient::CreateReceiver(const CreateReceiverRequest &request)
{
    auto outcome = MakeRequest(request, "CreateReceiver");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReceiverResponse rsp = CreateReceiverResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReceiverOutcome(rsp);
        else
            return CreateReceiverOutcome(o.GetError());
    }
    else
    {
        return CreateReceiverOutcome(outcome.GetError());
    }
}

void SesClient::CreateReceiverAsync(const CreateReceiverRequest& request, const CreateReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateReceiverRequest&;
    using Resp = CreateReceiverResponse;

    DoRequestAsync<Req, Resp>(
        "CreateReceiver", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::CreateReceiverOutcomeCallable SesClient::CreateReceiverCallable(const CreateReceiverRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateReceiverOutcome>>();
    CreateReceiverAsync(
    request,
    [prom](
        const SesClient*,
        const CreateReceiverRequest&,
        CreateReceiverOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::CreateReceiverDetailOutcome SesClient::CreateReceiverDetail(const CreateReceiverDetailRequest &request)
{
    auto outcome = MakeRequest(request, "CreateReceiverDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReceiverDetailResponse rsp = CreateReceiverDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReceiverDetailOutcome(rsp);
        else
            return CreateReceiverDetailOutcome(o.GetError());
    }
    else
    {
        return CreateReceiverDetailOutcome(outcome.GetError());
    }
}

void SesClient::CreateReceiverDetailAsync(const CreateReceiverDetailRequest& request, const CreateReceiverDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateReceiverDetailRequest&;
    using Resp = CreateReceiverDetailResponse;

    DoRequestAsync<Req, Resp>(
        "CreateReceiverDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::CreateReceiverDetailOutcomeCallable SesClient::CreateReceiverDetailCallable(const CreateReceiverDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateReceiverDetailOutcome>>();
    CreateReceiverDetailAsync(
    request,
    [prom](
        const SesClient*,
        const CreateReceiverDetailRequest&,
        CreateReceiverDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::CreateReceiverDetailWithDataOutcome SesClient::CreateReceiverDetailWithData(const CreateReceiverDetailWithDataRequest &request)
{
    auto outcome = MakeRequest(request, "CreateReceiverDetailWithData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReceiverDetailWithDataResponse rsp = CreateReceiverDetailWithDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReceiverDetailWithDataOutcome(rsp);
        else
            return CreateReceiverDetailWithDataOutcome(o.GetError());
    }
    else
    {
        return CreateReceiverDetailWithDataOutcome(outcome.GetError());
    }
}

void SesClient::CreateReceiverDetailWithDataAsync(const CreateReceiverDetailWithDataRequest& request, const CreateReceiverDetailWithDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateReceiverDetailWithDataRequest&;
    using Resp = CreateReceiverDetailWithDataResponse;

    DoRequestAsync<Req, Resp>(
        "CreateReceiverDetailWithData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::CreateReceiverDetailWithDataOutcomeCallable SesClient::CreateReceiverDetailWithDataCallable(const CreateReceiverDetailWithDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateReceiverDetailWithDataOutcome>>();
    CreateReceiverDetailWithDataAsync(
    request,
    [prom](
        const SesClient*,
        const CreateReceiverDetailWithDataRequest&,
        CreateReceiverDetailWithDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::DeleteAddressUnsubscribeConfigOutcome SesClient::DeleteAddressUnsubscribeConfig(const DeleteAddressUnsubscribeConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAddressUnsubscribeConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAddressUnsubscribeConfigResponse rsp = DeleteAddressUnsubscribeConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAddressUnsubscribeConfigOutcome(rsp);
        else
            return DeleteAddressUnsubscribeConfigOutcome(o.GetError());
    }
    else
    {
        return DeleteAddressUnsubscribeConfigOutcome(outcome.GetError());
    }
}

void SesClient::DeleteAddressUnsubscribeConfigAsync(const DeleteAddressUnsubscribeConfigRequest& request, const DeleteAddressUnsubscribeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAddressUnsubscribeConfigRequest&;
    using Resp = DeleteAddressUnsubscribeConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAddressUnsubscribeConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::DeleteAddressUnsubscribeConfigOutcomeCallable SesClient::DeleteAddressUnsubscribeConfigCallable(const DeleteAddressUnsubscribeConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAddressUnsubscribeConfigOutcome>>();
    DeleteAddressUnsubscribeConfigAsync(
    request,
    [prom](
        const SesClient*,
        const DeleteAddressUnsubscribeConfigRequest&,
        DeleteAddressUnsubscribeConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::DeleteBlackListOutcome SesClient::DeleteBlackList(const DeleteBlackListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBlackList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBlackListResponse rsp = DeleteBlackListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBlackListOutcome(rsp);
        else
            return DeleteBlackListOutcome(o.GetError());
    }
    else
    {
        return DeleteBlackListOutcome(outcome.GetError());
    }
}

void SesClient::DeleteBlackListAsync(const DeleteBlackListRequest& request, const DeleteBlackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBlackListRequest&;
    using Resp = DeleteBlackListResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBlackList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::DeleteBlackListOutcomeCallable SesClient::DeleteBlackListCallable(const DeleteBlackListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBlackListOutcome>>();
    DeleteBlackListAsync(
    request,
    [prom](
        const SesClient*,
        const DeleteBlackListRequest&,
        DeleteBlackListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::DeleteCustomBlackListOutcome SesClient::DeleteCustomBlackList(const DeleteCustomBlackListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCustomBlackList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCustomBlackListResponse rsp = DeleteCustomBlackListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCustomBlackListOutcome(rsp);
        else
            return DeleteCustomBlackListOutcome(o.GetError());
    }
    else
    {
        return DeleteCustomBlackListOutcome(outcome.GetError());
    }
}

void SesClient::DeleteCustomBlackListAsync(const DeleteCustomBlackListRequest& request, const DeleteCustomBlackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCustomBlackListRequest&;
    using Resp = DeleteCustomBlackListResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCustomBlackList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::DeleteCustomBlackListOutcomeCallable SesClient::DeleteCustomBlackListCallable(const DeleteCustomBlackListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCustomBlackListOutcome>>();
    DeleteCustomBlackListAsync(
    request,
    [prom](
        const SesClient*,
        const DeleteCustomBlackListRequest&,
        DeleteCustomBlackListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::DeleteEmailAddressOutcome SesClient::DeleteEmailAddress(const DeleteEmailAddressRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEmailAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEmailAddressResponse rsp = DeleteEmailAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEmailAddressOutcome(rsp);
        else
            return DeleteEmailAddressOutcome(o.GetError());
    }
    else
    {
        return DeleteEmailAddressOutcome(outcome.GetError());
    }
}

void SesClient::DeleteEmailAddressAsync(const DeleteEmailAddressRequest& request, const DeleteEmailAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteEmailAddressRequest&;
    using Resp = DeleteEmailAddressResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteEmailAddress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::DeleteEmailAddressOutcomeCallable SesClient::DeleteEmailAddressCallable(const DeleteEmailAddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteEmailAddressOutcome>>();
    DeleteEmailAddressAsync(
    request,
    [prom](
        const SesClient*,
        const DeleteEmailAddressRequest&,
        DeleteEmailAddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::DeleteEmailIdentityOutcome SesClient::DeleteEmailIdentity(const DeleteEmailIdentityRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEmailIdentity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEmailIdentityResponse rsp = DeleteEmailIdentityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEmailIdentityOutcome(rsp);
        else
            return DeleteEmailIdentityOutcome(o.GetError());
    }
    else
    {
        return DeleteEmailIdentityOutcome(outcome.GetError());
    }
}

void SesClient::DeleteEmailIdentityAsync(const DeleteEmailIdentityRequest& request, const DeleteEmailIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteEmailIdentityRequest&;
    using Resp = DeleteEmailIdentityResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteEmailIdentity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::DeleteEmailIdentityOutcomeCallable SesClient::DeleteEmailIdentityCallable(const DeleteEmailIdentityRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteEmailIdentityOutcome>>();
    DeleteEmailIdentityAsync(
    request,
    [prom](
        const SesClient*,
        const DeleteEmailIdentityRequest&,
        DeleteEmailIdentityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::DeleteEmailTemplateOutcome SesClient::DeleteEmailTemplate(const DeleteEmailTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEmailTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEmailTemplateResponse rsp = DeleteEmailTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEmailTemplateOutcome(rsp);
        else
            return DeleteEmailTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteEmailTemplateOutcome(outcome.GetError());
    }
}

void SesClient::DeleteEmailTemplateAsync(const DeleteEmailTemplateRequest& request, const DeleteEmailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteEmailTemplateRequest&;
    using Resp = DeleteEmailTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteEmailTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::DeleteEmailTemplateOutcomeCallable SesClient::DeleteEmailTemplateCallable(const DeleteEmailTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteEmailTemplateOutcome>>();
    DeleteEmailTemplateAsync(
    request,
    [prom](
        const SesClient*,
        const DeleteEmailTemplateRequest&,
        DeleteEmailTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::DeleteReceiverOutcome SesClient::DeleteReceiver(const DeleteReceiverRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteReceiver");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteReceiverResponse rsp = DeleteReceiverResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteReceiverOutcome(rsp);
        else
            return DeleteReceiverOutcome(o.GetError());
    }
    else
    {
        return DeleteReceiverOutcome(outcome.GetError());
    }
}

void SesClient::DeleteReceiverAsync(const DeleteReceiverRequest& request, const DeleteReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteReceiverRequest&;
    using Resp = DeleteReceiverResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteReceiver", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::DeleteReceiverOutcomeCallable SesClient::DeleteReceiverCallable(const DeleteReceiverRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteReceiverOutcome>>();
    DeleteReceiverAsync(
    request,
    [prom](
        const SesClient*,
        const DeleteReceiverRequest&,
        DeleteReceiverOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::GetEmailIdentityOutcome SesClient::GetEmailIdentity(const GetEmailIdentityRequest &request)
{
    auto outcome = MakeRequest(request, "GetEmailIdentity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetEmailIdentityResponse rsp = GetEmailIdentityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetEmailIdentityOutcome(rsp);
        else
            return GetEmailIdentityOutcome(o.GetError());
    }
    else
    {
        return GetEmailIdentityOutcome(outcome.GetError());
    }
}

void SesClient::GetEmailIdentityAsync(const GetEmailIdentityRequest& request, const GetEmailIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetEmailIdentityRequest&;
    using Resp = GetEmailIdentityResponse;

    DoRequestAsync<Req, Resp>(
        "GetEmailIdentity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::GetEmailIdentityOutcomeCallable SesClient::GetEmailIdentityCallable(const GetEmailIdentityRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetEmailIdentityOutcome>>();
    GetEmailIdentityAsync(
    request,
    [prom](
        const SesClient*,
        const GetEmailIdentityRequest&,
        GetEmailIdentityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::GetEmailTemplateOutcome SesClient::GetEmailTemplate(const GetEmailTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "GetEmailTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetEmailTemplateResponse rsp = GetEmailTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetEmailTemplateOutcome(rsp);
        else
            return GetEmailTemplateOutcome(o.GetError());
    }
    else
    {
        return GetEmailTemplateOutcome(outcome.GetError());
    }
}

void SesClient::GetEmailTemplateAsync(const GetEmailTemplateRequest& request, const GetEmailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetEmailTemplateRequest&;
    using Resp = GetEmailTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "GetEmailTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::GetEmailTemplateOutcomeCallable SesClient::GetEmailTemplateCallable(const GetEmailTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetEmailTemplateOutcome>>();
    GetEmailTemplateAsync(
    request,
    [prom](
        const SesClient*,
        const GetEmailTemplateRequest&,
        GetEmailTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::GetSendEmailStatusOutcome SesClient::GetSendEmailStatus(const GetSendEmailStatusRequest &request)
{
    auto outcome = MakeRequest(request, "GetSendEmailStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetSendEmailStatusResponse rsp = GetSendEmailStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetSendEmailStatusOutcome(rsp);
        else
            return GetSendEmailStatusOutcome(o.GetError());
    }
    else
    {
        return GetSendEmailStatusOutcome(outcome.GetError());
    }
}

void SesClient::GetSendEmailStatusAsync(const GetSendEmailStatusRequest& request, const GetSendEmailStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetSendEmailStatusRequest&;
    using Resp = GetSendEmailStatusResponse;

    DoRequestAsync<Req, Resp>(
        "GetSendEmailStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::GetSendEmailStatusOutcomeCallable SesClient::GetSendEmailStatusCallable(const GetSendEmailStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetSendEmailStatusOutcome>>();
    GetSendEmailStatusAsync(
    request,
    [prom](
        const SesClient*,
        const GetSendEmailStatusRequest&,
        GetSendEmailStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::GetStatisticsReportOutcome SesClient::GetStatisticsReport(const GetStatisticsReportRequest &request)
{
    auto outcome = MakeRequest(request, "GetStatisticsReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetStatisticsReportResponse rsp = GetStatisticsReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetStatisticsReportOutcome(rsp);
        else
            return GetStatisticsReportOutcome(o.GetError());
    }
    else
    {
        return GetStatisticsReportOutcome(outcome.GetError());
    }
}

void SesClient::GetStatisticsReportAsync(const GetStatisticsReportRequest& request, const GetStatisticsReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetStatisticsReportRequest&;
    using Resp = GetStatisticsReportResponse;

    DoRequestAsync<Req, Resp>(
        "GetStatisticsReport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::GetStatisticsReportOutcomeCallable SesClient::GetStatisticsReportCallable(const GetStatisticsReportRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetStatisticsReportOutcome>>();
    GetStatisticsReportAsync(
    request,
    [prom](
        const SesClient*,
        const GetStatisticsReportRequest&,
        GetStatisticsReportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::ListAddressUnsubscribeConfigOutcome SesClient::ListAddressUnsubscribeConfig(const ListAddressUnsubscribeConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ListAddressUnsubscribeConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAddressUnsubscribeConfigResponse rsp = ListAddressUnsubscribeConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAddressUnsubscribeConfigOutcome(rsp);
        else
            return ListAddressUnsubscribeConfigOutcome(o.GetError());
    }
    else
    {
        return ListAddressUnsubscribeConfigOutcome(outcome.GetError());
    }
}

void SesClient::ListAddressUnsubscribeConfigAsync(const ListAddressUnsubscribeConfigRequest& request, const ListAddressUnsubscribeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAddressUnsubscribeConfigRequest&;
    using Resp = ListAddressUnsubscribeConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ListAddressUnsubscribeConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::ListAddressUnsubscribeConfigOutcomeCallable SesClient::ListAddressUnsubscribeConfigCallable(const ListAddressUnsubscribeConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAddressUnsubscribeConfigOutcome>>();
    ListAddressUnsubscribeConfigAsync(
    request,
    [prom](
        const SesClient*,
        const ListAddressUnsubscribeConfigRequest&,
        ListAddressUnsubscribeConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::ListBlackEmailAddressOutcome SesClient::ListBlackEmailAddress(const ListBlackEmailAddressRequest &request)
{
    auto outcome = MakeRequest(request, "ListBlackEmailAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListBlackEmailAddressResponse rsp = ListBlackEmailAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListBlackEmailAddressOutcome(rsp);
        else
            return ListBlackEmailAddressOutcome(o.GetError());
    }
    else
    {
        return ListBlackEmailAddressOutcome(outcome.GetError());
    }
}

void SesClient::ListBlackEmailAddressAsync(const ListBlackEmailAddressRequest& request, const ListBlackEmailAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListBlackEmailAddressRequest&;
    using Resp = ListBlackEmailAddressResponse;

    DoRequestAsync<Req, Resp>(
        "ListBlackEmailAddress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::ListBlackEmailAddressOutcomeCallable SesClient::ListBlackEmailAddressCallable(const ListBlackEmailAddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListBlackEmailAddressOutcome>>();
    ListBlackEmailAddressAsync(
    request,
    [prom](
        const SesClient*,
        const ListBlackEmailAddressRequest&,
        ListBlackEmailAddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::ListCustomBlacklistOutcome SesClient::ListCustomBlacklist(const ListCustomBlacklistRequest &request)
{
    auto outcome = MakeRequest(request, "ListCustomBlacklist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListCustomBlacklistResponse rsp = ListCustomBlacklistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListCustomBlacklistOutcome(rsp);
        else
            return ListCustomBlacklistOutcome(o.GetError());
    }
    else
    {
        return ListCustomBlacklistOutcome(outcome.GetError());
    }
}

void SesClient::ListCustomBlacklistAsync(const ListCustomBlacklistRequest& request, const ListCustomBlacklistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListCustomBlacklistRequest&;
    using Resp = ListCustomBlacklistResponse;

    DoRequestAsync<Req, Resp>(
        "ListCustomBlacklist", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::ListCustomBlacklistOutcomeCallable SesClient::ListCustomBlacklistCallable(const ListCustomBlacklistRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListCustomBlacklistOutcome>>();
    ListCustomBlacklistAsync(
    request,
    [prom](
        const SesClient*,
        const ListCustomBlacklistRequest&,
        ListCustomBlacklistOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::ListEmailAddressOutcome SesClient::ListEmailAddress(const ListEmailAddressRequest &request)
{
    auto outcome = MakeRequest(request, "ListEmailAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListEmailAddressResponse rsp = ListEmailAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListEmailAddressOutcome(rsp);
        else
            return ListEmailAddressOutcome(o.GetError());
    }
    else
    {
        return ListEmailAddressOutcome(outcome.GetError());
    }
}

void SesClient::ListEmailAddressAsync(const ListEmailAddressRequest& request, const ListEmailAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListEmailAddressRequest&;
    using Resp = ListEmailAddressResponse;

    DoRequestAsync<Req, Resp>(
        "ListEmailAddress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::ListEmailAddressOutcomeCallable SesClient::ListEmailAddressCallable(const ListEmailAddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListEmailAddressOutcome>>();
    ListEmailAddressAsync(
    request,
    [prom](
        const SesClient*,
        const ListEmailAddressRequest&,
        ListEmailAddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::ListEmailIdentitiesOutcome SesClient::ListEmailIdentities(const ListEmailIdentitiesRequest &request)
{
    auto outcome = MakeRequest(request, "ListEmailIdentities");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListEmailIdentitiesResponse rsp = ListEmailIdentitiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListEmailIdentitiesOutcome(rsp);
        else
            return ListEmailIdentitiesOutcome(o.GetError());
    }
    else
    {
        return ListEmailIdentitiesOutcome(outcome.GetError());
    }
}

void SesClient::ListEmailIdentitiesAsync(const ListEmailIdentitiesRequest& request, const ListEmailIdentitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListEmailIdentitiesRequest&;
    using Resp = ListEmailIdentitiesResponse;

    DoRequestAsync<Req, Resp>(
        "ListEmailIdentities", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::ListEmailIdentitiesOutcomeCallable SesClient::ListEmailIdentitiesCallable(const ListEmailIdentitiesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListEmailIdentitiesOutcome>>();
    ListEmailIdentitiesAsync(
    request,
    [prom](
        const SesClient*,
        const ListEmailIdentitiesRequest&,
        ListEmailIdentitiesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::ListEmailTemplatesOutcome SesClient::ListEmailTemplates(const ListEmailTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "ListEmailTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListEmailTemplatesResponse rsp = ListEmailTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListEmailTemplatesOutcome(rsp);
        else
            return ListEmailTemplatesOutcome(o.GetError());
    }
    else
    {
        return ListEmailTemplatesOutcome(outcome.GetError());
    }
}

void SesClient::ListEmailTemplatesAsync(const ListEmailTemplatesRequest& request, const ListEmailTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListEmailTemplatesRequest&;
    using Resp = ListEmailTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "ListEmailTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::ListEmailTemplatesOutcomeCallable SesClient::ListEmailTemplatesCallable(const ListEmailTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListEmailTemplatesOutcome>>();
    ListEmailTemplatesAsync(
    request,
    [prom](
        const SesClient*,
        const ListEmailTemplatesRequest&,
        ListEmailTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::ListReceiverDetailsOutcome SesClient::ListReceiverDetails(const ListReceiverDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "ListReceiverDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListReceiverDetailsResponse rsp = ListReceiverDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListReceiverDetailsOutcome(rsp);
        else
            return ListReceiverDetailsOutcome(o.GetError());
    }
    else
    {
        return ListReceiverDetailsOutcome(outcome.GetError());
    }
}

void SesClient::ListReceiverDetailsAsync(const ListReceiverDetailsRequest& request, const ListReceiverDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListReceiverDetailsRequest&;
    using Resp = ListReceiverDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "ListReceiverDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::ListReceiverDetailsOutcomeCallable SesClient::ListReceiverDetailsCallable(const ListReceiverDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListReceiverDetailsOutcome>>();
    ListReceiverDetailsAsync(
    request,
    [prom](
        const SesClient*,
        const ListReceiverDetailsRequest&,
        ListReceiverDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::ListReceiversOutcome SesClient::ListReceivers(const ListReceiversRequest &request)
{
    auto outcome = MakeRequest(request, "ListReceivers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListReceiversResponse rsp = ListReceiversResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListReceiversOutcome(rsp);
        else
            return ListReceiversOutcome(o.GetError());
    }
    else
    {
        return ListReceiversOutcome(outcome.GetError());
    }
}

void SesClient::ListReceiversAsync(const ListReceiversRequest& request, const ListReceiversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListReceiversRequest&;
    using Resp = ListReceiversResponse;

    DoRequestAsync<Req, Resp>(
        "ListReceivers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::ListReceiversOutcomeCallable SesClient::ListReceiversCallable(const ListReceiversRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListReceiversOutcome>>();
    ListReceiversAsync(
    request,
    [prom](
        const SesClient*,
        const ListReceiversRequest&,
        ListReceiversOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::ListSendTasksOutcome SesClient::ListSendTasks(const ListSendTasksRequest &request)
{
    auto outcome = MakeRequest(request, "ListSendTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListSendTasksResponse rsp = ListSendTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListSendTasksOutcome(rsp);
        else
            return ListSendTasksOutcome(o.GetError());
    }
    else
    {
        return ListSendTasksOutcome(outcome.GetError());
    }
}

void SesClient::ListSendTasksAsync(const ListSendTasksRequest& request, const ListSendTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListSendTasksRequest&;
    using Resp = ListSendTasksResponse;

    DoRequestAsync<Req, Resp>(
        "ListSendTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::ListSendTasksOutcomeCallable SesClient::ListSendTasksCallable(const ListSendTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListSendTasksOutcome>>();
    ListSendTasksAsync(
    request,
    [prom](
        const SesClient*,
        const ListSendTasksRequest&,
        ListSendTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::SendEmailOutcome SesClient::SendEmail(const SendEmailRequest &request)
{
    auto outcome = MakeRequest(request, "SendEmail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendEmailResponse rsp = SendEmailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendEmailOutcome(rsp);
        else
            return SendEmailOutcome(o.GetError());
    }
    else
    {
        return SendEmailOutcome(outcome.GetError());
    }
}

void SesClient::SendEmailAsync(const SendEmailRequest& request, const SendEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SendEmailRequest&;
    using Resp = SendEmailResponse;

    DoRequestAsync<Req, Resp>(
        "SendEmail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::SendEmailOutcomeCallable SesClient::SendEmailCallable(const SendEmailRequest &request)
{
    const auto prom = std::make_shared<std::promise<SendEmailOutcome>>();
    SendEmailAsync(
    request,
    [prom](
        const SesClient*,
        const SendEmailRequest&,
        SendEmailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::UpdateAddressUnsubscribeConfigOutcome SesClient::UpdateAddressUnsubscribeConfig(const UpdateAddressUnsubscribeConfigRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAddressUnsubscribeConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAddressUnsubscribeConfigResponse rsp = UpdateAddressUnsubscribeConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAddressUnsubscribeConfigOutcome(rsp);
        else
            return UpdateAddressUnsubscribeConfigOutcome(o.GetError());
    }
    else
    {
        return UpdateAddressUnsubscribeConfigOutcome(outcome.GetError());
    }
}

void SesClient::UpdateAddressUnsubscribeConfigAsync(const UpdateAddressUnsubscribeConfigRequest& request, const UpdateAddressUnsubscribeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateAddressUnsubscribeConfigRequest&;
    using Resp = UpdateAddressUnsubscribeConfigResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAddressUnsubscribeConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::UpdateAddressUnsubscribeConfigOutcomeCallable SesClient::UpdateAddressUnsubscribeConfigCallable(const UpdateAddressUnsubscribeConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAddressUnsubscribeConfigOutcome>>();
    UpdateAddressUnsubscribeConfigAsync(
    request,
    [prom](
        const SesClient*,
        const UpdateAddressUnsubscribeConfigRequest&,
        UpdateAddressUnsubscribeConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::UpdateCustomBlackListOutcome SesClient::UpdateCustomBlackList(const UpdateCustomBlackListRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCustomBlackList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCustomBlackListResponse rsp = UpdateCustomBlackListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCustomBlackListOutcome(rsp);
        else
            return UpdateCustomBlackListOutcome(o.GetError());
    }
    else
    {
        return UpdateCustomBlackListOutcome(outcome.GetError());
    }
}

void SesClient::UpdateCustomBlackListAsync(const UpdateCustomBlackListRequest& request, const UpdateCustomBlackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCustomBlackListRequest&;
    using Resp = UpdateCustomBlackListResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCustomBlackList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::UpdateCustomBlackListOutcomeCallable SesClient::UpdateCustomBlackListCallable(const UpdateCustomBlackListRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCustomBlackListOutcome>>();
    UpdateCustomBlackListAsync(
    request,
    [prom](
        const SesClient*,
        const UpdateCustomBlackListRequest&,
        UpdateCustomBlackListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::UpdateEmailIdentityOutcome SesClient::UpdateEmailIdentity(const UpdateEmailIdentityRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateEmailIdentity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateEmailIdentityResponse rsp = UpdateEmailIdentityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateEmailIdentityOutcome(rsp);
        else
            return UpdateEmailIdentityOutcome(o.GetError());
    }
    else
    {
        return UpdateEmailIdentityOutcome(outcome.GetError());
    }
}

void SesClient::UpdateEmailIdentityAsync(const UpdateEmailIdentityRequest& request, const UpdateEmailIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateEmailIdentityRequest&;
    using Resp = UpdateEmailIdentityResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateEmailIdentity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::UpdateEmailIdentityOutcomeCallable SesClient::UpdateEmailIdentityCallable(const UpdateEmailIdentityRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateEmailIdentityOutcome>>();
    UpdateEmailIdentityAsync(
    request,
    [prom](
        const SesClient*,
        const UpdateEmailIdentityRequest&,
        UpdateEmailIdentityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::UpdateEmailSmtpPassWordOutcome SesClient::UpdateEmailSmtpPassWord(const UpdateEmailSmtpPassWordRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateEmailSmtpPassWord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateEmailSmtpPassWordResponse rsp = UpdateEmailSmtpPassWordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateEmailSmtpPassWordOutcome(rsp);
        else
            return UpdateEmailSmtpPassWordOutcome(o.GetError());
    }
    else
    {
        return UpdateEmailSmtpPassWordOutcome(outcome.GetError());
    }
}

void SesClient::UpdateEmailSmtpPassWordAsync(const UpdateEmailSmtpPassWordRequest& request, const UpdateEmailSmtpPassWordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateEmailSmtpPassWordRequest&;
    using Resp = UpdateEmailSmtpPassWordResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateEmailSmtpPassWord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::UpdateEmailSmtpPassWordOutcomeCallable SesClient::UpdateEmailSmtpPassWordCallable(const UpdateEmailSmtpPassWordRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateEmailSmtpPassWordOutcome>>();
    UpdateEmailSmtpPassWordAsync(
    request,
    [prom](
        const SesClient*,
        const UpdateEmailSmtpPassWordRequest&,
        UpdateEmailSmtpPassWordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SesClient::UpdateEmailTemplateOutcome SesClient::UpdateEmailTemplate(const UpdateEmailTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateEmailTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateEmailTemplateResponse rsp = UpdateEmailTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateEmailTemplateOutcome(rsp);
        else
            return UpdateEmailTemplateOutcome(o.GetError());
    }
    else
    {
        return UpdateEmailTemplateOutcome(outcome.GetError());
    }
}

void SesClient::UpdateEmailTemplateAsync(const UpdateEmailTemplateRequest& request, const UpdateEmailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateEmailTemplateRequest&;
    using Resp = UpdateEmailTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateEmailTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SesClient::UpdateEmailTemplateOutcomeCallable SesClient::UpdateEmailTemplateCallable(const UpdateEmailTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateEmailTemplateOutcome>>();
    UpdateEmailTemplateAsync(
    request,
    [prom](
        const SesClient*,
        const UpdateEmailTemplateRequest&,
        UpdateEmailTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

